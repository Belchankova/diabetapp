#include "appuser.h"

#include <QCryptographicHash>


AppUser::AppUser(const QString& firstName, const QString& lastName, const QString& email, const QString& birthdayDate, const QString& password)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->birthdayDate = birthdayDate;
    this->passwordHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
}

void AppUser::setFirstName(const QString& firstName)
{
    this->firstName = firstName;
}
void AppUser::setLastName(const QString& lastName)
{
    this->lastName = lastName;
}
void AppUser::setEmail(const QString& email)
{
    this->email = email;
}
void AppUser::setBirthDate(const QString& birthdayDate)
{
    this->birthdayDate = birthdayDate;
}
void AppUser::setPasswordHash(const QString& password)
{
    this->passwordHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
}

QString AppUser::getFirstName() const
{
    return this->firstName;
}

QString AppUser::getLastName() const
{
    return this->lastName;
}

QString AppUser::getEmail()  const
{
    return this->email;
}

QString AppUser::getBirthDate()  const
{
    return this->birthdayDate;
}

QString AppUser::getPasswordHash()  const
{
    return this->passwordHash;
}
