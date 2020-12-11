#include "creationclient_dialog.h"
#include "ui_creationclient_dialog.h"

CreationClient_Dialog::CreationClient_Dialog(QStringList &_agences, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreationClient_Dialog)
{
    ui->setupUi(this);
    while(!_agences.isEmpty()){
        ui->comboBox_VilleAgence->addItem(_agences.takeAt(0));
    }
}

CreationClient_Dialog::~CreationClient_Dialog()
{
    delete ui;
}

QString CreationClient_Dialog::getVilleBanque()
{
    return ui->comboBox_VilleAgence->currentText();
}

QString CreationClient_Dialog::getNom()
{
    return ui->lineEdit_Nom->text();
}

QString CreationClient_Dialog::getPrenom()
{
    QString prenom = ui->lineEdit_Prenom->text();
    return prenom;
}

QString CreationClient_Dialog::getVilleOrigine()
{
    return ui->lineEdit_VilleOrigine->text();
}

int CreationClient_Dialog::getSolde()
{
    return ui->lineEdit_Solde->text().toInt();
}
