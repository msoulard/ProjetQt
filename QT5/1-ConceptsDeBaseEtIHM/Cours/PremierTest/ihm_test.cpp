#include "ihm_test.h"
#include "ui_ihm_test.h"

IHM_test::IHM_test(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IHM_test)
{
    ui->setupUi(this);
}

IHM_test::~IHM_test()
{
    delete ui;
}


void IHM_test::on_pushButton_2_clicked()
{
    ui->pushButton->setText("Quitter");
    QString texte;
    texte = ui->pushButton_2->text();
    ui->label->setText(texte);
}
