#ifndef CLIENTBANQUE_MAINWINDOW_H
#define CLIENTBANQUE_MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>
#include <QBuffer>
#include <QMessageBox>
#include "creationclient_dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class clientBanque_MainWindow; }
QT_END_NAMESPACE

class clientBanque_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    clientBanque_MainWindow(QWidget *parent = nullptr);
    ~clientBanque_MainWindow();
private slots:
    void on_pushButton_Connexion_clicked();
    void on_pushButton_Envoi_clicked();
    void on_pushButton_NumCompte_clicked();

    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);
    void onQTcpSocket_readyRead();
private:
    Ui::clientBanque_MainWindow *ui;
    QTcpSocket *socketClientBanque;
    QStringList agences;
    CreationClient_Dialog *creationCompteDlg;
};
#endif // CLIENTBANQUE_MAINWINDOW_H
