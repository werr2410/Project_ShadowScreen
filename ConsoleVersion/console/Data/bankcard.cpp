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


        bool Bankcard::operator==(const Bankcard &rhs) const {
            return toString() == rhs.toString();
        }

        bool Bankcard::operator!=(const Bankcard &rhs) const {
            return toString() != rhs.toString();
        }
    }
}
