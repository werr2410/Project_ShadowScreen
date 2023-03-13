#include "delivery.h"

namespace ShadowScreen {

    namespace Data {

        Delivery::Delivery(QString title, TypeDelivery type, Adress adress) {// : Dbobj() {
            setTitle(title);
            setTypeDelivery(type);
            setAdress(adress);
        }

        Delivery::Delivery(TypeDelivery type, Adress adress)
            : Delivery("unknown", type, adress) { }

        Delivery::Delivery()
            : Delivery("unknown", Ukrposhta, Adress()) { }

        void Delivery::setTitle(QString title) {
            this->title = title ;
        }

        void Delivery::setTypeDelivery(TypeDelivery type) {
            this->type = type;
        }

        void Delivery::setAdress(Adress adress) {
            this->adress = adress;
        }

        QString Delivery::getTitle() const {
            return title;
        }

        TypeDelivery Delivery::getTypeDelivery() const {
            return type;
        }

        QString Delivery::toString() const {
            QString res = title + "|";

            switch(type) {
            case Meest:      res += "Meest"; break;
            case Ukrposhta:  res += "Ukrposhta"; break;
            case NovaPoshta: res += "NovaPoshta"; break;
            }

            res += "|" + adress.toString();

            return res;
        }

        void Delivery::init(QString title, TypeDelivery type, Adress adress) {
            setTitle(title);
            setTypeDelivery(type);
            setAdress(adress);
        }

        void Delivery::init(TypeDelivery type, Adress adress) {
            setTypeDelivery(type);
            setAdress(adress);
        }

        void Delivery::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            query.prepare("select Title, [Type], AdressId from Delivery where DeliveryId = :id");
            query.bindValue(0, id);

            query.exec(); query.next();

            setTitle(query.value(0).toString());

            // Type
            QChar type = query.value(1).toChar();

            if(type == 'm') setTypeDelivery(Meest);
            else if(type == 'u') setTypeDelivery(Ukrposhta);
            else if(type == 'n') setTypeDelivery(NovaPoshta);

            // adress
            adress.selectDataById(db, query.value(2).toInt());
        }

        void Delivery::insertDataTable(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("exec SmartAddDelivery :Title, :typeDelivery, :AdressId, :DeliveryId");
            query.bindValue(0, title);

            switch(type) {
            case Meest:      query.bindValue(1, QChar('m')); break;
            case Ukrposhta:  query.bindValue(1, QChar('u')); break;
            case NovaPoshta: query.bindValue(1, QChar('n')); break;
            }

            query.bindValue(2, adress.getDataById(db));
            query.bindValue(3, id);

            query.exec();
        }

        int Delivery::getDataById(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("select * from getDeliveryIdTable(:Type, :AdressId, :Title)");

            switch(type) {
            case Meest:      query.bindValue(0, QChar('m')); break;
            case Ukrposhta:  query.bindValue(0, QChar('u')); break;
            case NovaPoshta: query.bindValue(0, QChar('n')); break;
            }

            query.bindValue(1, adress.getDataById(db));
            query.bindValue(2, title);

            query.exec(); query.next();

            return query.value(0).toInt();
        }

        bool Delivery::operator==(const Delivery &rhs) const {
            return toString() == rhs.toString();
        }

        bool Delivery::operator!=(const Delivery &rhs) const {
            return toString() != rhs.toString();
        }
    }
}
