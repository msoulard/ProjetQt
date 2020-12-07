/********************************************************************************
** Form generated from reading UI file 'bddwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BDDWIDGET_H
#define UI_BDDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BDDWidget
{
public:
    QGroupBox *groupBox_Connexion;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_AdresseIP;
    QLineEdit *lineEdit_AdresseIP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_NomBDD;
    QLineEdit *lineEdit_NomBDD;
    QPushButton *pushButton_ConnexionBDD;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Login;
    QLineEdit *lineEdit_Login;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_MotDePasse;
    QLineEdit *lineEdit_MotDePasse;
    QGroupBox *groupBox_InfosComptes;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_InfosComptes;
    QTableWidget *tableWidget_InfosComptes;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Quitter;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *BDDWidget)
    {
        if (BDDWidget->objectName().isEmpty())
            BDDWidget->setObjectName(QString::fromUtf8("BDDWidget"));
        BDDWidget->resize(800, 600);
        groupBox_Connexion = new QGroupBox(BDDWidget);
        groupBox_Connexion->setObjectName(QString::fromUtf8("groupBox_Connexion"));
        groupBox_Connexion->setGeometry(QRect(10, 10, 461, 211));
        layoutWidget = new QWidget(groupBox_Connexion);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 427, 124));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_AdresseIP = new QLabel(layoutWidget);
        label_AdresseIP->setObjectName(QString::fromUtf8("label_AdresseIP"));

        horizontalLayout->addWidget(label_AdresseIP);

        lineEdit_AdresseIP = new QLineEdit(layoutWidget);
        lineEdit_AdresseIP->setObjectName(QString::fromUtf8("lineEdit_AdresseIP"));

        horizontalLayout->addWidget(lineEdit_AdresseIP);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_NomBDD = new QLabel(layoutWidget);
        label_NomBDD->setObjectName(QString::fromUtf8("label_NomBDD"));

        horizontalLayout_2->addWidget(label_NomBDD);

        lineEdit_NomBDD = new QLineEdit(layoutWidget);
        lineEdit_NomBDD->setObjectName(QString::fromUtf8("lineEdit_NomBDD"));

        horizontalLayout_2->addWidget(lineEdit_NomBDD);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        pushButton_ConnexionBDD = new QPushButton(layoutWidget);
        pushButton_ConnexionBDD->setObjectName(QString::fromUtf8("pushButton_ConnexionBDD"));

        gridLayout->addWidget(pushButton_ConnexionBDD, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Login = new QLabel(layoutWidget);
        label_Login->setObjectName(QString::fromUtf8("label_Login"));

        horizontalLayout_3->addWidget(label_Login);

        lineEdit_Login = new QLineEdit(layoutWidget);
        lineEdit_Login->setObjectName(QString::fromUtf8("lineEdit_Login"));

        horizontalLayout_3->addWidget(lineEdit_Login);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_MotDePasse = new QLabel(layoutWidget);
        label_MotDePasse->setObjectName(QString::fromUtf8("label_MotDePasse"));

        horizontalLayout_4->addWidget(label_MotDePasse);

        lineEdit_MotDePasse = new QLineEdit(layoutWidget);
        lineEdit_MotDePasse->setObjectName(QString::fromUtf8("lineEdit_MotDePasse"));

        horizontalLayout_4->addWidget(lineEdit_MotDePasse);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        groupBox_InfosComptes = new QGroupBox(BDDWidget);
        groupBox_InfosComptes->setObjectName(QString::fromUtf8("groupBox_InfosComptes"));
        groupBox_InfosComptes->setGeometry(QRect(10, 230, 551, 271));
        layoutWidget_2 = new QWidget(groupBox_InfosComptes);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(60, 30, 411, 224));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_InfosComptes = new QPushButton(layoutWidget_2);
        pushButton_InfosComptes->setObjectName(QString::fromUtf8("pushButton_InfosComptes"));

        verticalLayout->addWidget(pushButton_InfosComptes);

        tableWidget_InfosComptes = new QTableWidget(layoutWidget_2);
        if (tableWidget_InfosComptes->columnCount() < 4)
            tableWidget_InfosComptes->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_InfosComptes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_InfosComptes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_InfosComptes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_InfosComptes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_InfosComptes->setObjectName(QString::fromUtf8("tableWidget_InfosComptes"));
        tableWidget_InfosComptes->setTabletTracking(false);
        tableWidget_InfosComptes->setWordWrap(false);
        tableWidget_InfosComptes->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_InfosComptes->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_InfosComptes->horizontalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableWidget_InfosComptes);

        layoutWidget_3 = new QWidget(BDDWidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(90, 500, 174, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton_Quitter = new QPushButton(layoutWidget_3);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));

        horizontalLayout_5->addWidget(pushButton_Quitter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        retranslateUi(BDDWidget);

        QMetaObject::connectSlotsByName(BDDWidget);
    } // setupUi

    void retranslateUi(QWidget *BDDWidget)
    {
        BDDWidget->setWindowTitle(QCoreApplication::translate("BDDWidget", "BDDWidget", nullptr));
        groupBox_Connexion->setTitle(QCoreApplication::translate("BDDWidget", "Connexion", nullptr));
        label_AdresseIP->setText(QCoreApplication::translate("BDDWidget", "Adresse IP", nullptr));
        label_NomBDD->setText(QCoreApplication::translate("BDDWidget", "Nom de la BDD", nullptr));
        pushButton_ConnexionBDD->setText(QCoreApplication::translate("BDDWidget", "Connexion \303\240 la base de donn\303\251es", nullptr));
        label_Login->setText(QCoreApplication::translate("BDDWidget", "Login", nullptr));
        label_MotDePasse->setText(QCoreApplication::translate("BDDWidget", "Mot de passe", nullptr));
        groupBox_InfosComptes->setTitle(QCoreApplication::translate("BDDWidget", "Affichage infos comptes", nullptr));
        pushButton_InfosComptes->setText(QCoreApplication::translate("BDDWidget", "Afficher les informations de tous les comptes", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_InfosComptes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BDDWidget", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_InfosComptes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BDDWidget", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_InfosComptes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BDDWidget", "Num\303\251ro de compte", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_InfosComptes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BDDWidget", "Solde", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("BDDWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BDDWidget: public Ui_BDDWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BDDWIDGET_H
