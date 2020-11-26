#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer;
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
    socketDialogueClient = new QTcpSocket;
    socketDialogueClient = static_cast<QTcpSocket *>(sender());
}

void ServeurWidget::onQTcpSocket_readyRead()
{
    process = new QProcess;
    onQTcpServer_newConnection();
    QString reponse;
    QByteArray data = socketDialogueClient->readAll();
    switch (data.at(1)) {
    case 'u' :
        reponse = getenv("USERNAME");
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
    onQTcpSocket_readyRead();
}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())    {
        QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : " + reponse;
        ui->listWidget_Clients->addItem(message);
        socketDialogueClient->write(reponse.toLatin1());
    }
}
