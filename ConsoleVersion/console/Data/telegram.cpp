#include "telegram.h"

namespace ShadowScreen {

    namespace Data {

        Telegram::Telegram(QString username, QString chatId, QString usercode)  {
            setUsername(username);
            setChatId(chatId);
            setUsercode(usercode);
        }

        Telegram::Telegram() : Telegram("unknown", "unknown", "unknown") { }

        void Telegram::setUsername(QString username) {
            this->username = username;
        }

        void Telegram::setChatId(QString chatId) {
            this->chatId = chatId;
        }

        void Telegram::setUsercode(QString usercode) {
            this->usercode = usercode;
        }

        QString Telegram::getUsername() const {
            return username;
        }

        QString Telegram::getChatId() const {
            return chatId;
        }

        QString Telegram::getUsercode() const {
            return usercode;
        }

        void Telegram::init(QString username, QString chatId, QString usercode) {
            (*this) = Telegram(username, chatId, usercode);
        }

        QString Telegram::toString() const {
            return username + "|" + chatId + "|" + usercode;
        }

        bool Telegram::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            setId(id);

            query.prepare("select Username, ChatId, Usercode from Telegram where TelegramId = :id");
            query.bindValue(0, id);

            query.exec();

            if(isFind(query) == false) return false;

            query.next();

            setUsername(query.value(0).toString());
            setChatId(query.value(1).toString());
            setUsercode(query.value(2).toString());

            return true;
        }

        void Telegram::insertDataTable(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("exec SmartAddTelegram :username, :chatid, :usercode, :id");
            query.bindValue(0, username);
            query.bindValue(1, chatId);
            query.bindValue(2, usercode);
            query.bindValue(3, getId());

            query.exec();
        }

        int Telegram::getDataById(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("select TelegramId from Telegram where Username = :username and ChatId = :chatid and Usercode = :usercode");
            query.bindValue(0, username);
            query.bindValue(1, chatId);
            query.bindValue(2, usercode);

            query.exec();

            if(isFind(query) == false) return -1;

            query.next();

            setId(query.value(0).toInt());

            return getId();
        }
    }
}
