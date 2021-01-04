#include "codeur.h"

Codeur::Codeur(MccUldaq &_laCarte, QObject *parent) :
    QObject(parent),
    laCarte(_laCarte)
{
    //timer s'arrête automatiquement après le temps écoulé
    timerVitesse.setSingleShot(true);
    //timer précis à la milliseconde près
    timerVitesse.setTimerType(Qt::PreciseTimer);
    vitesse = 0;
}

Codeur::~Codeur()
{

}

void Codeur::onTimerVitesse_timeout()
{
    long valCpt;
    laCarte.ulCIn(valCpt);
    qDebug() << "valeur compteur : " << valCpt;
    int vitesseCalculee = valCpt*60;
    if(vitesse != vitesseCalculee){
        emit VitesseChange(vitesseCalculee);
        vitesse = vitesseCalculee;
    }
    laCarte.UlCClear();
    timerVitesse.start(1000);
}

void Codeur::LancerMesure()
{
    laCarte.UlCClear();
    connect(&timerVitesse, &QTimer::timeout, this, &Codeur::onTimerVitesse_timeout);
    timerVitesse.start(1000);
}

void Codeur::ArreterMesureVitesse()
{
    timerVitesse.stop();
    vitesse = 0;
}
