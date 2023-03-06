#ifndef BASEBOARD_H
#define BASEBOARD_H

#include <QSqlQuery>
#include <QBuffer>

#include "detail.h"
#include "Database/dbobj.h"
#include "Computer/detailinfo.h"

namespace ShadowScreen {

    namespace Computer {

        using Database::Dbobj;

        class Baseboard : public Detail, public DetailInfo, public Dbobj {
        private:
            QString product;

            void setProduct(QString product);

        public:
            Baseboard(bool isInit);
            Baseboard();

            void setProduct();
            QString getProduct() const;

            void init() override;
            QString toString() const override;
            QString type() const override;

            void insertToDatabase(QSqlDatabase& db) const override;
            void selectFromDatabase(QSqlDatabase& db, int id) override;
            void alterToDatabase(QSqlDatabase& db, int id) const override;
            void deleteFromDatabase(QSqlDatabase& db, int id) const override;
            int  getIdFromDatabase(QSqlDatabase& db) const override;
        };
    }
}

#endif // BASEBOARD_H
