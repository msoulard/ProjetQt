/********************************************************************************
** Form generated from reading UI file 'equilibreuse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUILIBREUSE_H
#define UI_EQUILIBREUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equilibreuse
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDial *dial_ConsigneVitesse;
    QLCDNumber *lcdNumber_Consigne;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Lancer;
    QPushButton *pushButton_Arreter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Equilibreuse)
    {
        if (Equilibreuse->objectName().isEmpty())
            Equilibreuse->setObjectName(QString::fromUtf8("Equilibreuse"));
        Equilibreuse->resize(800, 600);
        centralwidget = new QWidget(Equilibreuse);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 50, 202, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dial_ConsigneVitesse = new QDial(widget);
        dial_ConsigneVitesse->setObjectName(QString::fromUtf8("dial_ConsigneVitesse"));

        horizontalLayout->addWidget(dial_ConsigneVitesse);

        lcdNumber_Consigne = new QLCDNumber(widget);
        lcdNumber_Consigne->setObjectName(QString::fromUtf8("lcdNumber_Consigne"));

        horizontalLayout->addWidget(lcdNumber_Consigne);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_Lancer = new QPushButton(widget);
        pushButton_Lancer->setObjectName(QString::fromUtf8("pushButton_Lancer"));

        horizontalLayout_2->addWidget(pushButton_Lancer);

        pushButton_Arreter = new QPushButton(widget);
        pushButton_Arreter->setObjectName(QString::fromUtf8("pushButton_Arreter"));

        horizontalLayout_2->addWidget(pushButton_Arreter);


        verticalLayout->addLayout(horizontalLayout_2);

        Equilibreuse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Equilibreuse);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Equilibreuse->setMenuBar(menubar);
        statusbar = new QStatusBar(Equilibreuse);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Equilibreuse->setStatusBar(statusbar);

        retranslateUi(Equilibreuse);
        QObject::connect(dial_ConsigneVitesse, SIGNAL(valueChanged(int)), lcdNumber_Consigne, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Equilibreuse);
    } // setupUi

    void retranslateUi(QMainWindow *Equilibreuse)
    {
        Equilibreuse->setWindowTitle(QCoreApplication::translate("Equilibreuse", "Equilibreuse", nullptr));
        pushButton_Lancer->setText(QCoreApplication::translate("Equilibreuse", "Lancer moteur", nullptr));
        pushButton_Arreter->setText(QCoreApplication::translate("Equilibreuse", "Arr\303\252ter moteur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Equilibreuse: public Ui_Equilibreuse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUILIBREUSE_H
