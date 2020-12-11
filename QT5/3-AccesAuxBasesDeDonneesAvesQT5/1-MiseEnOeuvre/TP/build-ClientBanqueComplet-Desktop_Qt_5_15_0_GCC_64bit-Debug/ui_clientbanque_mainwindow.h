/********************************************************************************
** Form generated from reading UI file 'clientbanque_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTBANQUE_MAINWINDOW_H
#define UI_CLIENTBANQUE_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientBanque_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_Etat;
    QListWidget *listWidget_Etat;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Port;
    QLineEdit *lineEdit_Port;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_MessageBanque;
    QLineEdit *lineEdit_MessageBanque;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Adresse;
    QLineEdit *lineEdit_Adresse;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Connexion;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_Operations;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_NumCompte;
    QLineEdit *lineEdit_NumCompte;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_Solde;
    QRadioButton *radioButton_Retrait;
    QRadioButton *radioButton_Depot;
    QPushButton *pushButton_Envoi;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Montant;
    QLineEdit *lineEdit_Montant;
    QPushButton *pushButton_Quitter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *clientBanque_MainWindow)
    {
        if (clientBanque_MainWindow->objectName().isEmpty())
            clientBanque_MainWindow->setObjectName(QString::fromUtf8("clientBanque_MainWindow"));
        clientBanque_MainWindow->resize(653, 580);
        centralwidget = new QWidget(clientBanque_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 611, 271));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_Etat = new QLabel(layoutWidget);
        label_Etat->setObjectName(QString::fromUtf8("label_Etat"));

        verticalLayout->addWidget(label_Etat);

        listWidget_Etat = new QListWidget(layoutWidget);
        listWidget_Etat->setObjectName(QString::fromUtf8("listWidget_Etat"));
        listWidget_Etat->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(listWidget_Etat);


        gridLayout->addLayout(verticalLayout, 0, 1, 3, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_Port = new QLabel(layoutWidget);
        label_Port->setObjectName(QString::fromUtf8("label_Port"));

        horizontalLayout_2->addWidget(label_Port);

        lineEdit_Port = new QLineEdit(layoutWidget);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));

        horizontalLayout_2->addWidget(lineEdit_Port);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_MessageBanque = new QLabel(layoutWidget);
        label_MessageBanque->setObjectName(QString::fromUtf8("label_MessageBanque"));

        verticalLayout_3->addWidget(label_MessageBanque);

        lineEdit_MessageBanque = new QLineEdit(layoutWidget);
        lineEdit_MessageBanque->setObjectName(QString::fromUtf8("lineEdit_MessageBanque"));
        lineEdit_MessageBanque->setEnabled(true);

        verticalLayout_3->addWidget(lineEdit_MessageBanque);


        gridLayout->addLayout(verticalLayout_3, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Adresse = new QLabel(layoutWidget);
        label_Adresse->setObjectName(QString::fromUtf8("label_Adresse"));

        horizontalLayout->addWidget(label_Adresse);

        lineEdit_Adresse = new QLineEdit(layoutWidget);
        lineEdit_Adresse->setObjectName(QString::fromUtf8("lineEdit_Adresse"));

        horizontalLayout->addWidget(lineEdit_Adresse);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_Connexion = new QPushButton(layoutWidget);
        pushButton_Connexion->setObjectName(QString::fromUtf8("pushButton_Connexion"));

        horizontalLayout_3->addWidget(pushButton_Connexion);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        groupBox_Operations = new QGroupBox(centralwidget);
        groupBox_Operations->setObjectName(QString::fromUtf8("groupBox_Operations"));
        groupBox_Operations->setGeometry(QRect(10, 320, 611, 171));
        layoutWidget_2 = new QWidget(groupBox_Operations);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 40, 345, 112));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_NumCompte = new QPushButton(layoutWidget_2);
        pushButton_NumCompte->setObjectName(QString::fromUtf8("pushButton_NumCompte"));

        horizontalLayout_4->addWidget(pushButton_NumCompte);

        lineEdit_NumCompte = new QLineEdit(layoutWidget_2);
        lineEdit_NumCompte->setObjectName(QString::fromUtf8("lineEdit_NumCompte"));

        horizontalLayout_4->addWidget(lineEdit_NumCompte);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_Solde = new QRadioButton(layoutWidget_2);
        radioButton_Solde->setObjectName(QString::fromUtf8("radioButton_Solde"));

        verticalLayout_2->addWidget(radioButton_Solde);

        radioButton_Retrait = new QRadioButton(layoutWidget_2);
        radioButton_Retrait->setObjectName(QString::fromUtf8("radioButton_Retrait"));

        verticalLayout_2->addWidget(radioButton_Retrait);

        radioButton_Depot = new QRadioButton(layoutWidget_2);
        radioButton_Depot->setObjectName(QString::fromUtf8("radioButton_Depot"));

        verticalLayout_2->addWidget(radioButton_Depot);

        pushButton_Envoi = new QPushButton(layoutWidget_2);
        pushButton_Envoi->setObjectName(QString::fromUtf8("pushButton_Envoi"));

        verticalLayout_2->addWidget(pushButton_Envoi);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 2, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_Montant = new QLabel(layoutWidget_2);
        label_Montant->setObjectName(QString::fromUtf8("label_Montant"));

        horizontalLayout_5->addWidget(label_Montant);

        lineEdit_Montant = new QLineEdit(layoutWidget_2);
        lineEdit_Montant->setObjectName(QString::fromUtf8("lineEdit_Montant"));

        horizontalLayout_5->addWidget(lineEdit_Montant);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        pushButton_Quitter = new QPushButton(centralwidget);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(210, 500, 80, 24));
        clientBanque_MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(clientBanque_MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 653, 21));
        clientBanque_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(clientBanque_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        clientBanque_MainWindow->setStatusBar(statusbar);

        retranslateUi(clientBanque_MainWindow);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), clientBanque_MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(clientBanque_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *clientBanque_MainWindow)
    {
        clientBanque_MainWindow->setWindowTitle(QCoreApplication::translate("clientBanque_MainWindow", "clientBanque_MainWindow", nullptr));
        label_Etat->setText(QCoreApplication::translate("clientBanque_MainWindow", "Etat de la connexion", nullptr));
        label_Port->setText(QCoreApplication::translate("clientBanque_MainWindow", "Port :", nullptr));
        label_MessageBanque->setText(QCoreApplication::translate("clientBanque_MainWindow", "Message de la banque", nullptr));
        label_Adresse->setText(QCoreApplication::translate("clientBanque_MainWindow", "Adresse :", nullptr));
        pushButton_Connexion->setText(QCoreApplication::translate("clientBanque_MainWindow", "Connexion", nullptr));
        groupBox_Operations->setTitle(QCoreApplication::translate("clientBanque_MainWindow", "Op\303\251rations envoy\303\251es \303\240 la banque", nullptr));
        pushButton_NumCompte->setText(QCoreApplication::translate("clientBanque_MainWindow", "Num\303\251ro de compte", nullptr));
        radioButton_Solde->setText(QCoreApplication::translate("clientBanque_MainWindow", "Solde", nullptr));
        radioButton_Retrait->setText(QCoreApplication::translate("clientBanque_MainWindow", "Retrait", nullptr));
        radioButton_Depot->setText(QCoreApplication::translate("clientBanque_MainWindow", "D\303\251pot", nullptr));
        pushButton_Envoi->setText(QCoreApplication::translate("clientBanque_MainWindow", "Envoi", nullptr));
        label_Montant->setText(QCoreApplication::translate("clientBanque_MainWindow", "Montant :", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("clientBanque_MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientBanque_MainWindow: public Ui_clientBanque_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTBANQUE_MAINWINDOW_H
