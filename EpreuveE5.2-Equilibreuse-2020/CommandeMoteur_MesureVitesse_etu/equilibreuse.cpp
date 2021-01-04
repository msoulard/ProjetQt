#include "equilibreuse.h"
#include "ui_equilibreuse.h"
#include "constantes.h"
#include <QMessageBox>

Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
    ui->statusbar->addPermanentWidget(&labelEtatCapot);
    leCapot = new Capot(laCarte, DIO0);
    connect(leCapot,&Capot::EtatCapotChange,this,&Equilibreuse::onCapot_EtatCapotChange);
    leMoteur = new Moteur(laCarte, AOUT0);
    onCapot_EtatCapotChange(leCapot->getEtatCapot());
    leCodeur = new Codeur(laCarte);
    connect(leCodeur, &Codeur::VitesseChange, this, &Equilibreuse::onCodeur_VitesseChange);
}

Equilibreuse::~Equilibreuse()
{
    delete ui;
    delete leCapot;
}

void Equilibreuse::onCapot_EtatCapotChange(bool _etat)
{
    /* 1ère partie de la question
    QMessageBox message;
    QString etat = "ouvert";
    if(_etat)
        etat = "fermé";
    message.setText("Le capot est " + etat);
    message.exec();
    */

    QPalette palette;
    labelEtatCapot.setAutoFillBackground(true);
    if(_etat)
    {
        palette.setColor(QPalette::WindowText,Qt::black);
        labelEtatCapot.setPalette(palette);
        labelEtatCapot.setText("| Capot fermé|");
    }
    else
    {
        palette.setColor(QPalette::WindowText,Qt::red);
        labelEtatCapot.setPalette(palette);
        labelEtatCapot.setText("| Capot ouvert |");
        on_pushButton_Arreter_clicked();
    }
}

void Equilibreuse::onCodeur_VitesseChange(int _vitesse)
{
    ui->lcdNumber_vitesse->display(_vitesse);
}

void Equilibreuse::on_pushButton_Lancer_clicked()
{
    if(ui->pushButton_Lancer->text()=="Lancer Moteur")
    {
        ui->pushButton_Lancer->setText("Fixer consigne");
    }
    leMoteur->FixerConsigneVitesse(ui->dial_ConsigneVItesse->value());
    leCodeur->LancerMesure();
}

void Equilibreuse::on_pushButton_Arreter_clicked()
{
    ui->pushButton_Lancer->setText("Lancer Moteur");
    leMoteur->FixerConsigneVitesse(0);
    ui->dial_ConsigneVItesse->setValue(0);
    leCodeur->ArreterMesureVitesse();
    ui->lcdNumber_vitesse->display(0);
}
