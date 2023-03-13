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

        public:
            Dbobj(int id);
            Dbobj();

            void setId(int id);
            int getId() const;

            virtual void selectDataById(QSqlDatabase& db,int id) = 0;
            virtual void insertDataTable(QSqlDatabase& db) const = 0;
            virtual void dropDataById(QSqlDatabase& db, int id) const = 0;
            virtual int getDataById(QSqlDatabase& db) const = 0;
        };
    }
}

#endif // DBOBJ_H
