#ifndef USER_H
#define USER_H
#define nologenuser "NO LOGIN"
#include<QDate>
#include<QList>
#include <qvector.h>
#include<cstdio>
#include <QRandomGenerator>
#include <Computer/computer.h>
#include "Data/telegram.h"
#include "Data/security.h"
#include "Data/adress.h"
#include "Data/delivery.h"
#include "Data/review.h"
#include "Data/bankcard.h"
#include "Chating/chat.h"

namespace ShadowScreen {

    namespace user {
    using namespace computer;
    using namespace Data;
    using namespace Chating;
    const QString Numbers = "1234567890";
    const QString Smallletters ="qwertyuiopasdfghjklzxcvbnm";
    const QString Bigletters = "QWERTYUIOPASDFGHJKLZXCVBNM";
    const QString Magicchas = "!@#$%^&*()_-+=/|\\:;";

        class User {
        //fields
            QString Name;
            QString Surname;
            QString Middlename;
            QDate Birthday;
            QDateTime StartUse;
            QString Hashcode;
            QString Email;
            QString Password;
            QString Username;
            Computer Comp;
            Telegram telegram;
            Adress  adress;
            QVector<Delivery > delivery;
            QVector<Bankcard> bankcard;
            QList<Review> review;
            QVector <Chat> chat;
            static QString generateHashcode();


        public:
            User(QString Password,QString Username);
            User();
        //acsessors
            void setName(QString Name);
            void setSurname(QString Surname);
            void setMiddlename(QString Middlename);
            void setBirthday(QDate Birthday);
            void setStartUse(QDateTime StartUse);
            void setEmail(QString Email);
            void setPassword(QString Password);
            void setUsername(QString Username);
            void setComp(Computer Comp);
            void setTelegram(Telegram telegram);
            void setAdress(Adress adress);

            QString getName()const;
            QString getSurname()const;
            QString getMiddlename()const;
            QDate getBirthday()const;
            QDateTime getStartUse()const;
            QString getEmail()const;
            QString getPassword()const;
            QString getUsername()const;
            Computer getComp()const;
            Telegram getTelegram()const;
            Adress getAdress()const;
            QString getHashcode()const;
            QString toString() const;


            bool isValidBirthday()const;
            bool isValidEmail()const;
            bool isValidPassword()const;
            bool isValidUsername()const;




        };
    }
}

#endif // USER_H
