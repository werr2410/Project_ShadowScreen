#ifndef GPU_H
#define GPU_H

#include <QBuffer>

#include "detail.h"
#include "detailinfo.h"
#include "Database/dbobj.h"

namespace ShadowScreen {

    namespace computer {

        using Database::Dbobj;

        class GPU : public Detail, public DetailInfo, public Dbobj {
        public:
            GPU(bool isInit);
            GPU();

            void Manufacturer();

            void init() override;
            QString toString() const override;
            QString type() const override;

            void selectDataById(QSqlDatabase& db,int id) override;
            void insertDataTable(QSqlDatabase& db) const override;
            int getDataById(QSqlDatabase& db) const override;
        };
    }
}

#endif // GPU_H
