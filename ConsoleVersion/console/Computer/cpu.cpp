#include "cpu.h"

namespace ShadowScreen {

    namespace Computer {
        void ShadowScreen::Computer::CPU::setName(QString name) {
            if(name.isEmpty() == false)
                this->name = name;
        }

        CPU::CPU(bool isInit) {
            if(isInit)
                CPU::init();
            else
                (*this) = CPU();
        }

        CPU::CPU() : Detail()  {
            setName("unknown");
        }

        void CPU::setName() {
            setName(Detail::getDetail(CPU::type(), "Name"));
        }

        QString CPU::getName() const {
            return name;
        }

        void CPU::init() {
            setName();
            setManufacturer(CPU::type());
        }

        QString CPU::toString() const {
            return getName() + " | " + getManufacturer();
        }

        QString CPU::type() const {
            return "cpu";
        }
    }
}
