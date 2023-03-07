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
            Dbobj(int id,QString table);
            Dbobj(QString table);
            Dbobj();
            void setTable(QString table);
            void setId(int id);
            int getId() const;
            QString getTable()const;

            virtual void insertToDatabase(QSqlDatabase& db) const = 0;
            virtual void selectFromDatabase(QSqlDatabase& db, int id) = 0;
            virtual void alterToDatabase(QSqlDatabase& db, int id) const = 0;
            virtual void deleteFromDatabase(QSqlDatabase& db, int id) const = 0;
            virtual int  getIdFromDatabase(QSqlDatabase& db) const = 0;

        };
    }
}

#endif // DBOBJ_H
