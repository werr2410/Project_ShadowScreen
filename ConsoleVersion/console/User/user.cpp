#include "user.h"

namespace ShadowScreen {

    namespace user {

        void User::setHashcode(QString code)
        {

        }

        void User::setStartUse(QDateTime)
        {

        }

        User::User(QString username, QString password)
        {

        }

        User::User()
        {

        }

        void User::setName(QString name)
        {

        }

        void User::setSurname(QString surname)
        {

        }

        void User::setMiddlename(QString middlename)
        {

        }

        void User::setEmail(QString email)
        {

        }

        void User::setPassword(QString password)
        {

        }

        void User::setUsername(QString username)
        {

        }

        void User::setBirthDay(QDate birthday)
        {

        }

        void User::setComputer(Computer computer)
        {

        }

        void User::setTelegram(Telegram telegem)
        {

        }

        void User::setDatabase(MSSQL database)
        {

        }

        void User::setAdress(QString adress)
        {

        }

        void User::setDelivery(QVector<Delivery> delivery)
        {

        }

        void User::setBankcard(QVector<Bankcard> bankcard)
        {

        }

        void User::setReviews(QList<Review> reviews)
        {

        }

        void User::setChat(QVector<Chat> chat)
        {

        }

        QString User::getName() const
        {

        }

        QString User::getSurname() const
        {

        }

        QString User::getMiddlename() const
        {

        }

        QString User::getEmail() const
        {

        }

        QString User::getPassword() const
        {

        }

        QString User::getUsername() const
        {

        }

        QString User::getHashcode() const
        {

        }

        Telegram User::getTelegram() const
        {

        }

        QDate User::getBirthday() const
        {

        }

        QDateTime User::getStartUse() const
        {

        }

        Computer User::getComputer() const
        {

        }

        QVector<Delivery> User::getDelivery() const
        {

        }

        QVector<Bankcard> User::getBankcard() const
        {

        }

        QList<Review> User::getReview() const
        {

        }

        QVector<Chat> User::getChat() const
        {

        }

        int User::getAmountDelivery() const
        {

        }

        int User::getAmountBankcard() const
        {

        }

        void User::pushBankcard(Bankcard bankcard)
        {

        }

        void User::pushDelivery(Delivery delivery)
        {

        }

        void User::pushChat(Chat chat)
        {

        }

        void User::eraseBankcard(Bankcard bankcard)
        {

        }

        void User::eraseDelivery(Delivery delivery)
        {

        }

        bool User::isInvalidEmail(QString email)
        {

        }

        bool User::isInvalidPassword(QString password)
        {

        }

        User User::quickRegistration()
        {

        }

        QString User::generationUsername()
        {

        }

        QString User::generationPassword()
        {

        }

        bool User::isUniqueUsername()
        {

        }

        bool User::isUniqueEmail()
        {

        }



    }
}
