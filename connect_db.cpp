#include "connect_db.h"

connect_db::connect_db()
{

}

bool connect_db::open()
{
    bool test=true;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet_c++");
    db.setUserName("Gharbi");
    db.setPassword("yahia");

    if (db.open())
        test=true;





    return  test;
}
