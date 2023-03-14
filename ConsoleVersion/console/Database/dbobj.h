#ifndef DBOBJ_H
#define DBOBJ_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include "Exception/exceptions.h"

namespace ShadowScreen {

    namespace Database {

        class Dbobj {
        private:
            int id;

        protected:
            bool isFind(QSqlQuery& query) const;

        public:
            Dbobj(int id);
            Dbobj();

            void setId(int id);
            int getId() const;

            virtual bool selectDataById(QSqlDatabase& db,int id) = 0;
            virtual void insertDataTable(QSqlDatabase& db) = 0;
            virtual int getDataById(QSqlDatabase& db) = 0;

            static void dropDataById(QSqlDatabase& db, int id);
        };
    }
}

#endif // DBOBJ_H
