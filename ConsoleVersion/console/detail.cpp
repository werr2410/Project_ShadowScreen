#include "detail.h"

namespace ShadowScreen {

    namespace Compture {

        Detail::Detail(QString *manufacturer) {
            this->manufacturer = manufacturer;
        }

        void Detail::setIsArray(bool isArray) {
            this->isArray = isArray;
        }

        bool Detail::getIsArray() const {
            return isArray;
        }

        Detail::Detail(QString manufacturer) {
            this->manufacturer = new QString(manufacturer);
        }

        Detail::Detail(Detail &detail) {
            this->manufacturer = new QString(detail.getManufacturer());
        }

        Detail::Detail() {
            this->manufacturer = new QString();
        }

        Detail::~Detail() {
            if(isArray == false)
                delete manufacturer;
            else
                delete[] manufacturer;
        }

        void Detail::setManufacturer(QString *manufacturer) {
            if(this->manufacturer != nullptr) delete manufacturer;
            this->manufacturer = manufacturer;
        }

        void Detail::setManufacturer(QString manufacturer) {
            if(this->manufacturer != nullptr) delete this->manufacturer;
            this->manufacturer = new QString(manufacturer);
        }

        QString Detail::getManufacturer() const {
            return *manufacturer;
        }

        QString *Detail::getManufacturerPointer() const {
                return manufacturer;
        }

        QString Detail::type() const {
            return "detail";
        }

        Detail &Detail::operator =(const Detail detail) {
            if(this->manufacturer != nullptr) delete this->manufacturer;

            this->manufacturer = new QString(detail.getManufacturer());

            return *this;
        }

    }
}
