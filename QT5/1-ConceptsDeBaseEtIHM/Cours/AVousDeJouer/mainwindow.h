#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_checkBoxWindows_stateChanged(int arg1);

    void on_checkBoxOSXLion_stateChanged(int arg1);

    void on_checkBoxLinux_stateChanged(int arg1);

    void on_radioButtonWindows_clicked(bool checked);

    void on_radioButtonOSXLion_clicked(bool checked);

    void on_radioButtonLinux_clicked(bool checked);

    void on_pushButtonLinux_clicked();

    void on_pushButtonWindows_clicked();

    void on_pushButtonOSXLion_clicked();

    void on_comboBoxChoix_activated(int index);

    void on_lineEditCode_textChanged(const QString &arg1);

    void on_actionC_triggered();

    void on_actionJAVA_triggered();

    void on_actionCPP_triggered();

    void on_actionPHP_triggered();

    void on_actionJAVASCRIPT_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
