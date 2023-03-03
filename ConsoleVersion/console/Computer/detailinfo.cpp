#include "detailinfo.h"


namespace ShadowScreen {

    namespace Computer {

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
