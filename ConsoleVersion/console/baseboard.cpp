#include "baseboard.h"

namespace ShadowScreen {

    namespace Compture {

        void ShadowScreen::Compture::Baseboard::setProduct(QString product) {
            if(product.isEmpty() == false)
                this->product = product;

            // exe
        }

        Baseboard::Baseboard() : Detail() {
            setProduct("unkown");
        }

        void Baseboard::setProduct() {
            setProduct(Detail::getDetail(Baseboard::type(), Product));
        }

        QString Baseboard::getProduct() const {
            return product;
        }

        void Baseboard::init() {
            setManufacturer();
            setProduct();
        }

        QString Baseboard::toString() const {
            return getManufacturer() + " |  " + getProduct();
        }

        QString Baseboard::type() const {
            return "baseboard";
        }
    }
}
