#ifndef BASEBOARD_H
#define BASEBOARD_H

#include <QSqlQuery>
#include <QBuffer>

#include "detail.h"
#include "Database/dbobj.h"
#include "Computer/detailinfo.h"

namespace ShadowScreen {

    namespace computer {

        using Database::Dbobj;

        class Baseboard : public Detail, public DetailInfo {
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
        };
    }
}

#endif // BASEBOARD_H
