#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);
    socketClientBanque = new QTcpSocket;
    ui->groupBox_Operations->setEnabled(false);
    ui->radioButton_Solde->setChecked(true);
    connect(socketClientBanque, &QAbstractSocket::connected, this, &DAB_MainWindow::onQTcpSocket_connected);
    connect(socketClientBanque, &QAbstractSocket::disconnected, this, &DAB_MainWindow::onQTcpSocket_disconnected);
    connect(socketClientBanque, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &DAB_MainWindow::onQTcpSocket_error);
    connect(socketClientBanque, &QAbstractSocket::readyRead, this, &DAB_MainWindow::onQTcpSocket_readyRead);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}


void DAB_MainWindow::on_pushButton_Connexion_clicked()
{
    if(ui->pushButton_Connexion->text() == "Connexion"){
        QHostAddress adresse(ui->lineEdit_Adresse->text());
        socketClientBanque->connectToHost(adresse, ui->lineEdit_Port->text().toUInt());
        ui->pushButton_Connexion->setText("Déconnexion");
        ui->groupBox_Operations->setEnabled(true);
    }
    else{
        ui->pushButton_Connexion->setText("Connexion");
        socketClientBanque->disconnectFromHost();
        ui->groupBox_Operations->setEnabled(false);
    }
}

void DAB_MainWindow::on_pushButton_Envoi_clicked()
{
    quint16 taille = 0;
    QChar commande;
    QBuffer tampon;
    QString message;
    float montant = 0;
    if(ui->radioButton_Depot->isChecked()){
        commande = 'D';
        montant = ui->lineEdit_Montant->text().toFloat();
        tampon.open(QIODevice::WriteOnly);
        //association du tampon au flux de sortie
        QDataStream out(&tampon);
        //construction de la trame
        out << taille << commande << montant;
        //calcul de la taille de la trame
        taille = tampon.size()-sizeof(taille);
        //placement sur la première position du flux pour pouvoir modifier la taille
        tampon.seek(0);
        //modification de la trame avec la taille réel de la trame
        out << taille;
        //envoi du QByteArray du tampon via la socket
        socketClientBanque->write(tampon.buffer());
        ui->listWidget_Etat->addItem("Demande de dépot envoyé");
    }
    if(ui->radioButton_Retrait->isChecked()){
        commande = 'R';
        montant = ui->lineEdit_Montant->text().toFloat();
        tampon.open(QIODevice::WriteOnly);
        //association du tampon au flux de sortie
        QDataStream out(&tampon);
        //construction de la trame
        out << taille << commande << montant;
        //calcul de la taille de la trame
        taille = tampon.size()-sizeof(taille);
        //placement sur la première position du flux pour pouvoir modifier la taille
        tampon.seek(0);
        //modification de la trame avec la taille réel de la trame
        out << taille;
        //envoi du QByteArray du tampon via la socket
        socketClientBanque->write(tampon.buffer());
        ui->listWidget_Etat->addItem("Demande de retrait envoyé");
    }
    if(ui->radioButton_Solde->isChecked()){
        commande = 'S';
        tampon.open(QIODevice::WriteOnly);
        //association du tampon au flux de sortie
        QDataStream out(&tampon);
        //construction de la trame
        out << taille << commande;
        //calcul de la taille de la trame
        taille = tampon.size()-sizeof(taille);
        //placement sur la première position du flux pour pouvoir modifier la taille
        tampon.seek(0);
        //modification de la trame avec la taille réel de la trame
        out << taille;
        //envoi du QByteArray du tampon via la socket
        socketClientBanque->write(tampon.buffer());
        ui->listWidget_Etat->addItem("Demande de consultation du solde envoyé");
    }
}

void DAB_MainWindow::on_pushButton_NumCompte_clicked()
{
    quint16 taille = 0;
    QChar commande = 'N';
    int compte = ui->lineEdit_NumCompte->text().toInt();
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    //association du tampon au flux de sortie
    QDataStream out(&tampon);
    if(compte != 0){
        //construction de la trame
        out << taille << commande << compte;
        //calcul de la taille de la trame
        taille = tampon.size()-sizeof(taille);
        //placement sur la première position du flux pour pouvoir modifier la taille
        tampon.seek(0);
        //modification de la trame avec la taille réel de la trame
        out << taille;
        //envoi du QByteArray du tampon via la socket
        socketClientBanque->write(tampon.buffer());
        ui->listWidget_Etat->addItem("Numéro de compte envoyé");
    }
    else{
        ui->listWidget_Etat->addItem("Numéro de compte vaut 0");
    }
}

void DAB_MainWindow::onQTcpSocket_connected()
{
    ui->listWidget_Etat->addItem("Connecté au serveur");
}

void DAB_MainWindow::onQTcpSocket_disconnected()
{
    ui->listWidget_Etat->addItem("Déconnecté du serveur");
}

void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->listWidget_Etat->addItem(socketClientBanque->errorString());
}

void DAB_MainWindow::onQTcpSocket_readyRead()
{
    ui->listWidget_Etat->addItem("Des données sont disponibles à la lecture");
    quint16 taille = 0;
    QString message;
    //si le nombre d'octets reçu est au moins égal à celui de la taille de ce que l'on doit recevoir
    if(socketClientBanque->bytesAvailable() >= (qint64)sizeof (taille)){
        //association de la socket au flux d'entrée
        QDataStream in(socketClientBanque);
        //extraire la taille de ce que l'on doit recevoir
        in >> taille;
        //si le nombre d'octets reçu est au moins égal à celui de ce que l'on doit recevoir
        if(socketClientBanque->bytesAvailable() >= (qint64)taille){
            //extraire le message de la banque et le mettre dans message
            in >> message;
        }
    }
    ui->lineEdit_MessageBanque->setText(message);
}
