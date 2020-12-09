#ifndef INTERFACEACCESBDDBANQUE_H
#define INTERFACEACCESBDDBANQUE_H

#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

class InterfaceAccesBDDBanque
{
public:
    InterfaceAccesBDDBanque(QString _hote, QString _bd, QString _login, QString _mdp);
    float ObtenirSolde(int numCompte);
    void MettreAJourLeSolde(int _numCompte, float _solde);
    void CreerCompte(int _numCompte);
    bool CompteExiste(int _numCompte);
private :
    QSqlDatabase bdd;
};

#endif // INTERFACEACCESBDDBANQUE_H
