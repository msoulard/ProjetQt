#ifndef CENTRALEDALARME_H
#define CENTRALEDALARME_H

#include <QObject>
#include <QTimer>
#include "detecteur.h"
#include "detecteurtemporise.h"
#include "code.h"

class Clavier;
enum MODES_DE_MARCHE{
    REPOS,
    SURVEILLANCE,
    INTRUSION,
    MODIFICATION_CODE,
    SAISIE_NOUVEAU_CODE
};

class CentraleDalarme : public QObject
{
    Q_OBJECT
public:
    explicit CentraleDalarme(const int _tailleCode = 4, QObject *_parent = nullptr);
    ~CentraleDalarme();
    void ModifierCode();
    void TraiterBoutonMarche();
    void FabriquerCode(const quint8 _chiffre);
    void Activer();
    void Desactiver();
    void TraiterBoutonArret();
    void onTimerDelai_timeout();
    void onIntrusDetecte();
signals:
    void EtatCentraleChange(MODES_DE_MARCHE _nouvelEtat);
private:
    const int tailleCode;
    quint8 *combinaison;
    int indiceCourant;
    Clavier *leClavier;
    MODES_DE_MARCHE mode;
   // Detecteur *leDetecteur;
    //DetecteurTemporise *leDetecteurTempo;
    Code *leCode;
    QTimer timerDelai;
};

#endif // CENTRALEDALARME_H
