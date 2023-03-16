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

    }
}
