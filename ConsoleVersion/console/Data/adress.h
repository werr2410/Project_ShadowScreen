#ifndef ADRESS_H
#define ADRESS_H

#include <QString>
#include "Database/dbobj.h"

namespace ShadowScreen {

    namespace Data {

        using Database::Dbobj;

        enum fieldAdress {
            fd_Country,
            fd_Town,
            fd_Street,
            fd_NumberHouse
        };

        class Adress {
            QString country;
            QString town;
            QString street;
            QString numberHouse;

        public:
            Adress(QString country, QString town, QString street, QString numberHouse);
            Adress(QString town, QString street, QString numberHouse);
            Adress();

            void setCountry(QString country);
            void setTown(QString town);
            void setStreet(QString street);
            void setNumberHouse(QString numberHouse);
            QString getCountry() const;
            QString getTown() const;
            QString getStreet() const;
            QString getNumberHouse() const;
            QString toString() const;

            void init(QString country, QString town, QString street, QString numberHouse);
            void init(QString town, QString street, QString numberHouse);

            Adress& operator =(const Adress& obj); // зачем если он автоматически создаеться

            bool operator==(const Adress &rhs) const;
            bool operator!=(const Adress &rhs) const;
            bool operator<(const Adress &rhs) const;
            bool operator>(const Adress &rhs) const;
            bool operator<=(const Adress &rhs) const;
            bool operator>=(const Adress &rhs) const;

            QString operator[](fieldAdress field) const;
        };
    }
}
#endif // ADRESS_H
