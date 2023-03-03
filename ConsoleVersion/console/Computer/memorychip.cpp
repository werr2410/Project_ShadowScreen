#include "memorychip.h"

namespace ShadowScreen {

    namespace Computer {

        void ShadowScreen::Computer::Memorychip::setCapacity(QString Capacity) {
            if(Capacity.isEmpty() == false)
                this->Capacity = Capacity;
        }

        Memorychip::Memorychip(bool isInit) {
            if(isInit)
                Memorychip::init();
            else
                (*this) = Memorychip();
        }

        Memorychip::Memorychip() {
            setCapacity("unknown");
        }

        void Memorychip::setCapacity() {
            setCapacity(getDetail(Memorychip::type(), "Capacity"));
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
