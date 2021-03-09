#include "connection.h"
#include "QSqlDatabase"

Connection::Connection()
{

}

bool Connection::createConnection(){
    bool test=false;
    QSqlDatabase db= QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet_2A25");
    db.setUserName("dorra");
    db.setPassword("esprit21");

    if(db.open())
        test=true;
    return test;
}
