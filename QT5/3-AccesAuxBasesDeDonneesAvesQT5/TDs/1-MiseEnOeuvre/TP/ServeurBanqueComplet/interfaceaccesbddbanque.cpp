#include "interfaceaccesbddbanque.h"

InterfaceAccesBDDBanque::InterfaceAccesBDDBanque(QString _hote, QString _bd, QString _login, QString _mdp)
{
    bdd = QSqlDatabase::addDatabase("QMYSQL");
    bdd.setHostName(_hote);
    bdd.setDatabaseName(_bd);
    bdd.setUserName(_login);
    bdd.setPassword(_mdp);
    //ouverture de la base
    if(!bdd.open()){
        QMessageBox msg;
        msg.setText(bdd.lastError().text());
        msg.exec();
    }
    else{
        qDebug() << "ouverture ok bdd";
    }
}

float InterfaceAccesBDDBanque::ObtenirSolde(int numCompte)
{
    float solde = 0;
    //Récupérer le solde
    QSqlQuery requete;
    requete.prepare("select solde from comptes where idCompte=:nro;" );
    requete.bindValue(":nro", numCompte);
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    else{
        solde = requete.value("solde").toFloat();
    }
    return solde;
}

void InterfaceAccesBDDBanque::CreerCompte(int _numCompte)
{

}
