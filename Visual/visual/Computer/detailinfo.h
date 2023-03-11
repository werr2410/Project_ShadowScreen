#ifndef DETAILINFO_H
#define DETAILINFO_H

#include <QString>
#include <QPixmap>

namespace ShadowScreen {

    namespace computer {

        class DetailInfo {
        private:
            QPixmap image;
            QString description;
            QString status;
            bool isSale;
            int stars;

        public:
            DetailInfo(QPixmap image, QString description, QString status, bool isSale, int stars);
            DetailInfo();

            void setImage(QPixmap image);
            void setDescription(QString description);
            void setStatus(QString status);
            void setIsSale(bool isSale);
            void setStars(int stars);

            QPixmap getImage() const;
            QString getDescription() const;
            QString getStatus() const;
            bool getIsSale() const;
            int getStars() const;

            void init(QPixmap image, QString description, QString status, bool isSale, int stars);
        };
    }
}

#endif // DETAILINFO_H
