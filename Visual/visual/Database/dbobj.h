#ifndef DBOBJ_H
#define DBOBJ_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include "Exception/exceptions.h"

namespace ShadowScreen {

    namespace Database {

        class Dbobj {
        protected:
            int id;
            QString table;

        public:
            Dbobj(int id, QString table);
            Dbobj(QString table);
            Dbobj();

            void setTable(QString table);
            void setId(int id);

            QString getTable() const;
            int getId() const;

            virtual void selectDataById(QSqlDatabase& db,int id) = 0;
            virtual void insertDataTable(QSqlDatabase& db) = 0;
            virtual void dropTable(QSqlDatabase& db) = 0;

            static void insertDataField(QSqlDatabase& db, QString field);
        };
    }
}

#endif // DBOBJ_H
