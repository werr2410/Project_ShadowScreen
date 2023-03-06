#ifndef CHAT_H
#define CHAT_H

#include <QString>
#include <QQueue>
#include <QList>
#include <algorithm>

#include "Chating/message.h"

namespace ShadowScreen {

    namespace Chating {

        class Chat {
            QString username;
            QList<Message> ql_message;

        public:
            Chat(QString username, Message message);
            Chat(QString username);
            Chat();

            void pushMessage(Message message);
            QQueue<Message> findMessage(QString messageData) const;
            void deleteMessage(Message message);
            int getAmountMessage() const;

            QQueue<Message> getMessage() const;

            void setUsername(QString username);
            QString getUsername() const;

            void init(QString username);

            bool operator>(const Chat& right) const;
            bool operator>=(const Chat& right) const;
            bool operator<(const Chat& right) const;
            bool operator<=(const Chat& right) const;

            bool operator==(const Chat& right) const;
            bool operator!=(const Chat& right) const;

            Chat operator+(const Message& message) const;
            Chat &operator+=(const Message& message);
        };
    }
}

#endif // CHAT_H
