#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    sock = new QWebSocketServer("Serveur", QWebSocketServer::NonSecureMode);
    majDate = new QTimer;
    connect(sock, &QWebSocketServer::newConnection, this, &Widget::onQWebSocketServer_newConnection);
    connect(majDate, &QTimer::timeout, this, &Widget::onQTimer_majDate);
    if(sock->listen(QHostAddress::Any, 8888)){
            qDebug() << "Le serveur est lancé";
        }
}

Widget::~Widget()
{
    delete ui;
    delete sock;
}

void Widget::onQWebSocketServer_newConnection()
{
    client = sock->nextPendingConnection();
    connect(client, &QWebSocket::textMessageReceived, this, &Widget::onQWebSocket_textMessageReceived);
}

void Widget::onQWebSocket_textMessageReceived(QString _message)
{
    if(_message == "date"){
        majDate->start(2000);
    }
}

void Widget::onQTimer_majDate()
{
    client->sendTextMessage(QDateTime::currentDateTime().toString());
}

