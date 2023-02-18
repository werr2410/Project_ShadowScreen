#ifndef BANKCARD_H
#define BANKCARD_H

#pragma once
#include <QDate>
#include <QString>

namespace ShadowScreen {

    namespace Data {

        class BankCard {
        private:
            QString title;
            QString number;
            QDate expirationDate;

        public:
            BankCard(QString title, QString number, QDate expirationDate);
            BankCard(QString number, QDate expirationDate);
            BankCard();

            void setTitle(QString title);
            void setNumber(QString number);
            void setExpirationDate(QDate expirationDate);

            QString getTitle() const;
            QString getNumber() const;
            QDate getExpirationDate() const;

            void getFullBankCard(QString& title, QString& number, QDate& expirationDate) const;
            void getFullBankCard(QString& number, QDate& expirationDate) const;
            QString getFullBankCard() const;

            bool isExpiration() const;
        };
    }
}

#endif // BANKCARD_H
