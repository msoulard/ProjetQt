#ifndef BDDWIDGET_H
#define BDDWIDGET_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QTableWidget>
#include <QHeaderView>

QT_BEGIN_NAMESPACE
namespace Ui { class BDDWidget; }
QT_END_NAMESPACE

class BDDWidget : public QWidget
{
    Q_OBJECT

public:
    BDDWidget(QWidget *parent = nullptr);
    ~BDDWidget();

private slots:
    void on_pushButton_ConnexionBDD_clicked();
    void on_pushButton_InfosComptes_clicked();
private:
    Ui::BDDWidget *ui;
    QSqlDatabase banque;
};
#endif // BDDWIDGET_H
