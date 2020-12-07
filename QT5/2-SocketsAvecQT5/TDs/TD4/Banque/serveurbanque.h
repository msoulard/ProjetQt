#ifndef SERVEURBANQUE_H
#define SERVEURBANQUE_H

#include <QTcpServer>
#include <QList>
#include <QMessageBox>
#include <QDebug>
#include <QBuffer>
#include "compteclient.h"

class ServeurBanque : public QTcpServer
{
public:
    ServeurBanque(QObject *_parent = nullptr);
    void Start();
    void Stop();
    void EnvoyerMessage(QString _message, CompteClient *_client);
private slots:
    void onServeurBanque_newConnection();
    void onCompteClient_disconnected();
    void onCompteClient_readyRead();
private :
    QList<CompteClient *> lesConnexionsClients;
};

#endif // SERVEURBANQUE_H
