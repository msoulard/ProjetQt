#include "compteclient.h"

CompteClient::CompteClient(QObject *_parent)
{
    solde = 0;
    numCompte = 0;
}

bool CompteClient::Retirer(float _montant)
{
    bool possible = false;
    if(solde >= _montant){
        solde = solde - _montant;
        possible = true;
    }
    else{
        possible = false;
    }
    return possible;
}

void CompteClient::Deposer(float _montant)
{
    solde = solde + _montant;
}

float CompteClient::ObtenirSolde()
{
    return solde;
}

void CompteClient::DefinirNumCompte(int _numCompte)
{
    numCompte = _numCompte;
    solde = 200;
}

int CompteClient::ObtenirNumCompte()
{
    return numCompte;
}
