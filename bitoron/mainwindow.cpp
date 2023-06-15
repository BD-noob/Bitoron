#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Btn_signin_clicked()
{
    ui->container->setCurrentIndex(2);  //stackedWidget is renamed as container

}

void MainWindow::on_Btn_signup_clicked()
{
    ui->container->setCurrentIndex(2);  //stackedWidget is renamed as container
}

void MainWindow::on_Btn_sendParcel_clicked()
{
    ui->container->setCurrentIndex(2);  //stackedWidget is renamed as container
}

void MainWindow::on_Btn_deliveryMan_clicked()
{
    ui->container->setCurrentIndex(1);  //stackedWidget is renamed as container
}

void MainWindow::on_Btn_admin_clicked()
{
    ui->container->setCurrentIndex(3);  //stackedWidget is renamed as container
}

