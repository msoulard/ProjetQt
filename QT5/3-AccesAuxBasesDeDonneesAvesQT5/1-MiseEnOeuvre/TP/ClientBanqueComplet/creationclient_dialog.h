#ifndef CREATIONCLIENT_DIALOG_H
#define CREATIONCLIENT_DIALOG_H

#include <QDialog>

namespace Ui {class CreationClient_Dialog;}

class CreationClient_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreationClient_Dialog(QStringList &_agences, QWidget *parent = nullptr);
    ~CreationClient_Dialog();

    QString getVilleBanque();
    QString getNom();

    QString getPrenom();

    QString getVilleOrigine();

    int getSolde();

private:
    Ui::CreationClient_Dialog *ui;
};

#endif // CREATIONCLIENT_DIALOG_H
