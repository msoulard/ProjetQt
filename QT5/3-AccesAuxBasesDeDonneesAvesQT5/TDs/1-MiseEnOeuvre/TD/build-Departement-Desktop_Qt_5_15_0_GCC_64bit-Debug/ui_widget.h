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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_NomDepartement;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_NumDepartement;
    QLineEdit *lineEdit_NumDepartement;
    QPushButton *pushButton_EnvoiDepartement;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_Regions;
    QComboBox *comboBox_Departements;
    QComboBox *comboBox_Villes;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label_NomDepartement = new QLabel(Widget);
        label_NomDepartement->setObjectName(QString::fromUtf8("label_NomDepartement"));
        label_NomDepartement->setGeometry(QRect(30, 100, 131, 16));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 70, 531, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_NumDepartement = new QLabel(widget);
        label_NumDepartement->setObjectName(QString::fromUtf8("label_NumDepartement"));

        horizontalLayout->addWidget(label_NumDepartement);

        lineEdit_NumDepartement = new QLineEdit(widget);
        lineEdit_NumDepartement->setObjectName(QString::fromUtf8("lineEdit_NumDepartement"));

        horizontalLayout->addWidget(lineEdit_NumDepartement);

        pushButton_EnvoiDepartement = new QPushButton(widget);
        pushButton_EnvoiDepartement->setObjectName(QString::fromUtf8("pushButton_EnvoiDepartement"));

        horizontalLayout->addWidget(pushButton_EnvoiDepartement);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 130, 591, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox_Regions = new QComboBox(widget1);
        comboBox_Regions->addItem(QString());
        comboBox_Regions->setObjectName(QString::fromUtf8("comboBox_Regions"));

        horizontalLayout_2->addWidget(comboBox_Regions);

        comboBox_Departements = new QComboBox(widget1);
        comboBox_Departements->addItem(QString());
        comboBox_Departements->setObjectName(QString::fromUtf8("comboBox_Departements"));

        horizontalLayout_2->addWidget(comboBox_Departements);

        comboBox_Villes = new QComboBox(widget1);
        comboBox_Villes->addItem(QString());
        comboBox_Villes->setObjectName(QString::fromUtf8("comboBox_Villes"));
        comboBox_Villes->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_2->addWidget(comboBox_Villes);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_NomDepartement->setText(QCoreApplication::translate("Widget", "Nom du d\303\251partement", nullptr));
        label_NumDepartement->setText(QCoreApplication::translate("Widget", "Donnez un num\303\251ro de d\303\251partement", nullptr));
        pushButton_EnvoiDepartement->setText(QCoreApplication::translate("Widget", "Avoir le nom du d\303\251partement", nullptr));
        comboBox_Regions->setItemText(0, QCoreApplication::translate("Widget", "Choisissez une r\303\251gion", nullptr));

        comboBox_Departements->setItemText(0, QCoreApplication::translate("Widget", "Choisissez un d\303\251partement", nullptr));

        comboBox_Villes->setItemText(0, QCoreApplication::translate("Widget", "Choisissez une ville", nullptr));

        comboBox_Villes->setCurrentText(QCoreApplication::translate("Widget", "Choisissez une ville", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
