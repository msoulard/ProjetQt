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
        if(requete.size() > 0){
            requete.next();
            solde = requete.value("solde").toFloat();
        }
        else{
            qDebug() << "aucune valeur " << requete.lastError();
        }
    }
    return solde;
}

void InterfaceAccesBDDBanque::MettreAJourLeSolde(int _numCompte, float _solde)
{
    //Modifier le solde
    QSqlQuery requete;
    requete.prepare("update comptes set solde = :nro where idCompte = :num;" );
    requete.bindValue(":nro", _solde);
    requete.bindValue(":num", _numCompte);
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
}

void InterfaceAccesBDDBanque::CreerCompte(int _numCompte, QString _nom, QString _prenom, QString _villeOrigine, QString _villeBanque, int _solde)
{
    //Vérifier qu'il n'y a pas de compte existant
    QSqlQuery requete;
    QSqlQuery requeteAgences;
    int idAgence = 0;
    bool reponse = CompteExiste(_numCompte);
    if(reponse == false){
        requeteAgences.prepare("select id from agences where Ville = :villeBanque;");
        requeteAgences.bindValue(":villeBanque", _villeBanque);
        if (!requeteAgences.exec()){
            qDebug()<<"pb requeteAgences "<<requete.lastError();
        }
        else{
            if (requete.size()!=0){
                requeteAgences.next();
                idAgence = requeteAgences.value("id").toInt();
                requete.prepare("insert into comptes(idCompte, solde, nom, prenom, Ville, id_agence) values (:idCompte, :solde, :nom, :prenom, :ville, :idBanque);");
                requete.bindValue(":idCompte", _numCompte);
                requete.bindValue(":solde", _solde);
                requete.bindValue(":nom", _nom);
                requete.bindValue(":prenom", _prenom);
                requete.bindValue(":ville", _villeOrigine);
                requete.bindValue(":idBanque", idAgence);
                if (!requete.exec()){
                    qDebug()<<"pb requete création compte "<<requete.lastError();
                }
                else{
                    qDebug()<< "compte créé";
                }
            }
        }
    }
    else{
        qDebug() << "un compte existe déjà";
    }
}

bool InterfaceAccesBDDBanque::CompteExiste(int _numCompte)
{
    QSqlQuery requete;
    bool existe=false;
    requete.prepare("select solde from comptes where idCompte=:id;");
    requete.bindValue(":id",_numCompte);
    requete.exec();
    if (!requete.exec()){
        qDebug()<<"pb requete compte existe "<<requete.lastError();
    }
    // si le compte existe on passe existe a vrai
    if (requete.size()!=0)
    {
        existe=true;
    }
    return existe;
}

QString InterfaceAccesBDDBanque::NomVilleAgences()
{
    QString agences;
    QString ville;
    int taille = 0;
    QSqlQuery requete;
    requete.prepare("select Ville from agences;");
    requete.exec();
    if (!requete.exec()){
        qDebug()<<"pb requete compte existe "<<requete.lastError();
    }
    else{
        while(requete.next()){
            ville = requete.value("Ville").toString();
            agences+=(ville+";");
        }
        if(!agences.isEmpty()){
            taille = agences.length();
            agences = agences.left(taille-1);
            //agences.remove(taille-1, 1);
        }
    }
    return agences;
}
