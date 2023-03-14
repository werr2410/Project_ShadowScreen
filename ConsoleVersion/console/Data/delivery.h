#ifndef DELIVERY_H
#define DELIVERY_H

#include <QString>
#include "adress.h"
#include "Database/dbobj.h"

namespace ShadowScreen {

    namespace Data {

        using Database::Dbobj;

        enum TypeDelivery{
            Ukrposhta,
            NovaPoshta,
            Meest
        };


        class Delivery : public Dbobj {

            QString title;
            TypeDelivery type;
            Adress adress;

        public:
            Delivery(QString title, TypeDelivery type, Adress adress);
            Delivery(TypeDelivery type, Adress adress);
            Delivery();

            void setTitle(QString title);
            void setTypeDelivery(TypeDelivery type);
            void setAdress(Adress adress);

            QString getTitle() const;
            TypeDelivery getTypeDelivery() const;
            QString toString() const;

            void init(QString title, TypeDelivery type, Adress adress);
            void init(TypeDelivery type, Adress adress);

            bool selectDataById(QSqlDatabase& db,int id) override;
            void insertDataTable(QSqlDatabase& db) override;
            int  getDataById(QSqlDatabase& db) override;

            bool operator==(const Delivery &rhs) const;
            bool operator!=(const Delivery &rhs) const;
        };
    }
}
#endif // DELIVERY_H
