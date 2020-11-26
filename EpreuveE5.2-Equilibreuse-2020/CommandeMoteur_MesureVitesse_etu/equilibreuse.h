#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H

#include <QMainWindow>
#include <QLabel>
#include "mcculdaq.h"
#include "capot.h"
#include "moteur.h"
#include "codeur.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Equilibreuse; }
QT_END_NAMESPACE

class Equilibreuse : public QMainWindow
{
    Q_OBJECT

public:
    Equilibreuse(QWidget *parent = nullptr);
    ~Equilibreuse();

public slots:
    void onCapot_EtatCapotChange(bool _etat);
    void onCodeur_VitesseChange(int _vitesse);
private slots:
    void on_pushButton_Lancer_clicked();
    void on_pushButton_Arreter_clicked();

private:
    Ui::Equilibreuse *ui;
    MccUldaq laCarte;
    Capot *leCapot;
    QLabel labelEtatCapot;
    Moteur *leMoteur;
    Codeur *leCodeur;
};
#endif // EQUILIBREUSE_H
