#ifndef USER_H
#define USER_H

#define NO_LOGIN_USER       "NO LOGIN"

#define LENGHT_HASHCODE     30
#define LENGHT_PASSWORD     16
#define LENGHT_USERNAME     16

#define MAX_COUNT_BANKCARD  3
#define MAX_COUNT_DELIVERY  4



#include <QDir>
#include <QDate>
#include <QList>
#include <QVector>
#include <QRandomGenerator>

#include "Computer/computer.h"
#include "Chating/chat.h"

#include "Database/mssql.h"

#include "Exception/exceptions.h"

#include "Data/telegram.h"
#include "Data/adress.h"
#include "Data/delivery.h"
#include "Data/review.h"
#include "Data/bankcard.h"

namespace ShadowScreen {

    namespace user {

        using namespace computer;
        using namespace Data;
        using namespace Database;

        class User : public Dbobj {

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
            QList  <Review>       review;

            static QString generateHashcode();
            static QString getFullString();

        protected:

            void setHashcode(QString code);
            void setStartUse(QDateTime datetime);

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
            void addHashcode();

            void setComputer(Computer computer);
            void setTelegram(Telegram telegem);
            void setDatabase(MSSQL database);
            void setAdress(Adress adress);

            void setDelivery(QVector<Delivery> delivery);
            void setBankcard(QVector<Bankcard> bankcard);
            void setReviews(QList<Review> reviews);

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

            int getAmountDelivery() const;
            int getAmountBankcard() const;

            void pushBankcard(Bankcard bankcard);
            void pushDelivery(Delivery delivery);

            void eraseBankcard(Bankcard bankcard);
            void eraseDelivery(Delivery delivery);

            static bool isInvalidEmail(QString email);
            static bool isInvalidPassword(QString password);

            static User quickRegistration(const QDir& dir);

            static QString generationUsername();
            static QString generationPassword();

            static bool isUniqueUsername(QString username);
            static bool isUniqueEmail(QString email);
            static bool isUniqueHashcode(QString code);

            bool selectDataById(QSqlDatabase& db,int id) override;
            void insertDataTable(QSqlDatabase& db) override;
            int getDataById(QSqlDatabase& db) override;
        };
    }
}

#endif // USER_H
