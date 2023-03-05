#ifndef BASEBOARD_H
#define BASEBOARD_H

#include <QSqlQuery>

#include "detail.h"
#include "Computer/detailinfo.h"

namespace ShadowScreen {

    namespace Computer {

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

            int pushToDatabase(QSqlDatabase& db) const override;
            void loadFromDatabase(QSqlDatabase& db, int id) override;
        };
    }
}

#endif // BASEBOARD_H
