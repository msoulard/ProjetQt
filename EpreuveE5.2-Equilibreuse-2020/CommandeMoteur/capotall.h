#ifndef CAPOT_H
#define CAPOT_H

#include "mcculdaq.h"
#include <QObject>
#include <QTimer>

class Capot
{
public:
    Capot(const MccUldaq _laCarte, const int _numDio, const QObject *parent);
    void onTimerCapot_timeout();
signals :
    void EtatCapotChange(bool _etatCapot);
private :
    QTimer timerCapot;
    const MccUldaq & laCarte;
    bool etatCapot;
    int numDio;
};

#endif // CAPOT_H
