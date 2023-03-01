#include "cpu.h"


namespace ShadowScreen {

    namespace Computer {

        void CPU::setPrivateName(QString name)
        {
            this->name = name;
        }

        CPU::CPU()
        {
            setPrivateManufacturer("detail dont have manufacturer");
            setPrivateName("detail dont have manufacturer");
        }

        CPU::CPU(bool isInit)
        {
            if(isInit)
                CPU::init();
            else
                (*this) = CPU();
        }

        void CPU::setName() {
            setPrivateName(Detail::getDetail(CPU::type(), "Name"));
        }

        QString CPU::getName() const
        {
            return name;
        }

        void CPU::init()
        {
            Detail::setManufacturer(CPU::type());
            setName();
        }

        QString CPU::toString() const
        {
            return getManufacturer() + betweenTypes + name;
        }

        QString CPU::type() const
        {
            return "cpu";
        }

    }
}
