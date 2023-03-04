#ifndef TELEGRAM_H
#define TELEGRAM_H

#include <QString>

namespace ShadowScreen {

    namespace Data {

        class Telegram {
            QString username;
            QString chatId;
            QString usercode;

        public:
            Telegram(QString username, QString chatId, QString usercode);
            Telegram();

            void setUsername(QString username);
            void setChatId(QString chatId);
            void setUsercode(QString usercode);

            QString getUsername() const;
            QString getChatId() const;
            QString getUsercode() const;

            void init(QString username, QString chatId, QString usercode);
            QString toString() const;
        };
    }
}
#endif // TELEGRAM_H
