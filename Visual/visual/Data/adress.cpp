#include "adress.h"

namespace ShadowScreen {

    namespace Data {

        Adress::Adress(QString country, QString town, QString street, QString numberHouse) {
            setCountry(country);
            setTown(town);
            setStreet(street);
            setNumberHouse(numberHouse);
        }

        Adress::Adress(QString town, QString street, QString numberHouse)
            : Adress("unknown", town, street, numberHouse) { }

        Adress::Adress()
            : Adress("unknown", "unknown", "unknown","unknown")  {}

        void Adress::setCountry(QString country) {
            this->country = country;
        }

        void Adress::setTown(QString town) {
            this->town = town;
        }

        void Adress::setStreet(QString street) {
           this->street = street;
        }

        void Adress::setNumberHouse(QString numberHouse) {
            this->numberHouse = numberHouse;
        }

        QString Adress::getCountry() const {
            return country;
        }

        QString Adress::getTown() const {
            return town;
        }

        QString Adress::getStreet() const {
            return street;
        }

        QString Adress::getNumberHouse() const {
            return numberHouse;
        }

        QString Adress::toString() const {
            if(country.isEmpty() == false)
                return country + "|" + town + "|" + street + "|" + numberHouse;
            else
                return town + "|" + street + "|" + numberHouse;
        }

        void Adress::init(QString country, QString town, QString street, QString numberHouse) {
            (*this) = Adress(country, town, street,numberHouse);
        }

        void Adress::init(QString town, QString street, QString numberHouse) {
            (*this) = Adress(town, street,numberHouse);
        }

        bool Adress::operator==(const Adress &rhs) const {
            return toString() == rhs.toString();
        }

        bool Adress::operator!=(const Adress &rhs) const {
            return toString() != rhs.toString();
        }

        bool Adress::operator<(const Adress &rhs) const {
            if(rhs.toString().length() > toString().length())
                return true;

            return false;
        }

        bool Adress::operator>(const Adress &rhs) const {
             return rhs < *this;
        }

        bool Adress::operator<=(const Adress &rhs) const {
            if(rhs.toString().length() >= toString().length())
                return true;

            return false;
        }

        bool Adress::operator>=(const Adress &rhs) const {
            return rhs <= *this;
        }

        QString Adress::operator[](fieldAdress field) const {
            switch(field) {
            case fd_Country:
                return country;

            case fd_Town:
                return town;

            case fd_Street:
                return street;

            case fd_NumberHouse:
                return numberHouse;
            }
        }
    }
}
