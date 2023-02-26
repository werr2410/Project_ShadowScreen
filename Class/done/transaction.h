#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QDateTime>
#include <QString>

namespace ShadowScreen  {

    namespace UserData {

        enum StatusTransaction  {
            Pending,
            finish,
            Cancel
        };

        class Transaction {
        private:
            QDateTime datetime;

            QString Buyer;
            QString Seller;
            QString comment;
            QString idAdvertisement;

            StatusTransaction status;

        public:
            Transaction(QDateTime dt, QString Buy, QString sell, QString comment, QString id, StatusTransaction status);
            Transaction();

            void setDateTime(QDateTime dt);
            void setBuyer(QString Buyer);
            void setSeller(QString Seller);
            void setComment(QString Comment);
            void setIdAdvertisement(QString idAdvertisement);
            void setStatus(StatusTransaction status);

            QDateTime getDateTime() const;
            QString getBuyer() const;
            QString getSeller() const;
            QString getComment() const;
            QString getIdAdvertisement() const;
            StatusTransaction getStatus() const;
        };
    }
}

#endif // TRANSACTION_H
