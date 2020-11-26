#ifndef CODEUR_H
#define CODEUR_H

#include <QObject>
#include <QTimer>
#include "mcculdaq.h"

class Codeur : public QObject
{
    Q_OBJECT
public:
    explicit Codeur(MccUldaq &_laCarte, QObject *parent = nullptr);
    ~Codeur();
    void onTimerVitesse_timeout();
    void LancerMesure();
    void ArreterMesureVitesse();
signals:
    void VitesseChange(int _vitesse);
private :
    int vitesse;
    MccUldaq &laCarte;
    QTimer timerVitesse;
};

#endif // CODEUR_H
