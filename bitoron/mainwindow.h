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


    void on_Btn_signin_clicked();

    void on_Btn_signup_clicked();

    void on_Btn_sendParcel_clicked();

    void on_Btn_deliveryMan_clicked();

    void on_Btn_admin_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
