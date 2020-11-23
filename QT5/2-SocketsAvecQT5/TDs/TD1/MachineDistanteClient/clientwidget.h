#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QString>
#include <QHostAddress>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui { class ClientWidget; }
QT_END_NAMESPACE

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:
    void on_pushButton_Connexion_clicked();
    void on_pushButton_NomOrdi_clicked();
    void on_pushButton_NomUtili_clicked();
    void on_pushButton_ArchitectureProcess_clicked();
    void on_pushButton_OSUtili_clicked();
    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);
    void onQTcpSocket_hostFound();
    void onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState);
    void onQTcpSocket_aboutToClose();
    void onQTcpSocket_bytesWritten(qint64 bytes);
    void onQTcpSocket_readChannelFinished();
    void onQTcpSocket_readyRead();
private:
    Ui::ClientWidget *ui;
    QTcpSocket *socketDialServeur;
    QString typeDeDemande;
};
#endif // CLIENTWIDGET_H
