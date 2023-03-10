#ifndef USER_H
#define USER_H

#define NO_LOGIN_USER       "NO LOGIN"

#define LENGHT_HASHCODE     30

#define MAX_COUNT_BANKCARD  3
#define MAX_COUNT_DELIVERY  4


#include <QDate>
#include <QList>
#include <qvector.h>
#include <cstdio>
#include <QRandomGenerator>

#include "Computer/computer.h"

#include "Data/telegram.h"
#include "Data/adress.h"
#include "Data/delivery.h"
#include "Data/review.h"
#include "Data/bankcard.h"

#include "Chating/chat.h"

#include "Database/mssql.h"



namespace ShadowScreen {

    namespace user {

        using namespace computer;
        using namespace Data;
        using namespace Chating;
        using namespace Database;

        class User {

            // about
            QString             name;
            QString             surname;
            QString             middlename;
            QString             hashcode;
            QString             email;
            QString             password;
            QString             username;

            //date
            QDate               birthday;
            QDateTime           startUse;

            // namespace Computer
            Computer            computer;

            Telegram            telegram;

            // Database
            MSSQL               database;

            // namespace Data
            Adress              adress;
            QVector<Delivery>   delivery;
            QVector<Bankcard>   bankcard;
            QList<Review>       review;

            QVector<Chat>       chat;

            static QString generateHashcode();
            static QString getFullString();

        protected:

            void setHashcode(QString code);
            void setStartUse(QDateTime);

        public:
            User(QString username, QString password);
            User();

            void setName(QString name);
            void setSurname(QString surname);
            void setMiddlename(QString middlename);
            void setEmail(QString email);
            void setPassword(QString password);
            void setUsername(QString username);

            void setBirthDay(QDate birthday);

            void setComputer(Computer computer);
            void setTelegram(Telegram telegem);
            void setDatabase(MSSQL database);
            void setAdress(QString adress);

            void setDelivery(QVector<Delivery> delivery);
            void setBankcard(QVector<Bankcard> bankcard);
            void setReviews(QList<Review> reviews);
            void setChat(QVector<Chat> chat);

            QString getName() const;
            QString getSurname() const;
            QString getMiddlename() const;
            QString getEmail() const;
            QString getPassword() const;
            QString getUsername() const;

            QString getHashcode() const;
            Telegram getTelegram() const;

            QDate getBirthday() const;
            QDateTime getStartUse() const;

            Computer getComputer() const;
            QVector<Delivery> getDelivery() const;
            QVector<Bankcard> getBankcard() const;
            QList<Review> getReview() const;

            QVector<Chat> getChat() const;

            int getAmountDelivery() const;
            int getAmountBankcard() const;

            void pushBankcard(Bankcard bankcard);
            void pushDelivery(Delivery delivery);
            void pushChat(Chat chat);

            void eraseBankcard(Bankcard bankcard);
            void eraseDelivery(Delivery delivery);

            static bool isInvalidEmail(QString email);
            static bool isInvalidPassword(QString password);

            static User quickRegistration();

            static QString generationUsername();
            static QString generationPassword();

            static bool isUniqueUsername();
            static bool isUniqueEmail();
        };
    }
}

#endif // USER_H
