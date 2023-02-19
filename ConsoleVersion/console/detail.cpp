#include "detail.h"

namespace ShadowScreen {

    namespace Compture {

        Detail::Detail(QVector<QString> qv_manufacturer) {
            this->qv_manufacturer = qv_manufacturer;
        }

        QVector<QString> Detail::getManufacturerVector() const {
            return qv_manufacturer;
        }

        void Detail::setManufacturerVector(QVector<QString> qv_manufacturer) {
            this->qv_manufacturer =  qv_manufacturer;
        }

        Detail::Detail() {
            QVector<QString> tmp;

            tmp.push_back(QString());

            qv_manufacturer.clear();
            qv_manufacturer =  tmp;
        }

        Detail::Detail(QString manufacturer) {
            QVector<QString> tmp;

            tmp.push_back(manufacturer);

            qv_manufacturer.clear();
            qv_manufacturer =  tmp;
        }

        void Detail::setManufacturer(QString Manufacuturer) {
            qv_manufacturer[0] = Manufacuturer;
        }

        QString Detail::getManufacturer() const {
            return qv_manufacturer[0];
        }

    }
}
