#include "bankcard.h"

namespace ShadowScreen {

namespace Data {

        BankCard::BankCard(QString title, QString number, QDate expirationDate) {
            setTitle(title);
            setNumber(number);
            setExpirationDate(expirationDate);
        }

        BankCard::BankCard(QString number, QDate expirationDate)
            : BankCard(NULL, number, expirationDate) { }

        BankCard::BankCard()
            : BankCard(NULL, NULL, QDate().currentDate()) {  }

        void BankCard::setTitle(QString title) {
            if(title.isEmpty() == false || title.isNull() == true) {
                this->title = title;
            } else {
                // exepction
            }
        }

        void BankCard::setNumber(QString number){
            if(number.isEmpty() == false || number.isNull() == true ||  number.size() == 16) {
                this->number = number;
            } else {
                // exepction
            }
        }

        void BankCard::setExpirationDate(QDate expirationDate) {
            this->expirationDate = expirationDate;
        }

        QString BankCard::getTitle() const
        {
            return title;
        }

        QString BankCard::getNumber() const
        {
            return number;
        }

        QDate BankCard::getExpirationDate() const
        {
            return expirationDate;
        }

        void BankCard::getFullBankCard(QString &title, QString &number, QDate &expirationDate) const
        {
            title = this->title;
            number = this->number;
            expirationDate = this->expirationDate;
        }

        void BankCard::getFullBankCard(QString &number, QDate &expirationDate) const
        {
            number = this->number;
            expirationDate = this->expirationDate;
        }

        QString BankCard::getFullBankCard() const
        {
            QString res = title + ": ";

            res += number + " ";

//            int *year = new int,
//                *month = new int,
//                *day = new int;

//            this->expirationDate.getDate(year, month, day);



            res += expirationDate.toString("yy.MM");

//            delete year; delete month; delete day;

            return res;
        }

        bool BankCard::isExpiration() const
        {
            return this->expirationDate > QDate().currentDate();
        }

    }
}
