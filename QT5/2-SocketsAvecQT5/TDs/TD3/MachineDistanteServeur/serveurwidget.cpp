#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer;
    socketDialogueClient = new QTcpSocket;
    process = new QProcess;
    connect(socketEcouteServeur, &QTcpServer::newConnection, this, &ServeurWidget::onQTcpServer_newConnection);
    connect(process, &QProcess::readyReadStandardOutput, this, &ServeurWidget::onQProcess_readyReadStandardOutput);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
    delete socketEcouteServeur;
    delete socketDialogueClient;
    delete process;
}

void ServeurWidget::onQTcpServer_newConnection()
{
    socketDialogueClient = socketEcouteServeur->nextPendingConnection();
    connect(socketDialogueClient, &QTcpSocket::readyRead, this, &ServeurWidget::onQTcpSocket_readyRead);
    connect(socketDialogueClient, &QTcpSocket::disconnected, this, &ServeurWidget::onQTcpSocket_disconnected);
    ui->listWidget_Clients->addItem("Le client est connecté");
}

void ServeurWidget::onQTcpSocket_readyRead()
{    
    QString reponse;
    QByteArray data = socketDialogueClient->readAll();
    switch (data[0]) {
    case 'u' :
        reponse = getenv("USER");
        socketDialogueClient->write(reponse.toLatin1());
        break;
    case 'c' :
        reponse = QHostInfo::localHostName();
        socketDialogueClient->write(reponse.toLatin1());
        break;
    case 'o' :
        process->start("uname",QStringList("-p"));
        break;
    case 'a' :
        process->start("uname");
        break;
    default :
        reponse = "erreur";
        break;
    }
}

void ServeurWidget::onQTcpSocket_disconnected()
{
    ui->listWidget_Clients->addItem("Le client est déconnecté");
}


void ServeurWidget::on_pushButton_LancerServeur_clicked()
{
    if(socketEcouteServeur->listen(QHostAddress::Any, ui->spinBox_NumPort->text().toInt())){
        qDebug() << "Le serveur est lancé";
    }
}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())    {
        //QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : " + reponse;
        //ui->listWidget_Clients->addItem(message);
        socketDialogueClient->write(reponse.toLatin1());
    }
}
