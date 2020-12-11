#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include <QTcpSocket>
#include <QFileInfo>
#include <QSettings>
#include "interfaceaccesbddbanque.h"

class CompteClient : public QTcpSocket
{
public:
    CompteClient(QObject *_parent = nullptr);
    ~CompteClient();
    bool Retirer(float _montant);
    void Deposer(float _montant);
    float ObtenirSolde();
    void DefinirNumCompte(int _numCompte, QString _nom, QString _prenom, int _solde, QString _villeOrigine, QString _VilleBanque);
    int ObtenirNumCompte();
    bool CompteExiste(int _numCompte);
    QString ListeAgences();
    static InterfaceAccesBDDBanque *bd;
    static void InitialiserBDD();
private :
    int numCompte;
    float solde;
};

#endif // COMPTECLIENT_H
