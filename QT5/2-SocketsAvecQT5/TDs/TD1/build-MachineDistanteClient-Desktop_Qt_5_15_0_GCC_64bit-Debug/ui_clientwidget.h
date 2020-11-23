/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_ConnexionServeur;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_AdresseIPServeur;
    QLineEdit *lineEdit_IPServeur;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_PortServeur;
    QLineEdit *lineEdit_PortServeur;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Quitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Connexion;
    QVBoxLayout *verticalLayout;
    QLabel *label_EtatConnexion;
    QTextEdit *textEdit_Etat;
    QGroupBox *groupBox_InfosClient;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_NomOrdi;
    QLineEdit *lineEdit_NomOrdi;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_NomUtili;
    QLineEdit *lineEdit_NomUtili;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_ArchitectureProcess;
    QLineEdit *lineEdit_ArchitectureProcess;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_OSUtili;
    QLineEdit *lineEdit_OSUtili;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QString::fromUtf8("ClientWidget"));
        ClientWidget->resize(580, 531);
        layoutWidget = new QWidget(ClientWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 561, 511));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_ConnexionServeur = new QGroupBox(layoutWidget);
        groupBox_ConnexionServeur->setObjectName(QString::fromUtf8("groupBox_ConnexionServeur"));
        layoutWidget1 = new QWidget(groupBox_ConnexionServeur);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 30, 546, 215));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_AdresseIPServeur = new QLabel(layoutWidget1);
        label_AdresseIPServeur->setObjectName(QString::fromUtf8("label_AdresseIPServeur"));

        horizontalLayout->addWidget(label_AdresseIPServeur);

        lineEdit_IPServeur = new QLineEdit(layoutWidget1);
        lineEdit_IPServeur->setObjectName(QString::fromUtf8("lineEdit_IPServeur"));

        horizontalLayout->addWidget(lineEdit_IPServeur);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_PortServeur = new QLabel(layoutWidget1);
        label_PortServeur->setObjectName(QString::fromUtf8("label_PortServeur"));

        horizontalLayout_2->addWidget(label_PortServeur);

        lineEdit_PortServeur = new QLineEdit(layoutWidget1);
        lineEdit_PortServeur->setObjectName(QString::fromUtf8("lineEdit_PortServeur"));

        horizontalLayout_2->addWidget(lineEdit_PortServeur);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_Quitter = new QPushButton(layoutWidget1);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));

        horizontalLayout_3->addWidget(pushButton_Quitter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_Connexion = new QPushButton(layoutWidget1);
        pushButton_Connexion->setObjectName(QString::fromUtf8("pushButton_Connexion"));

        horizontalLayout_3->addWidget(pushButton_Connexion);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_EtatConnexion = new QLabel(layoutWidget1);
        label_EtatConnexion->setObjectName(QString::fromUtf8("label_EtatConnexion"));

        verticalLayout->addWidget(label_EtatConnexion);

        textEdit_Etat = new QTextEdit(layoutWidget1);
        textEdit_Etat->setObjectName(QString::fromUtf8("textEdit_Etat"));

        verticalLayout->addWidget(textEdit_Etat);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_4->addWidget(groupBox_ConnexionServeur);

        groupBox_InfosClient = new QGroupBox(layoutWidget);
        groupBox_InfosClient->setObjectName(QString::fromUtf8("groupBox_InfosClient"));
        layoutWidget2 = new QWidget(groupBox_InfosClient);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 541, 221));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_NomOrdi = new QPushButton(layoutWidget2);
        pushButton_NomOrdi->setObjectName(QString::fromUtf8("pushButton_NomOrdi"));

        horizontalLayout_5->addWidget(pushButton_NomOrdi);

        lineEdit_NomOrdi = new QLineEdit(layoutWidget2);
        lineEdit_NomOrdi->setObjectName(QString::fromUtf8("lineEdit_NomOrdi"));

        horizontalLayout_5->addWidget(lineEdit_NomOrdi);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_NomUtili = new QPushButton(layoutWidget2);
        pushButton_NomUtili->setObjectName(QString::fromUtf8("pushButton_NomUtili"));

        horizontalLayout_6->addWidget(pushButton_NomUtili);

        lineEdit_NomUtili = new QLineEdit(layoutWidget2);
        lineEdit_NomUtili->setObjectName(QString::fromUtf8("lineEdit_NomUtili"));

        horizontalLayout_6->addWidget(lineEdit_NomUtili);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_ArchitectureProcess = new QPushButton(layoutWidget2);
        pushButton_ArchitectureProcess->setObjectName(QString::fromUtf8("pushButton_ArchitectureProcess"));

        horizontalLayout_7->addWidget(pushButton_ArchitectureProcess);

        lineEdit_ArchitectureProcess = new QLineEdit(layoutWidget2);
        lineEdit_ArchitectureProcess->setObjectName(QString::fromUtf8("lineEdit_ArchitectureProcess"));

        horizontalLayout_7->addWidget(lineEdit_ArchitectureProcess);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_OSUtili = new QPushButton(layoutWidget2);
        pushButton_OSUtili->setObjectName(QString::fromUtf8("pushButton_OSUtili"));

        horizontalLayout_8->addWidget(pushButton_OSUtili);

        lineEdit_OSUtili = new QLineEdit(layoutWidget2);
        lineEdit_OSUtili->setObjectName(QString::fromUtf8("lineEdit_OSUtili"));

        horizontalLayout_8->addWidget(lineEdit_OSUtili);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_4->addWidget(groupBox_InfosClient);


        retranslateUi(ClientWidget);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), ClientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QCoreApplication::translate("ClientWidget", "ClientWidget", nullptr));
        groupBox_ConnexionServeur->setTitle(QCoreApplication::translate("ClientWidget", "Connexion au serveur", nullptr));
        label_AdresseIPServeur->setText(QCoreApplication::translate("ClientWidget", "Adresse IP du serveur :", nullptr));
        label_PortServeur->setText(QCoreApplication::translate("ClientWidget", "Num\303\251ro de port du serveur :", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButton_Connexion->setText(QCoreApplication::translate("ClientWidget", "Connexion", nullptr));
        label_EtatConnexion->setText(QCoreApplication::translate("ClientWidget", "Etat de la connexion", nullptr));
        groupBox_InfosClient->setTitle(QCoreApplication::translate("ClientWidget", "Informations Client", nullptr));
        pushButton_NomOrdi->setText(QCoreApplication::translate("ClientWidget", "Nom de l'ordinateur distant", nullptr));
        pushButton_NomUtili->setText(QCoreApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButton_ArchitectureProcess->setText(QCoreApplication::translate("ClientWidget", "Architecture processeur", nullptr));
        pushButton_OSUtili->setText(QCoreApplication::translate("ClientWidget", "OS de l'utilisateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
