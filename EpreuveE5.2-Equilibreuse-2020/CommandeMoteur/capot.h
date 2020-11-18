#ifndef CAPOT_H
#define CAPOT_H

#include <QObject>
#include <QTimer>
#include "mcculdaq.h"

class Capot : public QObject
{
    Q_OBJECT
public:
    explicit Capot(const MccUldaq &_laCarte, const int _numDio, QObject *parent = nullptr);
    void onTimerCapot_timeout();
signals:
    void EtatCapotChange(bool _etatCapot);
private :
    QTimer timerCapot;
    const MccUldaq & laCarte;
    bool etatCapot;
    int numDio;
};

#endif // CAPOT_H
