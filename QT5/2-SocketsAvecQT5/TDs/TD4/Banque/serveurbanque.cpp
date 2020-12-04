#include "serveurbanque.h"

ServeurBanque::ServeurBanque(QObject *_parent)
{
    if(!connect(this, &QTcpServer::newConnection, this, &ServeurBanque::onServeurBanque_newConnection)){
        QMessageBox message;
        message.setText("Erreur lors de la nouvelle connection");
        message.exec();
    }
}

void ServeurBanque::Start()
{
    if(this->listen(QHostAddress::Any, 8888)){
        qDebug() << "Le serveur est lancé";
    }
    else{
        QMessageBox message;
        message.setText("Erreur lors de l'écoute sur le port 8888");
        message.exec();
        this->close();
    }
}

void ServeurBanque::Stop()
{
    this->close();
}

void ServeurBanque::EnvoyerMessage(QString _message, CompteClient *_client)
{
    int index=lesConnexionsClients.indexOf(_client);
    lesConnexionsClients.at(index)->write(_message.toLatin1());
}

void ServeurBanque::onServeurBanque_newConnection()
{
    CompteClient *client;
    while(hasPendingConnections()){
        client = static_cast<CompteClient *>(this->nextPendingConnection());
        connect(client, &QTcpSocket::readyRead, this, &ServeurBanque::onCompteClient_readyRead);
        connect(client, &QTcpSocket::disconnected, this, &ServeurBanque::onCompteClient_disconnected);
        lesConnexionsClients.append(client);
        EnvoyerMessage("Entrez votre numéro de compte", client);
        qDebug() << "un client est connecté";
    }

}

void ServeurBanque::onCompteClient_disconnected()
{
    CompteClient *client=(CompteClient*)sender();
    if (!client)
    {
        QMessageBox msg;
        msg.setText("erreur déconnexion : "+client->errorString());
        msg.exec();
    }
    else
    {
        lesConnexionsClients.removeOne(client);
        client->deleteLater();
    }
}

void ServeurBanque::onCompteClient_readyRead()
{
    CompteClient *client=(CompteClient*)sender();
    QByteArray data = client->readAll();
    float solde;
    int index=lesConnexionsClients.indexOf(client);
    if (!client)
    {
        QMessageBox msg;
        msg.setText("erreur de lecture : "+client->errorString());
        msg.exec();
    }
    else
    {
        switch (data[0]) {
        case 'N' :
            EnvoyerMessage("Bienvenue sur le compte "+QString::number(client->ObtenirNumCompte()), client);
            break;
        case 'R' :
            break;
        case 'D' :
            break;
        case 'S' :
            solde = lesConnexionsClients.at(index)->ObtenirSolde();
            //EnvoyerMessage(solde, client);
            break;
        }
    }
}
