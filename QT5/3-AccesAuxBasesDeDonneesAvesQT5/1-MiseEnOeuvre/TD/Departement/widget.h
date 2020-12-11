#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_EnvoiDepartement_clicked();

    void on_comboBox_Regions_currentIndexChanged(int index);

    void on_comboBox_Departements_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
    QSqlDatabase db;
};
#endif // WIDGET_H
