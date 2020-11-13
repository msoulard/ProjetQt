#include "detecteurtemporise.h"
#include <QMessageBox>

DetecteurTemporise::DetecteurTemporise()
{
    setWindowTitle("Détecteur Temporisé");
    connect(&timerTempo, &QTimer::timeout,this,&DetecteurTemporise::onTimerTempo_timeout);
}

void DetecteurTemporise::on_pushButtonIntrus_clicked()
{
    timerTempo.start(3000);
}

void DetecteurTemporise::onTimerTempo_timeout()
{
    QMessageBox messageChiffre;
    messageChiffre.setText("Un intrus a été détecté");
    messageChiffre.exec();
    timerTempo.stop();
}

