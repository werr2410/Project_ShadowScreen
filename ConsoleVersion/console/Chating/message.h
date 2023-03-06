#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>
#include <QDateTime>

namespace ShadowScreen {

    namespace Chating {

        class Message {
            QString message;
            QDateTime sendTime;
            bool isSender;
            bool isViewed;

        public:
            Message(QString message, QDateTime sendTime, bool isSender, bool isViewed);
            Message(QString message, bool isSender);
            Message();

            void setMessage(QString message);
            void setSendTime(QDateTime sendTime);
            void setIsSender(bool isSender);
            void setIsViewed(bool isViewed);

            QString getMessage() const;
            QDateTime getSendTime() const;
            bool getIsSender() const;
            bool getIsViewed() const;

            void init(QString message, QDateTime sendTime, bool isSender, bool isViewed);
            void init(QString message, bool isSender, bool isViewed);
            void init(QString message, bool isSender);

            QString toString() const;

            bool operator>(const Message& right) const;
            bool operator<(const Message& right) const;
            bool operator>=(const Message& right) const;
            bool operator<=(const Message& right) const;

            bool operator==(const Message& right) const;
            bool operator!=(const Message& right) const;
        };
    }
}

#endif // MESSAGE_H
