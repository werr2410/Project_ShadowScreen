#include "baseboard.h"

namespace ShadowScreen {

    namespace Compture {

        Baseboard::Baseboard(QString manufacturer, QString product)
            : Detail(manufacturer) {
            setProduct(product);
        }

        void Baseboard::setProduct(QString product) {
            this->product = product;
        }

        Baseboard::Baseboard(bool autoset)  {
            if(autoset == true)
                Baseboard::init();
            else {
                setProduct("");
                Detail::setManufacturer("");
            }
        }

        void Baseboard::setProduct() {
            setProduct(getData(Baseboard::type(), "Product"));
        }

        void Baseboard::setManufacturer() {
            Detail::setManufacturer(getData(Baseboard::type(), "Manufacturer"));
        }

        QString Baseboard::getProduct() const {
            return product;
        }

        QString Baseboard::type() const {
            return "baseboard";
        }

        QString Baseboard::toString() const {
            return getManufacturer() + " " + getProduct();
        }

        void Baseboard::init() {
            Baseboard::setManufacturer();
            setProduct();
        }

    }

}
