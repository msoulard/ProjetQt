#include "equilibreuse.h"
#include "ui_equilibreuse.h"
#include <QPalette>
#include <QString>

Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
    leCapot = new Capot(laCarte, 0);
    leMoteur = new Moteur(laCarte, 0);
    connect(leCapot, &Capot::EtatCapotChange, this, &Equilibreuse::onCapot_EtatCapotChange);
    ui->statusbar->addPermanentWidget(&labelEtatCapot);
}

Equilibreuse::~Equilibreuse()
{
    delete ui;
    delete leCapot;
    delete leMoteur;
}

void Equilibreuse::onCapot_EtatCapotChange(bool _etatCapot)
{
    QPalette palette;
    if(_etatCapot == true){
        palette.setColor(QPalette::WindowText,Qt::black);
        labelEtatCapot.setPalette(palette);
        labelEtatCapot.setText("| Capot fermé |");
    }
    else{
        palette.setColor(QPalette::WindowText,Qt::red);
        labelEtatCapot.setPalette(palette);
        labelEtatCapot.setText("| Capot ouvert |");
        on_pushButton_Arreter_clicked();
        ui->lcdNumber_Consigne->display(0);
    }
}


void Equilibreuse::on_pushButton_Lancer_clicked()
{
    QString message;
    message = ui->pushButton_Lancer->text();
    if(message == "Lancer moteur"){
        ui->pushButton_Lancer->setText("Fixer consigne");
    }
    else{
        ui->pushButton_Lancer->setText("Lancer moteur");
    }
    int valeurConsigne = ui->lcdNumber_Consigne->value();
    leMoteur->FixerConsigneVitesse(valeurConsigne);
}

void Equilibreuse::on_pushButton_Arreter_clicked()
{
    ui->pushButton_Lancer->setText("Lancer moteur");
    leMoteur->FixerConsigneVitesse(0);
}