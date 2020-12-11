#ifndef DAB_MAINWINDOW_H
#define DAB_MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>
#include <QBuffer>

QT_BEGIN_NAMESPACE
namespace Ui { class DAB_MainWindow; }
QT_END_NAMESPACE

class DAB_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    DAB_MainWindow(QWidget *parent = nullptr);
    ~DAB_MainWindow();

private slots:
    void on_pushButton_Connexion_clicked();
    void on_pushButton_Envoi_clicked();
    void on_pushButton_NumCompte_clicked();

    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);
    void onQTcpSocket_readyRead();
private:
    Ui::DAB_MainWindow *ui;
    QTcpSocket *socketClientBanque;
};
#endif // DAB_MAINWINDOW_H
