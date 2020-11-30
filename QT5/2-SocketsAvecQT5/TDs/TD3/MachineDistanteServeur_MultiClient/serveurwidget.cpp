#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer;
    connect(socketEcouteServeur, &QTcpServer::newConnection, this, &ServeurWidget::onQTcpServer_newConnection);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
    delete socketEcouteServeur;
    //delete socketDialogueClient;
    //delete process;
}

void ServeurWidget::onQTcpServer_newConnection()
{
    QTcpSocket *client;
    QProcess *processClient;
    processClient = new QProcess;
    client = socketEcouteServeur->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_readyRead);
    connect(client, &QTcpSocket::disconnected, this, &ServeurWidget::onQTcpSocket_disconnected);
    socketDialogueClient.append(client);
    connect(processClient, &QProcess::readyReadStandardOutput, this, &ServeurWidget::onQProcess_readyReadStandardOutput);
    process.append(processClient);
    ui->listWidget_Clients->addItem("Le client est connecté");
}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QString reponse;
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    QByteArray data = client->readAll();
    int indexProcess=socketDialogueClient.indexOf(client);
    switch (data[0]) {
    case 'u' :
        reponse = getenv("USER");
        socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
        break;
    case 'c' :
        reponse = QHostInfo::localHostName();
        socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
        break;
    case 'o' :
        process.at(indexProcess)->start("uname",QStringList("-p"));
        break;
    case 'a' :
        process.at(indexProcess)->start("uname");
        break;
    default :
        reponse = "erreur";
        break;
    }
}

void ServeurWidget::onQTcpSocket_disconnected()
{
    ui->listWidget_Clients->addItem("Le client est déconnecté");
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int indexProcess=socketDialogueClient.indexOf(client);
    socketDialogueClient.removeOne(client);
    socketDialogueClient.removeAt(indexProcess);
}


void ServeurWidget::on_pushButton_LancerServeur_clicked()
{
    if(socketEcouteServeur->listen(QHostAddress::Any, ui->spinBox_NumPort->text().toInt())){
        qDebug() << "Le serveur est lancé";
    }
}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QProcess *processClient=qobject_cast<QProcess*>(sender());
    int indexProcess=process.indexOf(processClient);
    QString reponse = process.at(indexProcess)->readAllStandardOutput();
    if(!reponse.isEmpty())    {
        //QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : " + reponse;
        //ui->listWidget_Clients->addItem(message);
        socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
    }
}
