#include "bddwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BDDWidget w;
    w.show();
    return a.exec();
}
