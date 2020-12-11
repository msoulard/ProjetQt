#include "clientbanque_mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    clientBanque_MainWindow w;
    w.show();
    return a.exec();
}
