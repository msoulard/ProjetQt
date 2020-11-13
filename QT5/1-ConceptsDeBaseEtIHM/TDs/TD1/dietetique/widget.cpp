#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tabWidgetDietetique->setCurrentIndex(0);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::afficherInfos()
{
    double imcs[NBIMC] = {16.5, 18.5, 25, 30, 35, 40};
    QString corpulences[NBCORPULENCE] = {"Famine", "Maigreur", "Normale", "Surpoids", "Obésité modérée", "Obésité sévère", "Obésité morbide"};
    double imc=0;
    // initialisation de poids, taille, âge, nom et prenom
    nom = ui->lineEditNom->text();
    prenom = ui->lineEditPrenom->text();
    age = ui->spinBoxAge->value();
    poids = ui->doubleSpinBoxPoids->value();
    taille = ui->doubleSpinBoxTaille->value();
    // affichage message de bienvenue
    ui->textEditAfficheur->append("Bonjour " + prenom + " " + nom);
    // calcul de l'imc
    imc = poids / (taille * taille);
    // affichage de l'imc
    ui->textEditAfficheur->append("Votre indice de masse corporel est de : "+QString::number(imc));
    int indiceCorpulence = 0;
    for (int i = 0; i < NBIMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < 16.5) {
        indiceCorpulence = 0;
    }
    if (imc > 40) {
       indiceCorpulence = NBCORPULENCE - 1;
    }
    // affichage de la corpulence: corpulences[indiceCorpulence]
}

void Widget::on_pushButtonSuite_clicked()
{
    ui->tabWidgetDietetique->setCurrentIndex(1);
    afficherInfos();
}

void Widget::on_pushButtonDevine_clicked()
{
    double poidsIdeal = 0;
    if (ui->radioButtonFemme->isChecked()) {
        poidsIdeal = 45.5 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (ui->radioButtonHomme->isChecked()) {
        poidsIdeal = 50.0 + 2.3 * (taille / 0.0254 - 60.0);
    }
    qDebug()<<poidsIdeal;
    if (poidsIdeal > 0) {
        ui->textEditAfficheur->append("\nVotre poids ideal avec la formule de Devine : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAfficheur->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEditAfficheur->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}

void Widget::on_pushButtonLorentz_clicked()
{
    double poidsIdeal = 0;
    if (ui->radioButtonFemme->isChecked()) {
        poidsIdeal = taille * 100 - 100 - (taille * 100 - 150) / 2.5;
    }
    if (ui->radioButtonHomme->isChecked()) {
        poidsIdeal = taille * 100 - 100 - (taille * 100 - 150) / 4;
    }
    if (poidsIdeal > 0) {
        ui->textEditAfficheur->append("\nVotre poids ideal avec la formule de Lorentz : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAfficheur->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEditAfficheur->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}

void Widget::on_pushButtonLorentzAge_clicked()
{
    double poidsIdeal = 0;
    poidsIdeal = 50 + (taille * 100 - 150) / 4 + (age-20) / 4;
    if (poidsIdeal > 0) {
        ui->textEditAfficheur->append("\nVotre poids ideal avec la formule de Lorentz selon l'âge : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAfficheur->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEditAfficheur->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}
