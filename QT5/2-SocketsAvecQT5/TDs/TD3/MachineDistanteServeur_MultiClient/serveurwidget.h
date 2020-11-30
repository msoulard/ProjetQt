#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QHostInfo>
#include <QProcess>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class ServeurWidget; }
QT_END_NAMESPACE

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
    ServeurWidget(QWidget *parent = nullptr);
    ~ServeurWidget();
private slots :
    void onQTcpServer_newConnection();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void on_pushButton_LancerServeur_clicked();
    void onQProcess_readyReadStandardOutput();
private:
    Ui::ServeurWidget *ui;
    QList<QTcpSocket *>socketDialogueClient;
    QTcpServer *socketEcouteServeur;
    QList<QProcess *>process;
};
#endif // SERVEURWIDGET_H
