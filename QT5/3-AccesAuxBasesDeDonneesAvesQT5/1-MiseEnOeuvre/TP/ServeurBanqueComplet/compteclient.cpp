#include "compteclient.h"

//initialisation de la variable statique
InterfaceAccesBDDBanque *CompteClient::bd = nullptr;

CompteClient::CompteClient(QObject *_parent) :
    QTcpSocket(_parent)
{
    solde = 0;
    numCompte = 0;
    InitialiserBDD();
}

CompteClient::~CompteClient()
{
    if(bd != nullptr){
        delete bd;
    }
}

bool CompteClient::Retirer(float _montant)
{
    bool possible = false;
    if(solde >= _montant){
        solde = solde - _montant;
        possible = true;
        bd->MettreAJourLeSolde(numCompte, solde);
    }
    else{
        possible = false;
    }
    return possible;
}

void CompteClient::Deposer(float _montant)
{
    solde = solde + _montant;
    bd->MettreAJourLeSolde(numCompte, solde);
}

float CompteClient::ObtenirSolde()
{
    solde = bd->ObtenirSolde(numCompte);
    return solde;
}

void CompteClient::DefinirNumCompte(int _numCompte, QString _nom, QString _prenom, int _solde, QString _villeOrigine, QString _VilleBanque)
{
    numCompte = _numCompte;
    bd->CreerCompte(numCompte, _nom, _prenom, _villeOrigine, _VilleBanque, _solde);
    solde = bd->ObtenirSolde(numCompte);
}

int CompteClient::ObtenirNumCompte()
{
    return numCompte;
}

bool CompteClient::CompteExiste(int _numCompte)
{
    return bd->CompteExiste(_numCompte);
}

QString CompteClient::ListeAgences()
{
    return bd->NomVilleAgences();
}

void CompteClient::InitialiserBDD()
{
    QString hote;
    QString nom;
    QString login;
    QString mdp;
    QString nomFichierIni = "AccesBDD.ini";
    QFileInfo testFichier(nomFichierIni);
    if(testFichier.exists() && testFichier.isFile()){
        QSettings paramBDD(nomFichierIni, QSettings::IniFormat);
        hote = paramBDD.value("BDD/adresse", "172.18.58.14").toString();
        nom = paramBDD.value("BDD/nomBDD", "banque").toString();
        login = paramBDD.value("BDD/login", "snir").toString();
        mdp = paramBDD.value("BDD/mdp", "snir").toString();
        bd = new InterfaceAccesBDDBanque(hote, nom, login, mdp);
    }
    else{
        qDebug() << "fichier ini non existant";
    }
}
