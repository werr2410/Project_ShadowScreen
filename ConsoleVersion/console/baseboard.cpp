#include "baseboard.h"

namespace ShadowScreen {

    namespace Compture {

        void Baseboard::setProduct(QString *Product) {
            if(this->product != nullptr) {
                if(isArray == false)
                    delete product;
                else
                    delete[] product;
            }

            this->product = Product;
        }

        QString *Baseboard::getProductPointer() const {
            return product;
        }

        Baseboard::Baseboard(bool autoset) : Detail(false) {
            if(autoset == true)
                Baseboard::setAll();
            else
                setProduct(new QString());
        }

        Baseboard::Baseboard(const Baseboard &obj) {
           this->isArray = obj.isArray;

           this->setProduct(new QString(obj.getProduct()));
           Detail::setManufacturer(new QString(obj.getManufacturer()));
        }

        Baseboard::~Baseboard() {
            if(product != nullptr) {
                if(isArray == true)
                    delete[] product;
                else
                    delete product;
            }
        }

        void Baseboard::setManufacturer() {

        }

        void Baseboard::setProduct() {

        }

        void Baseboard::setAll() {
            Baseboard::setManufacturer();
            setProduct();
        }

        QString Baseboard::getProduct() const {
            return *product;
        }

        QString Baseboard::toString() const {
            return QString(*manufacturer + " " + *product);
        }

        QString Baseboard::type() const {
            return "baseboard";
        }

        Baseboard &Baseboard::operator=(const Baseboard &obj) {
            this->isArray = obj.isArray;

            this->setProduct(new QString(obj.getProduct()));
            Detail::setManufacturer(new QString(obj.getManufacturer()));
        }


    }
}
