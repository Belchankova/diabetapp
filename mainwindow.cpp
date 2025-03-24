#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTabBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget_2->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget_2->setCurrentIndex(0);
    //connect(ui->teoryButton,&QPushButton::clicked,this,&MainWindow::on_pushButton_clicked);

}

 MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_diaryButton_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}


void MainWindow::on_historyButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}


void MainWindow::on_teoryButton_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}


void MainWindow::on_profileButton_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget_2->setCurrentIndex(1);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget_2->setCurrentIndex(2);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->tabWidget_2->setCurrentIndex(3);
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->tabWidget_2->setCurrentIndex(4);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->tabWidget_2->setCurrentIndex(5);
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->tabWidget_2->setCurrentIndex(6);
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_pushButton_11_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_pushButton_14_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}

