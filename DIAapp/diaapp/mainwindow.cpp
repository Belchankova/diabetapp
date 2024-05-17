#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTabBar"
#include "QWidget"
#include"stylehelper.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    setinterfaceStyle();
    //ui->tabWidget->setStyleSheet(stylehelper::getStartTabWidgetStyle());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setinterfaceStyle()
{
    this ->setStyleSheet(stylehelper::getMainWindowStyle());

}
