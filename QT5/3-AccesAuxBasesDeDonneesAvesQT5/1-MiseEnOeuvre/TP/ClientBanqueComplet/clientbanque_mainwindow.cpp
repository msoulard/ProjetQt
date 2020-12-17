#include "clientbanque_mainwindow.h"
#include "ui_clientbanque_mainwindow.h"

clientBanque_MainWindow::clientBanque_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::clientBanque_MainWindow),
      creationCompteDlg(nullptr)
{
    ui->setupUi(this);
    socketClientBanque = new QTcpSocket;
    ui->groupBox_Operations->setEnabled(false);
    ui->radioButton_Solde->setChecked(true);
    connect(socketClientBanque, &QAbstractSocket::connected, this, &clientBanque_MainWindow::onQTcpSocket_connected);
    connect(socketClientBanque, &QAbstractSocket::disconnected, this, &clientBanque_MainWindow::onQTcpSocket_disconnected);
    connect(socketClientBanque, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &clientBanque_MainWindow::onQTcpSocket_error);
    connect(socketClientBanque, &QAbstractSocket::readyRead, this, &clientBanque_MainWindow::onQTcpSocket_readyRead);
    QRegExp expChiffre("[0-9,.]{1,1000}");
    QRegExpValidator *valChiffre = new QRegExpValidator(expChiffre, this);
    ui->lineEdit_NumCompte->setValidator(valChiffre);
}

clientBanque_MainWindow::~clientBanque_MainWindow()
{
    delete ui;
    if(creationCompteDlg != nullptr){
        delete creationCompteDlg;
    }
}

void clientBanque_MainWindow::on_pushButton_Connexion_clicked()
{
    if(ui->pushButton_Connexion->text() == "Connexion"){
        QHostAddress adresse(ui->lineEdit_Adresse->text());
        socketClientBanque->connectToHost(adresse, ui->lineEdit_Port->text().toUInt());
        ui->pushButton_Connexion->setText("Déconnexion");
        ui->groupBox_Operations->setEnabled(true);

        agences.clear();
        //agences<<"Le Mans" << "La ferté Bernard" << "Arnage";
        quint16 taille = 0;
        QChar commande = 'A';
        QBuffer tampon;
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
    }
    else{
        ui->pushButton_Connexion->setText("Connexion");
        socketClientBanque->disconnectFromHost();
        ui->groupBox_Operations->setEnabled(false);
    }

}

void clientBanque_MainWindow::on_pushButton_Envoi_clicked()
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

void clientBanque_MainWindow::on_pushButton_NumCompte_clicked()
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

void clientBanque_MainWindow::onQTcpSocket_connected()
{
    ui->listWidget_Etat->addItem("Connecté au serveur");
}

void clientBanque_MainWindow::onQTcpSocket_disconnected()
{
    ui->listWidget_Etat->addItem("Déconnecté du serveur");
    ui->pushButton_Connexion->setText("Connexion");
    ui->groupBox_Operations->setEnabled(false);
}

void clientBanque_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->listWidget_Etat->addItem(socketClientBanque->errorString());
}

void clientBanque_MainWindow::onQTcpSocket_readyRead()
{
    ui->listWidget_Etat->addItem("Des données sont disponibles à la lecture");
    quint16 taille = 0;
    QString message;
    QChar commande;
    //si le nombre d'octets reçu est au moins égal à celui de la taille de ce que l'on doit recevoir
    if(socketClientBanque->bytesAvailable() >= (qint64)sizeof (taille)){
        //association de la socket au flux d'entrée
        QDataStream in(socketClientBanque);
        //extraire la taille de ce que l'on doit recevoir
        in >> taille;
        //si le nombre d'octets reçu est au moins égal à celui de ce que l'on doit recevoir
        if(socketClientBanque->bytesAvailable() >= (qint64)taille){
            //extraire le message de la banque et le mettre dans message
            in >> commande >> message;
        }
    }
    switch (commande.toLatin1()) {
    case 'D' :
        ui->lineEdit_MessageBanque->setText(message);
        break;
    case 'M' :
        ui->lineEdit_MessageBanque->setText(message);
        break;
    case 'R' :
        ui->lineEdit_MessageBanque->setText(message);
        break;
    case 'S' :
        ui->lineEdit_MessageBanque->setText(message);
        break;
    case 'N' :
        ui->lineEdit_MessageBanque->setText(message);
        break;
    case 'C' :
        ui->lineEdit_MessageBanque->setText(message);
        break;
    case 'A' :
        //récuperer la liste d'agences
        agences = message.split(";");
        creationCompteDlg = new CreationClient_Dialog(agences);
        break;
    case 'E':
        ui->lineEdit_MessageBanque->setText("Compte n'existe pas");
        creationCompteDlg->setWindowTitle("Création du compte " + message);
        if(creationCompteDlg->exec() == QDialog::Accepted){
            QString nom = creationCompteDlg->getNom();
            QString prenom = creationCompteDlg->getPrenom();
            QString villeOrigine = creationCompteDlg->getVilleOrigine();
            int solde = creationCompteDlg->getSolde();
            QString villeBanque = creationCompteDlg->getVilleBanque();
            //envoie infos client
            quint16 taille = 0;
            QChar commande = 'C';
            QBuffer tampon;
            tampon.open(QIODevice::WriteOnly);
            //association du tampon au flux de sortie
            QDataStream out(&tampon);
                //construction de la trame
                out << taille << commande << message.toInt() << nom << prenom << villeOrigine << solde << villeBanque;
                //calcul de la taille de la trame
                taille = tampon.size()-sizeof(taille);
                //placement sur la première position du flux pour pouvoir modifier la taille
                tampon.seek(0);
                //modification de la trame avec la taille réel de la trame
                out << taille;
                //envoi du QByteArray du tampon via la socket
                socketClientBanque->write(tampon.buffer());
                ui->listWidget_Etat->addItem("Infos client envoyés");
        }
        break;
    }
}
