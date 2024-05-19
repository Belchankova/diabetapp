#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabBar>
#include <QWidget>
#include"stylehelper.h"
#include<QFontDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
     ui->tabWidget_2->tabBar()->hide();
    setinterfaceStyle();
     int id = QFontDatabase::addApplicationFont(":/new/prefix1/resourses/fonts/Roboto-Medium.ttf");
    QString family = QFontDatabase:: applicationFontFamilies(id).at(0);
     qDebug() << family;
    //ui->tabWidget_2->setStyleSheet("background-color:none;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setinterfaceStyle()
{
    this ->setStyleSheet(stylehelper::getMainWindowStyle());
    ui->tabWidget_2->setStyleSheet("background-color: rgb(43, 49, 75);border-color:rgb(43, 49, 75);border-bottom-color:rgb(43, 49, 75);");

}
