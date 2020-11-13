#include "clavier.h"
#include "ui_clavier.h"
#include "detecteurtemporise.h"
#include <QMessageBox>

Clavier::Clavier(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Clavier)
{
    ui->setupUi(this);
    leDetecteur = nullptr;
    leDecteurTempo = nullptr;
    connect(ui->pushButton_0,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(&timerLed,&QTimer::timeout,this,&Clavier::onTimerLed_timeout);
}

Clavier::~Clavier()
{
    delete ui;
    delete leDetecteur;
    delete leDecteurTempo;
}


void Clavier::on_pushButtonMarche_clicked()
{
    ui->checkBoxLedRouge->setCheckState(Qt::Checked);
    timerLed.start(500);
    QString texteBouton = ui->pushButtonMarche->text();
    QMessageBox messageMarche;
    messageMarche.setText("j'ai appuyé sur la touche " + texteBouton);
    messageMarche.exec();
}

void Clavier::TraiterChiffre()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
    QMessageBox messageChiffre;
    messageChiffre.setText("j'ai appuyé sur la touche " + texteBouton);
    messageChiffre.exec();
}

void Clavier::on_pushButtonArret_clicked()
{
    ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
    timerLed.stop();
}

void Clavier::onTimerLed_timeout()
{
    if(ui->checkBoxLedRouge->checkState() == Qt::Checked)
        ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
    else
        ui->checkBoxLedRouge->setCheckState(Qt::Checked);
}

void Clavier::on_pushButton_2_clicked()
{
    if(leDetecteur == nullptr){
        leDetecteur = new Detecteur;
        leDetecteur->show();
    }
}

void Clavier::on_pushButton_3_clicked()
{
    if(leDetecteur != nullptr){
        leDetecteur->hide();
        delete leDetecteur;
        leDetecteur = nullptr;
    }
}

void Clavier::on_pushButton_4_clicked()
{
    if(leDecteurTempo == nullptr){
        leDecteurTempo = new DetecteurTemporise;
        leDecteurTempo->show();
    }
}

void Clavier::on_pushButton_5_clicked()
{
    if(leDecteurTempo != nullptr){
        leDecteurTempo->hide();
        delete leDecteurTempo;
        leDecteurTempo = nullptr;
    }
}
