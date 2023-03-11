#include "baseboard.h"

namespace ShadowScreen {

    namespace computer {

        void ShadowScreen::computer::Baseboard::setProduct(QString product) {
            if(product.isEmpty() == false)
                this->product = product;
        }

        Baseboard::Baseboard(bool isInit) : Detail(), DetailInfo() {
            if(isInit)
                Baseboard::init();
            else
                (*this) = Baseboard();
        }

        Baseboard::Baseboard() : Detail(), DetailInfo() {
            setProduct("unkown");
        }

        void Baseboard::setProduct() {
            setProduct(Detail::getDetail(Baseboard::type(), "Product"));
        }

        QString Baseboard::getProduct() const {
            return product;
        }

        void Baseboard::init() {
            setManufacturer();
            setProduct();
        }

        QString Baseboard::toString() const {
            return getManufacturer() + "$" + getProduct();
        }

        QString Baseboard::type() const {
            return "baseboard";
        }
    }
}
