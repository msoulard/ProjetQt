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
    quint16 taille = 0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    //association du tampon au flux de sortie
    QDataStream out(&tampon);
    //construction de la trame
    out<<taille<<_message;
    //calcul de la taille de la trame
    taille = tampon.size()-sizeof (taille);
    //placement sur la premiere position du flux pour pouvoir modifier la taille
    tampon.seek(0);
    //modification de la taille de la trame
    out << taille;
    //envoie du QByteArray du tampon via la socket
    _client->write(tampon.buffer());
}

void ServeurBanque::onServeurBanque_newConnection()
{
    CompteClient *client;
    while(hasPendingConnections()){
        client =static_cast<CompteClient *>(this->nextPendingConnection());
        //CompteClient *clientCompte= static_cast<CompteClient *>(client);
        //CompteClient *clientCompte= (CompteClient*)client;
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
        qDebug() << "un client est déconnecté";
        lesConnexionsClients.removeOne(client);
        client->deleteLater();
    }
}

void ServeurBanque::onCompteClient_readyRead()
{
    CompteClient *client=(CompteClient*)sender();
    quint16 taille = 0;
    QChar commande;
    int numCompte;
    float montant;
    int index;
    if (!client)
    {        
        QMessageBox msg;
        msg.setText("erreur de lecture : "+client->errorString());
        msg.exec();
    }
    else
    {
        index=lesConnexionsClients.indexOf(client);
        //si le nombre d'octets reçu est au moins égal à celui de la taille de ce que l'on doit recevoir
        if(client->bytesAvailable() >= (qint64)sizeof (taille)){
            //association de la socket au flux d'entrée
            QDataStream in(client);
            //extraire la taille de ce que l'on doit recevoir
            in >> taille;
            //si le nombre d'octets reçu est au moins égal à celui de ce que l'on doit recevoir
            if(client->bytesAvailable() >= (qint64)taille){
                //extraire la demande du client
                in >> commande;
                //extraire le numéro de compte ou le montant
                switch (commande.toLatin1()) {
                case 'N' :
                    in >> numCompte;
                    break;
                case 'R' :
                    in >> montant;
                    break;
                case 'D' :
                    in >> montant;
                   break;
                }
            }
        }
        //envoyer le message en fonction de la demande du client
        switch (commande.toLatin1()) {
        case 'N' :
            client->DefinirNumCompte(numCompte);
            EnvoyerMessage("Bienvenue sur le compte "+QString::number(numCompte), client);
            qDebug() << "Message de bienvenu envoyé";
            break;
        case 'R' :
            if(!(montant < 0)){
            client->Retirer(montant);
            EnvoyerMessage("nouveau solde "+QString::number(client->ObtenirSolde()), client);
            qDebug() << "Nouveau solde après dépôt envoyé";
            }
            break;
        case 'D' :
            if(!(montant < 0)){
            client->Deposer(montant);
            EnvoyerMessage("nouveau solde "+QString::number(client->ObtenirSolde()), client);
            qDebug() << "Nouveau solde après retrait envoyé";
            }
            break;
        case 'S' :
            EnvoyerMessage("Solde : "+QString::number(lesConnexionsClients.at(index)->ObtenirSolde()), client);
            qDebug() << "Solde envoyé";
            break;
        }
    }
}
