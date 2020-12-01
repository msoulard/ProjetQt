#include "widget.h"
#include "ui_widget.h"
#include <QSqlError>
#include <QSqlQuery>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("172.18.58.7");
    db.setDatabaseName("france2018");
    db.setUserName("snir");
    db.setPassword("snir");
    //ouverture de la base
    if(!db.open()){
        qDebug() << "pb ouverture" << db.lastError();
    }
    else{
        qDebug() << "ouverture ok bdd";
    }
    //Remplir la liste des régions
    QSqlQuery requete("select code, name from regions order by name;" );
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;
    QString id;

    while(requete.next())
    {
        nom=requete.value("name").toString();
        id=requete.value("code").toString();
        ui->comboBox_Regions->addItem(nom,id);
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_EnvoiDepartement_clicked()
{
    QString numeroDepartement = ui->lineEdit_NumDepartement->text();
    QSqlQuery requete;
    requete.prepare("select name from departments where code =:nro ;");
    requete.bindValue(":nro", numeroDepartement);
    if(!requete.exec()){
        qDebug() << "pb requete : " << requete.lastError();
    }
    else{
        requete.next();
        ui->label_NomDepartement->setText(requete.value("name").toString());
    }
}
void Widget::on_comboBox_Regions_currentIndexChanged(int index)
{
    // recupere l'id de la region
    QString idRegion=ui->comboBox_Regions->itemData(index).toString();
    // vider la liste des departements
    ui->comboBox_Departements->clear();
    ui->comboBox_Departements->addItem("Choisissez un département");
    //mettre à jour la liste des départements
    QSqlQuery requete;
    requete.prepare("select code, name from departments where region_code =:nro order by name;" );
    requete.bindValue(":nro", idRegion);
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;
    QString id;
    while(requete.next())
    {
        nom=requete.value("name").toString();
        id=requete.value("code").toString();
        ui->comboBox_Departements->addItem(nom,id);
    }
}

void Widget::on_comboBox_Departements_currentIndexChanged(int index)
{
    // recupere l'id du département
    QString idDepartement=ui->comboBox_Departements->itemData(index).toString();
    // vider la liste des departements
    ui->comboBox_Villes->clear();
    ui->comboBox_Villes->addItem("Choisissez une ville");
    //mettre à jour la liste des départements
    QSqlQuery requete;
    requete.prepare("select name from cities where department_code =:nro order by name;" );
    requete.bindValue(":nro", idDepartement);
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;
    QString id;
    while(requete.next())
    {
        nom=requete.value("name").toString();
        ui->comboBox_Villes->addItem(nom);
    }
}
