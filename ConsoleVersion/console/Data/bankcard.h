#ifndef BANKCARD_H
#define BANKCARD_H

#include <QString>
#include<QDate>
namespace ShadowScreen {

    namespace Data {

        class Bankcard {
            QString title;
            QString number;
            QDate expirationDate;

        public:
            Bankcard(QString title, QString number, QDate expirationDate );
            Bankcard( QString number, QDate expirationDate);
            Bankcard();

            void setTitle(QString title);
            void setNumber(QString number);
            void setExpirationDate(QDate expirationDate);

            QString getTitle() const;
            QString getNumber() const;
            QDate getExpirationDate() const;
            QString toString() const;
            bool isInvalidCard() const;

            void init(QString title, QString number, QDate expirationDate);
            void init(QString number, QDate expirationDate);

            Bankcard &operator =(const Bankcard& obj); // зачем если он автоматически создаеться
            bool operator==(const Bankcard &rhs) const;
            bool operator!=(const Bankcard &rhs) const;
        };
    }
}
#endif // BANKCARD_H
