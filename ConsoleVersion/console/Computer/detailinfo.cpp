#include "detailinfo.h"


namespace ShadowScreen {

    namespace computer {

        void DetailInfo::initFieldDb(QSqlQuery &query, int nextvalue){
            setDescription(query.value(nextvalue).toString());
            setIsSale(query.value(nextvalue + 1).toBool());

            QByteArray byteArray = query.value(nextvalue + 2).toByteArray();
            QPixmap img; img.loadFromData(byteArray, "PNG");

            setImage(img);

            setStars(query.value(nextvalue + 3).toInt());
            setStatus(query.value(nextvalue + 4).toString());
        }

        void DetailInfo::bindValueDb(QSqlQuery &query, int nextvalue) const{
            QByteArray byteArray;
            QBuffer buffer(&byteArray);
            buffer.open(QIODevice::WriteOnly);
            image.save(&buffer, "PNG"); // сохранить в формате PNG

            query.bindValue(nextvalue, getDescription());
            query.bindValue(nextvalue + 1, getIsSale());

            query.bindValue(nextvalue + 2, byteArray);

            query.bindValue(nextvalue + 3, getStars());
            query.bindValue(nextvalue + 4, getStatus());
        }

        DetailInfo::DetailInfo(QPixmap image, QString description, QString status, bool isSale, int stars) {
            setImage(image);
            setDescription(description);
            setStatus(status);
            setIsSale(isSale);
            setStars(stars);
        }

        DetailInfo::DetailInfo() : DetailInfo(QPixmap(), "unknown", "unknown", false, 0) { }

        void DetailInfo::setImage(QPixmap image) {
            this->image = image;
        }

        void DetailInfo::setDescription(QString description) {
            this->description = description;
        }

        void DetailInfo::setStatus(QString status) {
            this->status = status;
        }

        void DetailInfo::setIsSale(bool isSale) {
            this->isSale = isSale;
        }

        void DetailInfo::setStars(int stars) {
            this->stars = stars;
        }

        QPixmap DetailInfo::getImage() const {
            return image;
        }

        QString DetailInfo::getDescription() const {
            return description;
        }

        QString DetailInfo::getStatus() const {
            return status;
        }

        bool DetailInfo::getIsSale() const {
            return isSale;
        }

        int DetailInfo::getStars() const {
            return stars;
        }

        void DetailInfo::init(QPixmap image, QString description, QString status, bool isSale, int stars) {
            (*this) = DetailInfo(image,  description,  status, isSale, stars);
        }

    }
}
