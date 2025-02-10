#ifndef CONNECT_DB_H
#define CONNECT_DB_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

class connect_db
{
public:
    connect_db();
    bool open();

};

#endif // CONNECT_DB_H
