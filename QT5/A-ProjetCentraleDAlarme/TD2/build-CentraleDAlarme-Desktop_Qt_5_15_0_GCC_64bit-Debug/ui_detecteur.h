/********************************************************************************
** Form generated from reading UI file 'detecteur.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTEUR_H
#define UI_DETECTEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Detecteur
{
public:
    QPushButton *pushButtonIntrus;

    void setupUi(QDialog *Detecteur)
    {
        if (Detecteur->objectName().isEmpty())
            Detecteur->setObjectName(QString::fromUtf8("Detecteur"));
        Detecteur->resize(228, 160);
        pushButtonIntrus = new QPushButton(Detecteur);
        pushButtonIntrus->setObjectName(QString::fromUtf8("pushButtonIntrus"));
        pushButtonIntrus->setGeometry(QRect(20, 20, 191, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        pushButtonIntrus->setFont(font);

        retranslateUi(Detecteur);

        QMetaObject::connectSlotsByName(Detecteur);
    } // setupUi

    void retranslateUi(QDialog *Detecteur)
    {
        Detecteur->setWindowTitle(QCoreApplication::translate("Detecteur", "Dialog", nullptr));
        pushButtonIntrus->setText(QCoreApplication::translate("Detecteur", "Pr\303\251sence d\303\251tect\303\251e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Detecteur: public Ui_Detecteur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTEUR_H
