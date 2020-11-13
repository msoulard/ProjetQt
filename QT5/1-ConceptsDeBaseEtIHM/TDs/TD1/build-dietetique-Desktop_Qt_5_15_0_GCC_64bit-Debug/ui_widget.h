/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidgetDietetique;
    QWidget *tabInfosPerso;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNom;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPrenom;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelSexe;
    QRadioButton *radioButtonFemme;
    QRadioButton *radioButtonHomme;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAge;
    QSpinBox *spinBoxAge;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPoids;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelTaille;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSuite;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tabCaculPoids;
    QTextEdit *textEditAfficheur;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonDevine;
    QPushButton *pushButtonLorentz;
    QPushButton *pushButtonLorentzAge;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setWindowModality(Qt::NonModal);
        Widget->resize(545, 466);
        Widget->setMaximumSize(QSize(545, 466));
        tabWidgetDietetique = new QTabWidget(Widget);
        tabWidgetDietetique->setObjectName(QString::fromUtf8("tabWidgetDietetique"));
        tabWidgetDietetique->setGeometry(QRect(20, 30, 411, 291));
        tabInfosPerso = new QWidget();
        tabInfosPerso->setObjectName(QString::fromUtf8("tabInfosPerso"));
        widget = new QWidget(tabInfosPerso);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 2, 391, 251));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelNom = new QLabel(widget);
        labelNom->setObjectName(QString::fromUtf8("labelNom"));

        horizontalLayout->addWidget(labelNom);

        lineEditNom = new QLineEdit(widget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        horizontalLayout->addWidget(lineEditNom);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelPrenom = new QLabel(widget);
        labelPrenom->setObjectName(QString::fromUtf8("labelPrenom"));

        horizontalLayout_2->addWidget(labelPrenom);

        lineEditPrenom = new QLineEdit(widget);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        horizontalLayout_2->addWidget(lineEditPrenom);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelSexe = new QLabel(widget);
        labelSexe->setObjectName(QString::fromUtf8("labelSexe"));

        horizontalLayout_3->addWidget(labelSexe);

        radioButtonFemme = new QRadioButton(widget);
        radioButtonFemme->setObjectName(QString::fromUtf8("radioButtonFemme"));

        horizontalLayout_3->addWidget(radioButtonFemme);

        radioButtonHomme = new QRadioButton(widget);
        radioButtonHomme->setObjectName(QString::fromUtf8("radioButtonHomme"));

        horizontalLayout_3->addWidget(radioButtonHomme);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelAge = new QLabel(widget);
        labelAge->setObjectName(QString::fromUtf8("labelAge"));

        horizontalLayout_4->addWidget(labelAge);

        spinBoxAge = new QSpinBox(widget);
        spinBoxAge->setObjectName(QString::fromUtf8("spinBoxAge"));
        spinBoxAge->setMinimum(1);
        spinBoxAge->setMaximum(200);

        horizontalLayout_4->addWidget(spinBoxAge);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelPoids = new QLabel(widget);
        labelPoids->setObjectName(QString::fromUtf8("labelPoids"));

        horizontalLayout_5->addWidget(labelPoids);

        doubleSpinBoxPoids = new QDoubleSpinBox(widget);
        doubleSpinBoxPoids->setObjectName(QString::fromUtf8("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setMinimum(15.000000000000000);
        doubleSpinBoxPoids->setMaximum(300.000000000000000);
        doubleSpinBoxPoids->setSingleStep(0.100000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxPoids);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelTaille = new QLabel(widget);
        labelTaille->setObjectName(QString::fromUtf8("labelTaille"));

        horizontalLayout_6->addWidget(labelTaille);

        doubleSpinBoxTaille = new QDoubleSpinBox(widget);
        doubleSpinBoxTaille->setObjectName(QString::fromUtf8("doubleSpinBoxTaille"));
        doubleSpinBoxTaille->setMinimum(0.500000000000000);
        doubleSpinBoxTaille->setMaximum(3.000000000000000);
        doubleSpinBoxTaille->setSingleStep(0.010000000000000);

        horizontalLayout_6->addWidget(doubleSpinBoxTaille);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pushButtonSuite = new QPushButton(widget);
        pushButtonSuite->setObjectName(QString::fromUtf8("pushButtonSuite"));

        horizontalLayout_7->addWidget(pushButtonSuite);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        tabWidgetDietetique->addTab(tabInfosPerso, QString());
        tabCaculPoids = new QWidget();
        tabCaculPoids->setObjectName(QString::fromUtf8("tabCaculPoids"));
        textEditAfficheur = new QTextEdit(tabCaculPoids);
        textEditAfficheur->setObjectName(QString::fromUtf8("textEditAfficheur"));
        textEditAfficheur->setGeometry(QRect(10, 10, 391, 141));
        widget1 = new QWidget(tabCaculPoids);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(-7, 167, 421, 91));
        horizontalLayout_9 = new QHBoxLayout(widget1);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonDevine = new QPushButton(widget1);
        pushButtonDevine->setObjectName(QString::fromUtf8("pushButtonDevine"));

        verticalLayout_2->addWidget(pushButtonDevine);

        pushButtonLorentz = new QPushButton(widget1);
        pushButtonLorentz->setObjectName(QString::fromUtf8("pushButtonLorentz"));

        verticalLayout_2->addWidget(pushButtonLorentz);

        pushButtonLorentzAge = new QPushButton(widget1);
        pushButtonLorentzAge->setObjectName(QString::fromUtf8("pushButtonLorentzAge"));

        verticalLayout_2->addWidget(pushButtonLorentzAge);


        horizontalLayout_9->addLayout(verticalLayout_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        tabWidgetDietetique->addTab(tabCaculPoids, QString());
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(190, 380, 80, 24));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        tabWidgetDietetique->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        labelNom->setText(QCoreApplication::translate("Widget", "Nom", nullptr));
        labelPrenom->setText(QCoreApplication::translate("Widget", "Pr\303\251nom", nullptr));
        labelSexe->setText(QCoreApplication::translate("Widget", "Sexe", nullptr));
        radioButtonFemme->setText(QCoreApplication::translate("Widget", "Femme", nullptr));
        radioButtonHomme->setText(QCoreApplication::translate("Widget", "Homme", nullptr));
        labelAge->setText(QCoreApplication::translate("Widget", "Age", nullptr));
        labelPoids->setText(QCoreApplication::translate("Widget", "Poids (kg", nullptr));
        labelTaille->setText(QCoreApplication::translate("Widget", "Taille (m)", nullptr));
        pushButtonSuite->setText(QCoreApplication::translate("Widget", "Suite", nullptr));
        tabWidgetDietetique->setTabText(tabWidgetDietetique->indexOf(tabInfosPerso), QCoreApplication::translate("Widget", "Informations personnelles", nullptr));
        pushButtonDevine->setText(QCoreApplication::translate("Widget", "Poids id\303\251al formule de Devine", nullptr));
        pushButtonLorentz->setText(QCoreApplication::translate("Widget", "Poids id\303\251al formule de Lorentz", nullptr));
        pushButtonLorentzAge->setText(QCoreApplication::translate("Widget", "Poids id\303\251al formule de Lorentz en fonction de l'\303\242ge", nullptr));
        tabWidgetDietetique->setTabText(tabWidgetDietetique->indexOf(tabCaculPoids), QCoreApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
