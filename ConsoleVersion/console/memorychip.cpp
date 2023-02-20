#include "memorychip.h"

namespace ShadowScreen {

    namespace Compture {

        Memorychip::Memorychip(QVector<QString> qv_devicelocale, QVector<QString> qv_capacity, QVector<QString> qv_manufacrurer) {
            this->qv_capacity = qv_capacity;
            this->qv_deviceLocale = qv_devicelocale;
            this->qv_manufacturer = qv_manufacrurer;
        }

        void Memorychip::setDevicelocale(QVector<QString> qv_devicelocale) {
            this->qv_deviceLocale = qv_devicelocale;
        }

        void Memorychip::setCapacity(QVector<QString> qv_capacity) {
            this->qv_capacity = qv_capacity;
        }

        Memorychip::Memorychip() { }

        void Memorychip::setManufacturer() {
            setManufacturerVector(getDataVector(Memorychip::type(), "manufacturer"));
        }

        void Memorychip::setDevicelocale() {
            // any logic
        }

        void Memorychip::setCapacity() {
            // any logic
        }

        QString Memorychip::getDevicelocale() const {
            QString res;

            for(int i = 0; i < qv_deviceLocale.size(); i++) {
                res += qv_deviceLocale[i] + " ";
            }

            return res;
        }

        QVector<QString> Memorychip::getDevicelocaleVector() const{
            return qv_deviceLocale;
        }

        QString Memorychip::getCapacity() const {
            QString res;

            for(int i = 0; i < qv_capacity.size(); i++) {
                res += qv_capacity[i] + " ";
            }

            return res;
        }

        QVector<QString> Memorychip::getCapacityVector() const {
            return qv_capacity;
        }

        QString Memorychip::getManufacturer() const
        {
            QString res;

            for(int i = 0; i < qv_manufacturer.size(); i++) {
                res += qv_capacity[i] + " ";
            }

            return res;
        }

        QString Memorychip::type() const {
            return "memorychip";
        }

        QString Memorychip::toString() const {
            QVector<QString> str = toStringVector();
            QString line = "";

            for(int i = 0; i < str.size(); i++) {
                line += str[i] + " | ";
            }

            return line;
        }

        QVector<QString> Memorychip::toStringVector() const {
            QVector<QString> res;
            QString str;

            for(int i = 0; i < qv_deviceLocale.size(); i++) {
                str = qv_deviceLocale[i] + " " + qv_manufacturer[i] + " " + qv_capacity[i];

                res.push_back(str);
            }

            return res;
        }

        void Memorychip::init() {
            setDevicelocale();
            setManufacturer();
            setCapacity();
        }

    }
}
