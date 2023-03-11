#include "message.h"

namespace ShadowScreen {

    namespace Chating {

        Message::Message(QString message, QDateTime sendTime, bool isSender, bool isViewed) {
            setMessage(message);
            setSendTime(sendTime);
            setIsSender(isSender);
            setIsViewed(isViewed);
        }

        Message::Message(QString message, bool isSender)
            : Message(message, QDateTime().currentDateTime(), isSender, false) { }

        Message::Message()
            : Message("no message", QDateTime().currentDateTime(), false, false) { }

        void Message::setMessage(QString message) {
            if(message.isEmpty() == false)
                this->message = message;
        }

        void Message::setSendTime(QDateTime sendTime) {
            this->sendTime = sendTime;
        }

        void Message::setIsSender(bool isSender) {
            this->isSender = isSender;
        }

        void Message::setIsViewed(bool isViewed) {
            this->isViewed = isViewed;
        }

        QString Message::getMessage() const {
            return message;
        }

        QDateTime Message::getSendTime() const {
            return sendTime;
        }

        bool Message::getIsSender() const {
            return isSender;
        }

        bool Message::getIsViewed() const {
            return isViewed;
        }

        void Message::init(QString message, QDateTime sendTime, bool isSender, bool isViewed) {
            (*this) = Message(message, sendTime, isSender, isViewed);
        }

        void Message::init(QString message, bool isSender, bool isViewed) {
            (*this) = Message(message, QDateTime().currentDateTime(), isSender, isViewed);
        }

        void Message::init(QString message, bool isSender) {
            (*this) = Message(message, QDateTime().currentDateTime(), isSender, false);
        }

        QString Message::toString() const {
            return message + '|' + sendTime.toString("hh:mm:ss.zzz") + '|' + QChar(isSender) + '|' + QChar(isViewed);
        }

        bool Message::operator>(const Message &right) const {
            return this->sendTime > right.sendTime;
        }

        bool Message::operator<(const Message &right) const {
            return this->sendTime < right.sendTime;
        }

        bool Message::operator>=(const Message &right) const {
            return this->sendTime >= right.sendTime;
        }

        bool Message::operator<=(const Message &right) const {
            return this->sendTime <= right.sendTime;
        }

        bool Message::operator==(const Message &right) const {
            return (this->message == right.message) &&
                   (this->sendTime == right.sendTime) &&
                   (this->isSender == right.isSender) &&
                   (this->isViewed == right.isViewed);
        }

        bool Message::operator!=(const Message &right) const {
            return !(*this == right);
        }

    }
}
