#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include "capot.h"
#include "mcculdaq.h"
#include "moteur.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Equilibreuse; }
QT_END_NAMESPACE

class Equilibreuse : public QMainWindow
{
    Q_OBJECT

public:
    explicit Equilibreuse(QWidget *parent = nullptr);
    ~Equilibreuse();
public slots:
    void onCapot_EtatCapotChange(bool _etatCapot);
private slots:
    void on_pushButton_Lancer_clicked();
    void on_pushButton_Arreter_clicked();
    void onTimer_timeout();
private:
    Ui::Equilibreuse *ui;
    MccUldaq laCarte;
    Capot *leCapot;
    QLabel labelEtatCapot;
    Moteur *leMoteur;
    QTimer tempo;
    int indiceTempo;
};
#endif // EQUILIBREUSE_H
