#include "db_manager.h"

DB_Manager::DB_Manager()
{





    if (m_db.open())
    {
       qDebug() << "Database: connection ok";
//       QSqlQuery query;
//       QString q = "CREATE TABLE Persona (id INTEGER, dni INTEGER, nom VARCHAR(40), PRIMARY KEY(id));";
//       query.exec(q);
//       if (query.lastError().isValid())
//           qDebug() << query.lastError();
     }
    else
    {

       qDebug() << "Error: connection with database fail";
       qDebug() << m_db.lastError();
    }


}
