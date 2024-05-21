#pragma once

#include <QList>
#include <QString>
#include <QSqlDatabase>
#include "appuser.h"

class DBManager {
    QString  dbName;
    QSqlDatabase  db;
    QList<QString> dbTables{};
    QString currentTable{};

public:
    DBManager(const QString& dbName);

    QString getDbName();
    void setDbName(const QString& dbName);

    bool connectToDB();
    QList<QString> getDBTables();
    bool createNewTable(const QString& tableName);
    bool chooseTable(const QString& tableName);
    bool tableIsExist(const QString& tableName);
    void closeDB();
    bool addNewUser(const AppUser& user);
    bool signIn(const QString& login, const QString& passwordHash);
};
