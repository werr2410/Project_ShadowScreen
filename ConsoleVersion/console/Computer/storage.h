#ifndef STORAGE_H
#define STORAGE_H

#include "detail.h"
#include "detailinfo.h"
#include "Database/dbobj.h"

namespace ShadowScreen {

    namespace computer {

        using Database::Dbobj;

        class Storage : public Detail, public DetailInfo, public Dbobj {
        private:
            QString model;
            QString size;

            void setModel(QString model);
            void setSize(QString size);

        public:
            Storage(bool isInit);
            Storage();

            void setModel();
            void setSize();

            QString getModel() const;
            QString getSize() const;

            void init() override;
            QString toString() const override;
            QString type() const override;

            bool selectDataById(QSqlDatabase& db,int id) override;
            void insertDataTable(QSqlDatabase& db) override;
            int getDataById(QSqlDatabase& db) override;
        };
    }
}

#endif // STORAGE_H
