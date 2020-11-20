#include <QDebug>
#include "centraledalarme.h"
#include "clavier.h"

CentraleDalarme::CentraleDalarme(const int _tailleCode, QObject *_parent) :
    QObject(_parent),
    tailleCode(_tailleCode),
    indiceCourant(0)
{
    combinaison = new quint8[tailleCode];
    for(int i = 0 ; i < tailleCode ; i++)
        combinaison[i]=0;

    leClavier = new Clavier(this);
    leClavier->show();
    leCode = new Code(tailleCode);
    mode = REPOS;
}

CentraleDalarme::~CentraleDalarme()
{
    delete[] combinaison;
    delete leClavier;
}

void CentraleDalarme::ModifierCode()
{
    if(indiceCourant == tailleCode){
        mode = MODIFICATION_CODE;
        emit EtatCentraleChange(mode);
    }
}

void CentraleDalarme::TraiterBoutonMarche()
{
    bool codeValide;
    if(mode == REPOS){
        codeValide = leCode->VerifierCode(combinaison);
        if(codeValide == true){
            mode = SURVEILLANCE;
            emit EtatCentraleChange(mode);
        }
    }
}

void CentraleDalarme::FabriquerCode(const quint8 _chiffre)
{
    // Code à compléter
    if(indiceCourant < tailleCode){
        combinaison[indiceCourant] = _chiffre;
        indiceCourant++;
    }
    else{
        for(int i = 0 ; i < indiceCourant ; i++){
            if(i == indiceCourant - 1){
                combinaison[i] = _chiffre;
            }
            else{
                combinaison[i] = combinaison[i+1];
            }
        }
    }
    // Affichage de la combinaison lors de sa construction
    QString tampon = "Combinaison = ";
    for(int i = 0 ; i < tailleCode; i++)
        tampon += QString::number(combinaison[i]);
    qDebug() << tampon;
}

void CentraleDalarme::TraiterBoutonArret()
{
    bool codeValide;
    if(mode == SURVEILLANCE){
        codeValide = leCode->VerifierCode(combinaison);
        if(codeValide == true){
            mode = REPOS;
            emit EtatCentraleChange(mode);
        }
    }
}
