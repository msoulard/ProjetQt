/********************************************************************************
** Form generated from reading UI file 'creationclient_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATIONCLIENT_DIALOG_H
#define UI_CREATIONCLIENT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreationClient_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Nom;
    QLineEdit *lineEdit_Nom;
    QVBoxLayout *verticalLayout;
    QLabel *label_VilleAgence;
    QComboBox *comboBox_VilleAgence;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Prenom;
    QLineEdit *lineEdit_Prenom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Solde;
    QLineEdit *lineEdit_Solde;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_VilleOrigine;
    QLineEdit *lineEdit_VilleOrigine;

    void setupUi(QDialog *CreationClient_Dialog)
    {
        if (CreationClient_Dialog->objectName().isEmpty())
            CreationClient_Dialog->setObjectName(QString::fromUtf8("CreationClient_Dialog"));
        CreationClient_Dialog->resize(363, 257);
        buttonBox = new QDialogButtonBox(CreationClient_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 160, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(CreationClient_Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 322, 124));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Nom = new QLabel(widget);
        label_Nom->setObjectName(QString::fromUtf8("label_Nom"));

        horizontalLayout->addWidget(label_Nom);

        lineEdit_Nom = new QLineEdit(widget);
        lineEdit_Nom->setObjectName(QString::fromUtf8("lineEdit_Nom"));

        horizontalLayout->addWidget(lineEdit_Nom);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_VilleAgence = new QLabel(widget);
        label_VilleAgence->setObjectName(QString::fromUtf8("label_VilleAgence"));

        verticalLayout->addWidget(label_VilleAgence);

        comboBox_VilleAgence = new QComboBox(widget);
        comboBox_VilleAgence->setObjectName(QString::fromUtf8("comboBox_VilleAgence"));

        verticalLayout->addWidget(comboBox_VilleAgence);


        gridLayout->addLayout(verticalLayout, 0, 1, 2, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_Prenom = new QLabel(widget);
        label_Prenom->setObjectName(QString::fromUtf8("label_Prenom"));

        horizontalLayout_2->addWidget(label_Prenom);

        lineEdit_Prenom = new QLineEdit(widget);
        lineEdit_Prenom->setObjectName(QString::fromUtf8("lineEdit_Prenom"));

        horizontalLayout_2->addWidget(lineEdit_Prenom);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Solde = new QLabel(widget);
        label_Solde->setObjectName(QString::fromUtf8("label_Solde"));

        horizontalLayout_3->addWidget(label_Solde);

        lineEdit_Solde = new QLineEdit(widget);
        lineEdit_Solde->setObjectName(QString::fromUtf8("lineEdit_Solde"));

        horizontalLayout_3->addWidget(lineEdit_Solde);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_VilleOrigine = new QLabel(widget);
        label_VilleOrigine->setObjectName(QString::fromUtf8("label_VilleOrigine"));

        horizontalLayout_4->addWidget(label_VilleOrigine);

        lineEdit_VilleOrigine = new QLineEdit(widget);
        lineEdit_VilleOrigine->setObjectName(QString::fromUtf8("lineEdit_VilleOrigine"));

        horizontalLayout_4->addWidget(lineEdit_VilleOrigine);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        retranslateUi(CreationClient_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreationClient_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreationClient_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreationClient_Dialog);
    } // setupUi

    void retranslateUi(QDialog *CreationClient_Dialog)
    {
        CreationClient_Dialog->setWindowTitle(QCoreApplication::translate("CreationClient_Dialog", "Dialog", nullptr));
        label_Nom->setText(QCoreApplication::translate("CreationClient_Dialog", "Nom", nullptr));
        label_VilleAgence->setText(QCoreApplication::translate("CreationClient_Dialog", "Ville de l'agence", nullptr));
        label_Prenom->setText(QCoreApplication::translate("CreationClient_Dialog", "Pr\303\251nom", nullptr));
        label_Solde->setText(QCoreApplication::translate("CreationClient_Dialog", "Solde", nullptr));
        label_VilleOrigine->setText(QCoreApplication::translate("CreationClient_Dialog", "Ville d'origine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreationClient_Dialog: public Ui_CreationClient_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATIONCLIENT_DIALOG_H
