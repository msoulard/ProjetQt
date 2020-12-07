#include "bddwidget.h"
#include "ui_bddwidget.h"

BDDWidget::BDDWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BDDWidget)
{
    ui->setupUi(this);
    ui->groupBox_InfosComptes->setEnabled(false);
    ui->tableWidget_InfosComptes->horizontalHeader()->setCascadingSectionResizes(true);
    ui->tableWidget_InfosComptes->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

BDDWidget::~BDDWidget()
{
    delete ui;
}

void BDDWidget::on_pushButton_ConnexionBDD_clicked()
{
    banque = QSqlDatabase::addDatabase("QMYSQL");
    banque.setHostName(ui->lineEdit_AdresseIP->text());
    banque.setDatabaseName(ui->lineEdit_NomBDD->text());
    banque.setUserName(ui->lineEdit_Login->text());
    banque.setPassword(ui->lineEdit_MotDePasse->text());
    //ouverture de la base
    if(!banque.open()){
        QMessageBox msg;
        msg.setText(banque.lastError().text());
        msg.exec();
    }
    else{
        qDebug() << "ouverture ok bdd";
        ui->groupBox_InfosComptes->setEnabled(true);
        ui->groupBox_Connexion->setEnabled(false);
    }
}

void BDDWidget::on_pushButton_InfosComptes_clicked()
{
    //Remplir la liste des régions
    QSqlQuery requete("select * from comptes;" );
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;
    QString prenom;
    QString solde;
    QString id;
    int ligne=0;    // numero de la ligne
    int col=0;      // numero de la colonne
    while(requete.next())
    {
        nom = requete.value("nom").toString();
        prenom = requete.value("prenom").toString();
        solde = requete.value("solde").toString();
        id = requete.value("idCompte").toString();
//        ui->textEdit_InfosComptes->append(nom);
//        ui->textEdit_InfosComptes->append(prenom);
//        ui->textEdit_InfosComptes->append(id);
//        ui->textEdit_InfosComptes->append(solde);
        // ajouter une ligne au tableau
          ui->tableWidget_InfosComptes->insertRow(ui->tableWidget_InfosComptes->rowCount());
          col = 0;
          // ajouter un nom
          QTableWidgetItem *nomItem = new QTableWidgetItem(nom);
          ui->tableWidget_InfosComptes->setItem(ligne,col,nomItem);
          col++;
          // ajouter un prenom
          QTableWidgetItem *prenomItem = new QTableWidgetItem(prenom);
          ui->tableWidget_InfosComptes->setItem(ligne,col,prenomItem);
          col++;
          // ajouter le numero de compte
          QTableWidgetItem *idCompteItem = new QTableWidgetItem(id);
          ui->tableWidget_InfosComptes->setItem(ligne,col,idCompteItem);
          col++;
          // ajouter le solde
          QTableWidgetItem *soldeItem = new QTableWidgetItem(solde);
          ui->tableWidget_InfosComptes->setItem(ligne,col,soldeItem);
          ligne++;
    }
}
