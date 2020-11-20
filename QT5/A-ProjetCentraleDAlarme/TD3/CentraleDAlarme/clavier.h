#ifndef CLAVIER_H
#define CLAVIER_H

#include <QWidget>
#include <QTimer>
#include "detecteur.h"
#include "detecteurtemporise.h"
#include "centraledalarme.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Clavier; }
QT_END_NAMESPACE

class Clavier : public QWidget
{
    Q_OBJECT

public:
    Clavier(CentraleDalarme *_laCentrale, QWidget *parent = nullptr);
    ~Clavier();
    void LancerTempo();
    void onTimerLed_timeout();
private slots:
    void on_pushButtonMarche_clicked();
    void TraiterChiffre();
    void on_pushButtonArret_clicked();
    //void onTimerLed_timeout();
public slots:
    void onEtatCentraleChange(MODES_DE_MARCHE _etat);
private:
    Ui::Clavier *ui;
    QTimer timerLed;
    MODES_DE_MARCHE etatCentrale;
    CentraleDalarme *laCentrale;
};
#endif // CLAVIER_H
