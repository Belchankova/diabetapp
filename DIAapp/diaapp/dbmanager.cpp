#include "dbmanager.h"


#include <QApplication>
#include <QDir>
#include <QFileInfo>
#include <QSqlError>
#include <QSqlQuery>

#include "appuser.h"


DBManager::DBManager(const QString& dbName) {
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    this->dbName = dbName;
    this->db.setDatabaseName(QApplication::applicationDirPath() + QDir::separator() + this->dbName);

    if (!this->db.open()) {
        qDebug() << "Error: connection with database failed";
        return;
    }
    else {
        qInfo() << "Database: connection ok";
    }

    this->dbTables = this->db.tables();
}

QString DBManager::getDbName() {
    return this->dbName;
}

void DBManager::setDbName(const QString& dbName) {
    this->dbName = dbName;
}

bool DBManager::connectToDB() {
    db.close();
    db.setDatabaseName(this->dbName);
    if (!db.open()) {
        qDebug() << "Error: connection with database failed";
        return false;
    }
    else {
        qInfo() << "Database: connection ok";
    }
    return true;
}

QList<QString> DBManager::getDBTables() {
    return this->dbTables;
}

bool DBManager::createNewTable(const QString& tableName) {
    QSqlQuery query(this->db);

    // todo добавить структуру таблицы для пользователя
    QString request = "CREATE TABLE %1 (id INTEGER PRIMARY KEY, value TEXT);";

    if(query.exec(request.arg(tableName))) {
        qInfo() << "SUCCESS CREATE TABLE" << tableName;
        this->dbTables.push_back(tableName);
        this->currentTable = tableName;
    }
    else {
        qDebug() << "CREATE TABLE" << tableName << "ERROR:" << query.lastError();
        return false;
    }

    db.commit();

    return true;
}

bool DBManager::chooseTable(const QString& tableName) {
    if (this->tableIsExist(tableName)) {
        this->currentTable = tableName;
        return true;
    } else {
        qDebug() << "Table" << tableName << "doesn't exists";
    }

    return false;
}

bool DBManager::tableIsExist(const QString& tableName) {
    QList<QString>::iterator it = std::find(this->dbTables.begin(), this->dbTables.end(), tableName);

    return (it != this->dbTables.end()) ? true: false;
}

void DBManager::closeDB() {
    this->db.close();
}

bool DBManager::addNewUser(const AppUser& user)
{
    QSqlQuery query(this->db);

     // todo добавить в БД поле хэш пароля
    QString request = "INSERT INTO User (Name, LastName, email, BirthdayDate, PasswordHash) VALUES (%1, %2, %3, %4, '%5');";

    auto firstName = user.getFirstName();
    auto lastName = user.getLastName();
    auto email = user.getEmail();
    auto birthdayDate = user.getBirthDate().replace(".", "-");
    auto passwordHash = user.getPasswordHash();

    if(query.exec(request.arg(firstName).arg(lastName).arg(email).arg(birthdayDate).arg(passwordHash)))
    {
        qInfo() << "SUCCESS Add User" << firstName;
    }
    else {
        qDebug() << "Add user " << firstName << "ERROR:" << query.lastError();
        return false;
    }

    db.commit();

    return true;
}
bool DBManager::signIn(const QString& login, const QString& passwordHash)
{
    QSqlQuery query(this->db);

    // todo добавить в БД поле хэш пароля
    QString request = "SELECT Name, PasswordHash FROM User WHERE Name='%1';";

    if(query.exec(request.arg(login)))
    {
        query.next();
        auto hash = query.value(1).toString();
        if (hash == passwordHash)
        {
            qDebug() << "Werification complete for user: " << login;
            return true;
        }
    }
    db.commit();
    qDebug() << "No such user of wrong password. " << login << "ERROR:" << query.lastError();
    return true;
}
