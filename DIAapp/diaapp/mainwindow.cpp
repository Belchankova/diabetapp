#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabBar>
#include <QWidget>
#include "stylehelper.h"
#include<QFontDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->diaryTabWidget->tabBar()->hide();
    ui->sectionsTabWidget->tabBar()->hide();
    setinterfaceStyle();
     int id = QFontDatabase::addApplicationFont(":/new/prefix1/resourses/fonts/Roboto-Medium.ttf");
    QString family = QFontDatabase:: applicationFontFamilies(id).at(0);
     qDebug() << family;
    //ui->tabWidget_2->setStyleSheet("background-color:none;");

     setConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setinterfaceStyle()
{
    this ->setStyleSheet(stylehelper::getMainWindowStyle());
    ui->sectionsTabWidget->setStyleSheet("background-color: rgb(43, 49, 75);border-color:rgb(43, 49, 75);border-bottom-color:rgb(43, 49, 75);");

}

void MainWindow::setConnections()
{
    // connect slots and signals for buttons of tab
    connect(ui->diaryButton, &QPushButton::clicked, this, &MainWindow::onDiaryButtonsClicked);
    connect(ui->historyButton, &QPushButton::clicked, this, &MainWindow::onHistoryButtonClicked);
    connect(ui->schoolButton, &QPushButton::clicked, this, &MainWindow::onSchoolButtonClicked);
    connect(ui->xeTableButton, &QPushButton::clicked, this, &MainWindow::onXeTableButtonClicked);
    connect(ui->profileButton, &QPushButton::clicked, this, &MainWindow::onProfileButtonClicked);

}

void MainWindow::onDiaryButtonsClicked()
{
    ui->sectionsTabWidget->setCurrentIndex(0);
}

void MainWindow::onHistoryButtonClicked()
{
    ui->sectionsTabWidget->setCurrentIndex(1);
}

void MainWindow::onSchoolButtonClicked()
{
    ui->sectionsTabWidget->setCurrentIndex(2);
}

void MainWindow::onXeTableButtonClicked()
{
    ui->sectionsTabWidget->setCurrentIndex(3);
}

void MainWindow::onProfileButtonClicked()
{
    ui->sectionsTabWidget->setCurrentIndex(4);
}

void MainWindow::on_ButtonSugar_Sugar_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(0);
}


void MainWindow::on_ButtonHE_Sugar_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(1);
}


void MainWindow::on_ButtonBolus_Sugar_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(2);
}


void MainWindow::on_ButtonBazal_Sugar_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(3);
}


void MainWindow::on_ButtonNotes_Sugar_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(4);
}


void MainWindow::on_ButtonSugar_HE_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(0);
}


void MainWindow::on_ButtonBolus_HE_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(2);
}


void MainWindow::on_ButtonBazal_HE_2_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(3);
}


void MainWindow::on_ButtonNotes_HE_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(4);
}


void MainWindow::on_ButtonSugar_Bolus_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(0);
}


void MainWindow::on_ButtonHE_Bolus_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(1);
}


void MainWindow::on_ButtonBazal_Bolus_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(3);
}


void MainWindow::on_ButtonNotes_Bolus_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(4);
}


void MainWindow::on_ButtonSugar_Bazal_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(0);
}


void MainWindow::on_ButtonHE_Bazal_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(1);
}


void MainWindow::on_ButtonBolus_Bazal_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(2);
}


void MainWindow::on_ButtonNotes_Bazal_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(4);
}


void MainWindow::on_ButtonSugar_Notes_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(0);
}


void MainWindow::on_ButtonHE_Notes_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(1);
}


void MainWindow::on_ButtonBolus_Notes_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(2);
}


void MainWindow::on_ButtonBazal_Notes_clicked()
{
    ui->diaryTabWidget->setCurrentIndex(3);
}

