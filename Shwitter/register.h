#ifndef REGISTER_H
#define REGISTER_H

#include <QString>
#include <QtSql>

bool is_valid_username(const QString& username);

bool is_valid_password(const QString& password);

bool is_registrable_username(const QString& username);

#endif // REGISTER_H