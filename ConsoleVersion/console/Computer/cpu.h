#ifndef CPU_H
#define CPU_H

#include "detail.h"
#include "Database/dbobj.h"
#include "detailinfo.h"

namespace ShadowScreen {

    using Database::Dbobj;

    namespace computer {

        class CPU : public Detail, public DetailInfo, public Dbobj {
        private:
            QString name;

            void setName(QString name);

        public:
            CPU(bool isInit);
            CPU();

            void setName();
            QString getName() const;

            void init() override;
            QString toString() const override;
            QString type() const override;

            void selectDataById(QSqlDatabase& db,int id) override;
            void insertDataTable(QSqlDatabase& db) override;
            int getDataById(QSqlDatabase& db) override;
        };
    }
}

#endif // CPU_H
