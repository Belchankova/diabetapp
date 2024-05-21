#pragma once

#include <QString>


class AppUser
{
private:
    QString firstName;
    QString lastName;
    QString email;
    QString birthdayDate;
    QString passwordHash;

public:
    AppUser(const QString& firstName, const QString& lastName, const QString& email, const QString& birthdayDate, const QString& passwordHash);

    void setFirstName(const QString& firstName);
    void setLastName(const QString& lastName);
    void setEmail(const QString& email);
    void setBirthDate(const QString& birthdayDate);
    void setPasswordHash(const QString& passwordHash);

    QString getFirstName() const;
    QString getLastName() const;
    QString getEmail() const;
    QString getBirthDate() const;
    QString getPasswordHash() const;
};
