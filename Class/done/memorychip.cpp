#include "memorychip.h"

namespace ShadowScreen {

    namespace Compture {

        void ShadowScreen::Compture::Memorychip::setCapacity(QString Capacity) {
            if(Capacity.isEmpty() == false)
                this->Capacity = Capacity;
        }

        Memorychip::Memorychip() {
            setCapacity("0");
        }

        void Memorychip::setCapacity() {
            setCapacity(getDetail(Memorychip::type(), Compture::Capacity));
        }

        QString Memorychip::getCapacity() const {
            return Capacity;
        }

        void Memorychip::init() {
            setManufacturer(Memorychip::type());
            setCapacity();
        }

        QString Memorychip::toString() const {
            return getManufacturer() + " | " + getCapacity();
        }

        QString Memorychip::type() const {
            return "Memorychip";
        }

    }
}
