#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBoxWindows_stateChanged(int arg1)
{
    if(arg1){
        ui->listWidgetEvenements->addItem("Windows coche");
    }
    else{
        ui->listWidgetEvenements->addItem("Windows decoche");
    }
}

void MainWindow::on_checkBoxOSXLion_stateChanged(int arg1)
{
    if(arg1){
        ui->listWidgetEvenements->addItem("OS X Lion coche");
    }
    else{
        ui->listWidgetEvenements->addItem("OS X Lion decoche");
    }
}

void MainWindow::on_checkBoxLinux_stateChanged(int arg1)
{
    if(arg1){
        ui->listWidgetEvenements->addItem("Linux coche");
    }
    else{
        ui->listWidgetEvenements->addItem("Linux decoche");
    }
}

void MainWindow::on_radioButtonWindows_clicked(bool checked)
{
    if(checked){
        ui->listWidgetEvenements->addItem("radio Windows");
    }
}

void MainWindow::on_radioButtonOSXLion_clicked(bool checked)
{
    if(checked){
        ui->listWidgetEvenements->addItem("radio OS X Lion");
    }
}

void MainWindow::on_radioButtonLinux_clicked(bool checked)
{
    if(checked){
        ui->listWidgetEvenements->addItem("radio Linux");
    }
}

void MainWindow::on_pushButtonLinux_clicked()
{
    ui->listWidgetEvenements->addItem("bouton Linux");
}

void MainWindow::on_pushButtonWindows_clicked()
{
    ui->listWidgetEvenements->addItem("bouton Windows");
}

void MainWindow::on_pushButtonOSXLion_clicked()
{
    ui->listWidgetEvenements->addItem("bouton OS X Lion");
}

void MainWindow::on_comboBoxChoix_activated(int index)
{
    switch (index) {
    case 0 :
        ui->listWidgetEvenements->addItem("Linux");
        break;
    case 1 :
        ui->listWidgetEvenements->addItem("Windows");
        break;
    case 2 :
        ui->listWidgetEvenements->addItem("OS X Lion");
        break;
    }
}

void MainWindow::on_lineEditCode_textChanged(const QString &arg1)
{
    ui->listWidgetEvenements->addItem(arg1);
}

void MainWindow::on_actionC_triggered()
{
    ui->listWidgetEvenements->addItem("C");
}

void MainWindow::on_actionJAVA_triggered()
{
    ui->listWidgetEvenements->addItem("JAVA");
}

void MainWindow::on_actionCPP_triggered()
{
    ui->listWidgetEvenements->addItem("C++");
}

void MainWindow::on_actionPHP_triggered()
{
    ui->listWidgetEvenements->addItem("PHP");
}

void MainWindow::on_actionJAVASCRIPT_triggered()
{
    ui->listWidgetEvenements->addItem("Javascript");
}
