#include "clavier.h"
#include "ui_clavier.h"
#include "detecteurtemporise.h"
#include <QMessageBox>

Clavier::Clavier(CentraleDalarme *_laCentrale, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Clavier),
    laCentrale(_laCentrale)
{
    ui->setupUi(this);
    connect(laCentrale, &CentraleDalarme::EtatCentraleChange, this, &Clavier::onEtatCentraleChange);
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

}


void Clavier::on_pushButtonMarche_clicked()
{
    laCentrale->TraiterBoutonMarche();
}

void Clavier::TraiterChiffre()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
   laCentrale->FabriquerCode(texteBouton.toInt());
}

void Clavier::on_pushButtonArret_clicked()
{
   laCentrale->TraiterBoutonArret();
}

void Clavier::onEtatCentraleChange(MODES_DE_MARCHE _etat)
{
    switch (_etat) {
        case REPOS :
            ui->checkBoxLedVerte->setCheckState(Qt::Checked);
            timerLed.start(500);
            break;
        case SURVEILLANCE :
            ui->checkBoxLedRouge->setCheckState(Qt::Checked);
            timerLed.start(500);
            break;
        case INTRUSION :
            ui->checkBoxLedRouge->setCheckState(Qt::Checked);
            //laCentrale->onIntrusDetecte();
            break;
        case MODIFICATION_CODE :
            laCentrale->ModifierCode();
            break;
        case SAISIE_NOUVEAU_CODE :
            TraiterChiffre();
            break;
    }
}

void Clavier::onTimerLed_timeout()
{
    if(ui->checkBoxLedRouge->checkState() == Qt::Checked)
        ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
    else
        ui->checkBoxLedRouge->setCheckState(Qt::Checked);
}


