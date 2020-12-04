#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include <QTcpSocket>

class CompteClient : public QTcpSocket
{
public:
    CompteClient(QObject *_parent = nullptr);
    bool Retirer(float _montant);
    void Deposer(float _montant);
    float ObtenirSolde();
    void DefinirNumCompte(int _numCompte);
    int ObtenirNumCompte();
private :
    int numCompte;
    float solde;
};

#endif // COMPTECLIENT_H
