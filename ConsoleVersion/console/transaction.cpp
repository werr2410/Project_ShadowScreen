#include "transaction.h"

namespace ShadowScreen  {

    namespace UserData {

        Transaction::Transaction(QDateTime dt, QString Buy, QString sell, QString comment, QString id, StatusTransaction status)
        {
            setDateTime(dt);
            setBuyer(Buy);
            setSeller(sell);
            setComment(comment);
            setIdAdvertisement(id);
            setStatus(status);
        }

        Transaction::Transaction()
        {
            setDateTime(QDateTime());
            setBuyer("");
            setSeller("");
            setComment("");
            setIdAdvertisement("");
            setStatus(StatusTransaction::Pending);
        }

        void Transaction::setDateTime(QDateTime dt)
        {
            if(QDateTime().currentDateTime().addMonths(1) <= dt)
                this->datetime = dt;
        }

        void Transaction::setBuyer(QString Buyer) {
            this->Buyer = Buyer;

        }

        void Transaction::setSeller(QString Seller)
        {
            this->Seller = Seller;
        }

        void Transaction::setComment(QString Comment)
        {
            this->comment = Comment;
        }

        void Transaction::setIdAdvertisement(QString idAdvertisement)
        {
            this->idAdvertisement = idAdvertisement;
        }

        void Transaction::setStatus(StatusTransaction status)
        {
            this->status = status;
        }

        QDateTime Transaction::getDateTime() const
        {
            return datetime;
        }

        QString Transaction::getBuyer() const
        {
            return Buyer;
        }

        QString Transaction::getSeller() const
        {
            return Seller;
        }

        QString Transaction::getComment() const
        {
            return comment;
        }

        QString Transaction::getIdAdvertisement() const
        {
            return idAdvertisement;
        }

        StatusTransaction Transaction::getStatus() const
        {
            return status;
        }

    }
}
