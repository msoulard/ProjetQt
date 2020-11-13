#ifndef IHM_TEST_H
#define IHM_TEST_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class IHM_test; }
QT_END_NAMESPACE

class IHM_test : public QWidget
{
    Q_OBJECT

public:
    IHM_test(QWidget *parent = nullptr);
    ~IHM_test();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::IHM_test *ui;
};
#endif // IHM_TEST_H
