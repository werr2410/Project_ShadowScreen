#include "cpu.h"

namespace ShadowScreen {

    namespace Compture {

        void CPU::setName(QString name) {
            this->name = name;
        }

        CPU::CPU(QString manufacturer, QString name) {
            Detail::setManufacturer(manufacturer);
            setName(name);
        }

        CPU::CPU() {
            Detail::setManufacturer("");
            setName("");
        }

        void CPU::setName() {
            setName(getData(CPU::type(), "name"));
        }

        void CPU::setManufacturer() {
            Detail::setManufacturer(getData(CPU::type(), "manufacturer"));
        }

        QString CPU::getName() const {
            return name;
        }

        QString CPU::type() const {
            return "cpu";
        }

        QString CPU::toString() const {
            return Detail::getManufacturer()  + " " + getName();
        }

        void CPU::init() {
            setManufacturer();
            setName();
        }

    }
}
