#pragma once

#include <QMainWindow>

#include "dbmanager.h"

#define defaultDbName "DB for app.db"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Ui::MainWindow *ui;
    DBManager dbManager{defaultDbName};

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    void setinterfaceStyle();
    void setConnections();

private slots:
    void onDiaryButtonsClicked();
    void onHistoryButtonClicked();
    void onSchoolButtonClicked();
    void onXeTableButtonClicked();
    void onProfileButtonClicked();

    // страница авторизации
    void onSignUpButtonClicked();
    void onLoginButtonClicked();

    // страница создания пользователя
    void onCreateUserButtonClicked();
    void onCancelCreateUserButtonClicked();


    void on_ButtonSugar_Sugar_clicked();
   void on_ButtonHE_Sugar_clicked();
    void on_ButtonBolus_Sugar_clicked();
    void on_ButtonBazal_Sugar_clicked();
    void on_ButtonNotes_Sugar_clicked();
    void on_ButtonSugar_HE_clicked();
    void on_ButtonBolus_HE_clicked();
    void on_ButtonBolus_HE_2_clicked();
    void on_ButtonBazal_HE_2_clicked();
    void on_ButtonNotes_HE_clicked();
    void on_ButtonSugar_Bolus_clicked();
    void on_ButtonHE_Bolus_clicked();
    void on_ButtonBazal_Bolus_clicked();
    void on_ButtonNotes_Bolus_clicked();
    void on_ButtonSugar_Bazal_clicked();
    void on_ButtonHE_Bazal_clicked();
    void on_ButtonBolus_Bazal_clicked();
    void on_ButtonNotes_Bazal_clicked();
    void on_ButtonSugar_Notes_clicked();
    void on_ButtonHE_Notes_clicked();
    void on_ButtonBolus_Notes_clicked();
    void on_ButtonBazal_Notes_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
};
