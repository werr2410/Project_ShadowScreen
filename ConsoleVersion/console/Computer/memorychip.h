#ifndef MEMORYCHIP_H
#define MEMORYCHIP_H

#include "detail.h"
#include "detailinfo.h"
#include "Database/dbobj.h"

namespace ShadowScreen {

    namespace computer {

        using Database::Dbobj;

        class Memorychip : public Detail, public DetailInfo, public Dbobj {
        private:
            QString Capacity;

            void setCapacity(QString Capacity);

        public:
            Memorychip(bool isInit);
            Memorychip();

            void setCapacity();
            QString getCapacity() const;

            void init() override;
            QString toString() const override;
            QString type() const override;

            bool selectDataById(QSqlDatabase& db,int id) override;
            void insertDataTable(QSqlDatabase& db) override;
            int  getDataById(QSqlDatabase& db) override;
        };
    }
}
#endif // MEMORYCHIP_H
