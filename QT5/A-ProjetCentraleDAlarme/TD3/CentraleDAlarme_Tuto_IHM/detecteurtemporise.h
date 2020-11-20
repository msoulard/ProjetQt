#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include "detecteur.h"
#include <QTimer>

class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();
private slots:
    virtual void on_pushButtonIntrus_clicked();
    void onTimerTempo_timeout();
private:
    QTimer timerTempo;
};

#endif // DETECTEURTEMPORISE_H
