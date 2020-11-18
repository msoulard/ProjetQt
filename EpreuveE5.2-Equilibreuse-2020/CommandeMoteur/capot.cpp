#include "capot.h"

Capot::Capot(const MccUldaq &_laCarte, const int _numDio, QObject *parent) :
    QObject(parent),
    laCarte(_laCarte),
    numDio(_numDio)
{

}
