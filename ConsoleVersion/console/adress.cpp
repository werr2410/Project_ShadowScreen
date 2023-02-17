#include "adress.h"

namespace ShadowScreen {

    namespace Data {

        Adress::Adress(QString country, QString town, QString street, QString number) {
            setCountry(country);
            setTown(town);
            setStreet(street);
            setNumber(number);
        }

        Adress::Adress(QString town, QString street, QString number)
            : Adress(NULL, town, street, number) { }

        Adress::Adress(QString town, QString street)
            : Adress(NULL, town, street, NULL) { }

        Adress::Adress() : Adress(NULL, NULL, NULL, NULL) {}

        void Adress::setCountry(QString country) {
            if(country.isEmpty() == false || country.isNull() == true) {
                this->country = country;
            } else {
                // exepction
            }
        }

        void Adress::setTown(QString town) {
            if(town.isEmpty() == false || town.isNull() == true) {
                this->town = town;
            } else {
                // exepction
            }
        }

        void Adress::setStreet(QString street) {
            if(street.isEmpty() == false || street.isNull() == true) {
                this->street = street;
            } else {
                // exepction
            }
        }

        void Adress::setNumber(QString number) {
            if(number.isEmpty() == false || number.isNull() == true) {
                this->number = number;
            } else {
                // exepction
            }
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

        QString Adress::getNumber() const {
            return number;
        }

        QString Adress::getFullAdress() const {
            return (country + " " + town + " " + street + " " + number);
        }

        void Adress::getFullAdress(QString &str) const
        {
            str = country + " " + town + " " + street + " " + number;
        }

        void Adress::getAdress(QString &country, QString &town, QString &street, QString &number) {
            country = this->country;
            town = this->town;
            street = this->street;
            number = this->number;
        }
    }
}
