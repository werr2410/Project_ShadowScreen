#include "chat.h"

namespace ShadowScreen {

    namespace Chating {

        Chat::Chat(QString username, Message message) {
            setUsername(username);
            pushMessage(message);
        }

        Chat::Chat(QString username)
            : Chat(username, Message()) { }

        Chat::Chat()
            : Chat("unknown", Message()) { }

        void Chat::pushMessage(Message message) {
            ql_message.push_front(message);
        }

        QQueue<Message> Chat::findMessage(QString messageData) const {
            QQueue<Message> qq_message;

            for(Message x : ql_message) {
                if(x.getMessage() == messageData)
                    qq_message.enqueue(x);
            }

            return qq_message;
        }

        void Chat::deleteMessage(Message message) {
            QList<Message>::Iterator it = std::find(ql_message.begin(),  ql_message.end(), message);

            if(it != ql_message.end())
                ql_message.erase(it);
        }

        QQueue<Message> Chat::getMessage() const {
            QQueue<Message> qq_message;

            for(Message x : ql_message)
                qq_message.enqueue(x);

            return qq_message;
        }

        void Chat::setUsername(QString username) {
            if(username.isEmpty() == false)
                this->username = username;
        }

        QString Chat::getUsername() const {
            return username;
        }

        void Chat::init(QString username) {
            setUsername(username);
        }

        bool Chat::operator>(const Chat &right) const {
            return this->ql_message.length() > right.ql_message.length();
        }

        bool Chat::operator>=(const Chat &right) const {
            return this->ql_message.length() >= right.ql_message.length();
        }

        bool Chat::operator<(const Chat &right) const {
            return this->ql_message.length() < right.ql_message.length();
        }

        bool Chat::operator<=(const Chat &right) const {
            return this->ql_message.length() <= right.ql_message.length();
        }

        bool Chat::operator==(const Chat &right) const {
            return ql_message == right.ql_message && this->username == right.username;
        }

        bool Chat::operator!=(const Chat &right) const {
            return !(*this == right);
        }

        Chat Chat::operator+(const Message &message) const {
            Chat chat = *this;

            chat.pushMessage(message);

            return chat;
        }

        Chat &Chat::operator+=(const Message &message) {
            this->pushMessage(message);

            return *this;
        }

        Message Chat::operator[](int i) const {
            if(i < 0 || i > ql_message.length())
                throw new Exception::rangeNotFondException();

            return ql_message[i];
        }
    }
}
