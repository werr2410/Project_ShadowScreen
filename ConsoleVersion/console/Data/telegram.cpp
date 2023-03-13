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

        void Telegram::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            query.prepare("select Username, ChatId, Usercode from Telegram where TelegramId = :id");
            query.bindValue(0, id);

            query.exec(); query.next();

            setUsername(query.value(0).toString());
            setChatId(query.value(1).toString());
            setUsercode(query.value(2).toString());
        }

        void Telegram::insertDataTable(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("exec SmartAddTelegram :username, :chatid, :usercode, :id");
            query.bindValue(0, username);
            query.bindValue(1, chatId);
            query.bindValue(2, usercode);
            query.bindValue(3, id);

            query.exec();
        }

        int Telegram::getDataById(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("select TelegramId from Telegram where Username = :username and ChatId = :chatid and Usercode = :usercode");
            query.bindValue(0, username);
            query.bindValue(1, chatId);
            query.bindValue(2, usercode);

            query.exec(); query.next();

            return query.value(0).toInt();
        }

    }
}
