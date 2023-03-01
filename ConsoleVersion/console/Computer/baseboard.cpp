#include "baseboard.h"

namespace ShadowScreen {

    namespace Computer {

        void Baseboard::setPrivateProduct(QString product) {
            this->product = product;
        }

        Baseboard::Baseboard(bool isInit)
        {
            if(isInit)
                Baseboard::init();
            else
                (*this) = Baseboard();
        }

        Baseboard::Baseboard() {
            setPrivateProduct("detail dont have product");
            setPrivateManufacturer("detail dont have manufacturer");
        }

        void Baseboard::setProduct() {
            setPrivateProduct(Detail::getDetail(Baseboard::type(), "Product"));
        }

        QString Baseboard::getProduct() const
        {
            return product;
        }

        void Baseboard::init()
        {
            Detail::setManufacturer(Baseboard::type());
            setProduct();
        }

        QString Baseboard::toString() const
        {
            return getManufacturer() + betweenTypes + getProduct();
        }

        QString Baseboard::type() const {
            return "baseboard";
        }

    }

}
