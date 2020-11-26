/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_NumPort;
    QSpinBox *spinBox_NumPort;
    QPushButton *pushButton_LancerServeur;
    QLabel *label_Clients;
    QListWidget *listWidget_Clients;
    QPushButton *pushButton_Quitter;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QString::fromUtf8("ServeurWidget"));
        ServeurWidget->resize(800, 600);
        widget = new QWidget(ServeurWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 258, 309));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_NumPort = new QLabel(widget);
        label_NumPort->setObjectName(QString::fromUtf8("label_NumPort"));

        horizontalLayout->addWidget(label_NumPort);

        spinBox_NumPort = new QSpinBox(widget);
        spinBox_NumPort->setObjectName(QString::fromUtf8("spinBox_NumPort"));
        spinBox_NumPort->setMinimum(1025);
        spinBox_NumPort->setMaximum(9999);
        spinBox_NumPort->setValue(1025);
        spinBox_NumPort->setDisplayIntegerBase(10);

        horizontalLayout->addWidget(spinBox_NumPort);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_LancerServeur = new QPushButton(widget);
        pushButton_LancerServeur->setObjectName(QString::fromUtf8("pushButton_LancerServeur"));

        verticalLayout->addWidget(pushButton_LancerServeur);

        label_Clients = new QLabel(widget);
        label_Clients->setObjectName(QString::fromUtf8("label_Clients"));

        verticalLayout->addWidget(label_Clients);

        listWidget_Clients = new QListWidget(widget);
        listWidget_Clients->setObjectName(QString::fromUtf8("listWidget_Clients"));

        verticalLayout->addWidget(listWidget_Clients);

        pushButton_Quitter = new QPushButton(widget);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));

        verticalLayout->addWidget(pushButton_Quitter);


        retranslateUi(ServeurWidget);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QCoreApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        label_NumPort->setText(QCoreApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        pushButton_LancerServeur->setText(QCoreApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        label_Clients->setText(QCoreApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("ServeurWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
