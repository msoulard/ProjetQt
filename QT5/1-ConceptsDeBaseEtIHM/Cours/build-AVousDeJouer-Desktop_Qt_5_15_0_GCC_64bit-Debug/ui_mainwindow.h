/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionC;
    QAction *actionJAVA;
    QAction *actionCPP;
    QAction *actionPHP;
    QAction *actionJAVASCRIPT;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutCode;
    QLabel *labelCode;
    QLineEdit *lineEditCode;
    QHBoxLayout *horizontalLayoutChoix;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelChoix;
    QComboBox *comboBoxChoix;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_CheckBox;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxOSXLion;
    QCheckBox *checkBoxLinux;
    QHBoxLayout *horizontalLayoutRadioButton;
    QRadioButton *radioButtonWindows;
    QRadioButton *radioButtonOSXLion;
    QRadioButton *radioButtonLinux;
    QHBoxLayout *horizontalLayoutPushButton;
    QPushButton *pushButtonLinux;
    QPushButton *pushButtonWindows;
    QPushButton *pushButtonOSXLion;
    QHBoxLayout *horizontalLayoutQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonQuitter;
    QLabel *labelEvenements;
    QListWidget *listWidgetEvenements;
    QMenuBar *menubar;
    QMenu *menuLangages;
    QMenu *menuWEB;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(382, 484);
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QString::fromUtf8("actionC"));
        actionJAVA = new QAction(MainWindow);
        actionJAVA->setObjectName(QString::fromUtf8("actionJAVA"));
        actionCPP = new QAction(MainWindow);
        actionCPP->setObjectName(QString::fromUtf8("actionCPP"));
        actionPHP = new QAction(MainWindow);
        actionPHP->setObjectName(QString::fromUtf8("actionPHP"));
        actionJAVASCRIPT = new QAction(MainWindow);
        actionJAVASCRIPT->setObjectName(QString::fromUtf8("actionJAVASCRIPT"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayoutCode = new QHBoxLayout();
        horizontalLayoutCode->setObjectName(QString::fromUtf8("horizontalLayoutCode"));
        labelCode = new QLabel(centralwidget);
        labelCode->setObjectName(QString::fromUtf8("labelCode"));

        horizontalLayoutCode->addWidget(labelCode);

        lineEditCode = new QLineEdit(centralwidget);
        lineEditCode->setObjectName(QString::fromUtf8("lineEditCode"));
        lineEditCode->setStyleSheet(QString::fromUtf8("background-color: rgb(7, 251, 165);"));

        horizontalLayoutCode->addWidget(lineEditCode);


        verticalLayout->addLayout(horizontalLayoutCode);

        horizontalLayoutChoix = new QHBoxLayout();
        horizontalLayoutChoix->setObjectName(QString::fromUtf8("horizontalLayoutChoix"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutChoix->addItem(horizontalSpacer_2);

        labelChoix = new QLabel(centralwidget);
        labelChoix->setObjectName(QString::fromUtf8("labelChoix"));

        horizontalLayoutChoix->addWidget(labelChoix);

        comboBoxChoix = new QComboBox(centralwidget);
        comboBoxChoix->addItem(QString());
        comboBoxChoix->addItem(QString());
        comboBoxChoix->addItem(QString());
        comboBoxChoix->setObjectName(QString::fromUtf8("comboBoxChoix"));

        horizontalLayoutChoix->addWidget(comboBoxChoix);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutChoix->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayoutChoix);

        horizontalLayout_CheckBox = new QHBoxLayout();
        horizontalLayout_CheckBox->setObjectName(QString::fromUtf8("horizontalLayout_CheckBox"));
        checkBoxWindows = new QCheckBox(centralwidget);
        checkBoxWindows->setObjectName(QString::fromUtf8("checkBoxWindows"));

        horizontalLayout_CheckBox->addWidget(checkBoxWindows);

        checkBoxOSXLion = new QCheckBox(centralwidget);
        checkBoxOSXLion->setObjectName(QString::fromUtf8("checkBoxOSXLion"));

        horizontalLayout_CheckBox->addWidget(checkBoxOSXLion);

        checkBoxLinux = new QCheckBox(centralwidget);
        checkBoxLinux->setObjectName(QString::fromUtf8("checkBoxLinux"));

        horizontalLayout_CheckBox->addWidget(checkBoxLinux);


        verticalLayout->addLayout(horizontalLayout_CheckBox);

        horizontalLayoutRadioButton = new QHBoxLayout();
        horizontalLayoutRadioButton->setObjectName(QString::fromUtf8("horizontalLayoutRadioButton"));
        radioButtonWindows = new QRadioButton(centralwidget);
        radioButtonWindows->setObjectName(QString::fromUtf8("radioButtonWindows"));

        horizontalLayoutRadioButton->addWidget(radioButtonWindows);

        radioButtonOSXLion = new QRadioButton(centralwidget);
        radioButtonOSXLion->setObjectName(QString::fromUtf8("radioButtonOSXLion"));

        horizontalLayoutRadioButton->addWidget(radioButtonOSXLion);

        radioButtonLinux = new QRadioButton(centralwidget);
        radioButtonLinux->setObjectName(QString::fromUtf8("radioButtonLinux"));

        horizontalLayoutRadioButton->addWidget(radioButtonLinux);


        verticalLayout->addLayout(horizontalLayoutRadioButton);

        horizontalLayoutPushButton = new QHBoxLayout();
        horizontalLayoutPushButton->setObjectName(QString::fromUtf8("horizontalLayoutPushButton"));
        pushButtonLinux = new QPushButton(centralwidget);
        pushButtonLinux->setObjectName(QString::fromUtf8("pushButtonLinux"));

        horizontalLayoutPushButton->addWidget(pushButtonLinux);

        pushButtonWindows = new QPushButton(centralwidget);
        pushButtonWindows->setObjectName(QString::fromUtf8("pushButtonWindows"));

        horizontalLayoutPushButton->addWidget(pushButtonWindows);

        pushButtonOSXLion = new QPushButton(centralwidget);
        pushButtonOSXLion->setObjectName(QString::fromUtf8("pushButtonOSXLion"));

        horizontalLayoutPushButton->addWidget(pushButtonOSXLion);


        verticalLayout->addLayout(horizontalLayoutPushButton);

        horizontalLayoutQuitter = new QHBoxLayout();
        horizontalLayoutQuitter->setObjectName(QString::fromUtf8("horizontalLayoutQuitter"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutQuitter->addItem(horizontalSpacer);

        pushButtonQuitter = new QPushButton(centralwidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 0, 0);"));

        horizontalLayoutQuitter->addWidget(pushButtonQuitter);


        verticalLayout->addLayout(horizontalLayoutQuitter);

        labelEvenements = new QLabel(centralwidget);
        labelEvenements->setObjectName(QString::fromUtf8("labelEvenements"));

        verticalLayout->addWidget(labelEvenements);

        listWidgetEvenements = new QListWidget(centralwidget);
        listWidgetEvenements->setObjectName(QString::fromUtf8("listWidgetEvenements"));
        listWidgetEvenements->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));

        verticalLayout->addWidget(listWidgetEvenements);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 382, 21));
        menuLangages = new QMenu(menubar);
        menuLangages->setObjectName(QString::fromUtf8("menuLangages"));
        menuWEB = new QMenu(menuLangages);
        menuWEB->setObjectName(QString::fromUtf8("menuWEB"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLangages->menuAction());
        menuLangages->addAction(actionC);
        menuLangages->addSeparator();
        menuLangages->addAction(actionJAVA);
        menuLangages->addAction(actionCPP);
        menuLangages->addSeparator();
        menuLangages->addAction(menuWEB->menuAction());
        menuWEB->addAction(actionPHP);
        menuWEB->addAction(actionJAVASCRIPT);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        actionJAVA->setText(QCoreApplication::translate("MainWindow", "JAVA", nullptr));
        actionCPP->setText(QCoreApplication::translate("MainWindow", "C++", nullptr));
        actionPHP->setText(QCoreApplication::translate("MainWindow", "PHP", nullptr));
        actionJAVASCRIPT->setText(QCoreApplication::translate("MainWindow", "JAVASCRIPT", nullptr));
        labelCode->setText(QCoreApplication::translate("MainWindow", "Entrez votre code", nullptr));
        labelChoix->setText(QCoreApplication::translate("MainWindow", "Choix", nullptr));
        comboBoxChoix->setItemText(0, QCoreApplication::translate("MainWindow", "Linux", nullptr));
        comboBoxChoix->setItemText(1, QCoreApplication::translate("MainWindow", "Windows", nullptr));
        comboBoxChoix->setItemText(2, QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));

        checkBoxWindows->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        checkBoxOSXLion->setText(QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));
        checkBoxLinux->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        radioButtonWindows->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        radioButtonOSXLion->setText(QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));
        radioButtonLinux->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        pushButtonLinux->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        pushButtonWindows->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        pushButtonOSXLion->setText(QCoreApplication::translate("MainWindow", "OS X Lion", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        labelEvenements->setText(QCoreApplication::translate("MainWindow", "Ev\303\250nements", nullptr));
        menuLangages->setTitle(QCoreApplication::translate("MainWindow", "Langages", nullptr));
        menuWEB->setTitle(QCoreApplication::translate("MainWindow", "WEB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
