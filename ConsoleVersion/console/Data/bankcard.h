#ifndef BANKCARD_H
#define BANKCARD_H

#include <QString>
#include<QDate>
namespace ShadowScreen {

    namespace Data {

        class Bankcard
        {
        //fields
            QString title;
            QString number;
            QDate expirationDate;
        public:
        //construct
            Bankcard(QString title, QString number, QDate expirationDate );
            Bankcard( QString number, QDate expirationDate);
            Bankcard();

        //methods
            void setTitle(QString title);
            void setNumber(QString number);
            void setExpirationDate(QDate expirationDate);
            QString getTitle() const;
            QString getNumber() const;
            QDate getExpirationDate() const;
            QString toString() const;
            bool isInvalidCard() const;

        //overload methods
            void init(QString title, QString number, QDate expirationDate);
            void init(QString number, QDate expirationDate);

        //overload operotors
            Bankcard &operator =(const Bankcard& obj);
            bool operator==(const Bankcard &rhs) const;
            bool operator!=(const Bankcard &rhs) const;
        /* operator ==
           operator !=
        */
        };
    }
}
#endif // BANKCARD_H
