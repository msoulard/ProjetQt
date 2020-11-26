#include "clientwidget.h"
#include "ui_clientwidget.h"

ClientWidget::ClientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClientWidget)
{
    ui->setupUi(this);
    socketDialServeur = new QTcpSocket;
    ui->groupBox_InfosClient->setEnabled(false);
    connect(socketDialServeur, &QAbstractSocket::connected, this, &ClientWidget::onQTcpSocket_connected);
    connect(socketDialServeur, &QAbstractSocket::disconnected, this, &ClientWidget::onQTcpSocket_disconnected);
    connect(socketDialServeur, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &ClientWidget::onQTcpSocket_error);
    connect(socketDialServeur, &QAbstractSocket::hostFound, this, &ClientWidget::onQTcpSocket_hostFound);
    connect(socketDialServeur, &QAbstractSocket::stateChanged, this, &ClientWidget::onQTcpSocket_stateChanged);
    connect(socketDialServeur, &QAbstractSocket::aboutToClose, this, &ClientWidget::onQTcpSocket_aboutToClose);
    connect(socketDialServeur, &QAbstractSocket::bytesWritten, this, &ClientWidget::onQTcpSocket_bytesWritten);
    connect(socketDialServeur, &QAbstractSocket::readChannelFinished, this, &ClientWidget::onQTcpSocket_readChannelFinished);
    connect(socketDialServeur, &QAbstractSocket::readyRead, this, &ClientWidget::onQTcpSocket_readyRead);
}

ClientWidget::~ClientWidget()
{
    delete ui;
    delete socketDialServeur;
}


void ClientWidget::on_pushButton_Connexion_clicked()
{
    if(ui->pushButton_Connexion->text() == "Connexion"){
        QHostAddress adresse(ui->lineEdit_IPServeur->text());
        socketDialServeur->connectToHost(adresse, ui->lineEdit_PortServeur->text().toUInt());
        ui->pushButton_Connexion->setText("Déconnexion");
        ui->groupBox_InfosClient->setEnabled(true);
        ui->lineEdit_IPServeur->setEnabled(false);
        ui->lineEdit_PortServeur->setEnabled(false);
    }
    else{
        ui->pushButton_Connexion->setText("Connexion");
        socketDialServeur->disconnectFromHost();
        ui->groupBox_InfosClient->setEnabled(false);
        ui->lineEdit_IPServeur->setEnabled(true);
        ui->lineEdit_PortServeur->setEnabled(true);
    }
}

void ClientWidget::on_pushButton_NomOrdi_clicked()
{
    typeDeDemande = "c";
    socketDialServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButton_NomUtili_clicked()
{
    typeDeDemande="u";
    socketDialServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButton_ArchitectureProcess_clicked()
{
    typeDeDemande="a";
    socketDialServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButton_OSUtili_clicked()
{
    typeDeDemande = "o";
    socketDialServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::onQTcpSocket_connected()
{
    ui->textEdit_Etat->append("Connecté au serveur");

}

void ClientWidget::onQTcpSocket_disconnected()
{
    ui->textEdit_Etat->append("Déconnecté du serveur");

}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->textEdit_Etat->append(socketDialServeur->errorString());
}

void ClientWidget::onQTcpSocket_hostFound()
{
    ui->textEdit_Etat->append("Hôte trouvé");
}

void ClientWidget::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
    QString message;
    switch (socketState)
    {
    case QAbstractSocket::UnconnectedState:
        message = "etat déconnecté";
        break;
    case QAbstractSocket::HostLookupState:
        message = "socket recherche un nom d'hote";
        break;
    case QAbstractSocket::ConnectingState:
        message = "etat connecté";
        break;
    case QAbstractSocket::ConnectedState:
        message = "etat connecté";
        break;
    case QAbstractSocket::BoundState:
        message = "la socket est liée avec le port et l'ip";
        break;
    case QAbstractSocket::ClosingState:
        message = "etat fermé";
        break;
    case QAbstractSocket::ListeningState:
        message = "etat d'écoute";
        break;
    }
    ui->textEdit_Etat->append(message);
}

void ClientWidget::onQTcpSocket_aboutToClose()
{
    ui->textEdit_Etat->append("L'appareil va s'éteindre");
}

void ClientWidget::onQTcpSocket_bytesWritten(qint64 bytes)
{
    ui->textEdit_Etat->append("Des données sont en train d'être écrite sur le canal d'écriture");
}

void ClientWidget::onQTcpSocket_readChannelFinished()
{
    ui->textEdit_Etat->append("La lecture est finie");
}

void ClientWidget::onQTcpSocket_readyRead()
{
    ui->textEdit_Etat->append("Des données sont disponibles à la lecture");
    QByteArray data;
    if(socketDialServeur->bytesAvailable() > 0){
        data = socketDialServeur->readAll();
    }
    switch (typeDeDemande.at(0).toLatin1()) {
    case 'u':
        ui->lineEdit_NomUtili->setText(data);
        break;
    case 'c':
        ui->lineEdit_NomOrdi->setText(data);
        break;
    case 'o':
        ui->lineEdit_OSUtili->setText(data);
        break;
    case 'a':
        ui->lineEdit_ArchitectureProcess->setText(data);
        break;
    default:
        break;
    }
}
