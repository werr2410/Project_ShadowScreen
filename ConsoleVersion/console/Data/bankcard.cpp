#include "bankcard.h"

namespace ShadowScreen {

    namespace Data {

        Bankcard::Bankcard(QString title, QString number, QDate expirationDate) : Dbobj() {
            setTitle(title);
            setNumber(number);
            setExpirationDate(expirationDate);
        }

        Bankcard::Bankcard(QString number, QDate expirationDate)
            : Bankcard("unknown", number, expirationDate) { }

        Bankcard::Bankcard()
            : Bankcard("unknown", "unknown", QDate().currentDate()) { }

        void Bankcard::setTitle(QString title) {
            this->title = title;
        }

        void Bankcard::setNumber(QString number) {
            this->number = number; // !!!!!!!!!!!!!!!

            // exception
        }

        void Bankcard::setExpirationDate(QDate expirationDate) {
            this->expirationDate = expirationDate;
        }

        QString Bankcard::getTitle() const
        {
            return title;
        }

        QString Bankcard::getNumber() const
        {
            return number;
        }

        QDate Bankcard::getExpirationDate() const
        {
            return expirationDate;
        }

        QString Bankcard::toString() const
        {
            if(title.isEmpty() == false)
                return title + "|" + number + "|" + expirationDate.toString("yyyy-MM-dd");

            return number + "|" + expirationDate.toString("yyyy-MM-dd");
        }

        bool Bankcard::isInvalidCard() const {
            if(expirationDate < QDate().currentDate())
                return false;

            return true;
        }

        void Bankcard::init(QString title, QString number, QDate expirationDate) {
            (*this) = Bankcard(title, number, expirationDate);
        }

        void Bankcard::init(QString number, QDate expirationDate) {
            (*this) = Bankcard(number, expirationDate);
        }

        void Bankcard::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            query.prepare("select Title, Number, ExpirationDate from Bankcard where BankcardId = :id");
            query.bindValue(0, id);

            query.exec();
            query.next();

            setTitle(query.value(0).toString());
            setNumber(query.value(1).toString());
            setExpirationDate(query.value(2).toDate());
        }

        void Bankcard::insertDataTable(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("exec SmartAddBankcard :Title, :Number, :Date, :id");
            query.bindValue(0, title);
            query.bindValue(1, number);
            query.bindValue(2, expirationDate.toString("yyyy-MM-dd"));
            query.bindValue(3, id);

            query.exec();
        }

        int Bankcard::getDataById(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("select * from getBankcardIdTable(:Number, :Date, :Title)");
            query.bindValue(0, number);
            query.bindValue(1, expirationDate.toString("yyyy-MM-dd"));
            query.bindValue(2, title);

            query.exec(); query.next();

            return query.value(0).toInt();
        }


        bool Bankcard::operator==(const Bankcard &rhs) const {
            return toString() == rhs.toString();
        }

        bool Bankcard::operator!=(const Bankcard &rhs) const {
            return toString() != rhs.toString();
        }
    }
}
