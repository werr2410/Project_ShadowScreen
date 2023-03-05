#ifndef ADRESS_H
#define ADRESS_H

#include <QString>

namespace ShadowScreen {

    namespace Data {
        class Adress
        {
            //fields
            QString country;
            QString town;
            QString street;
            QString numberHouse;
        public:
            //construct
            Adress(QString country, QString town, QString street, QString numberHouse);
            Adress(QString town, QString street, QString numberHouse);
            Adress();

            //methods
            void setCountry(QString country);
            void setTown(QString town);
            void setStreet(QString street);
            void setNumberHouse(QString numberHouse);
            QString getCountry() const;
            QString getTown() const;
            QString getStreet() const;
            QString getNumberHouse() const;
            QString toString() const;

            //overloat methods
            void init(QString country, QString town, QString street, QString numberHouse);
            void init(QString town, QString street, QString numberHouse);

            //overload operators
            Adress& operator =(const Adress& obj);
            bool operator==(const Adress &rhs) const;
            bool operator!=(const Adress &rhs) const;
            bool operator<(const Adress &rhs) const;
            bool operator>(const Adress &rhs) const;
            bool operator<=(const Adress &rhs) const;
            bool operator>=(const Adress &rhs) const;
            /*operator ==
            operator !=
            operator >
            operator <
            operator >=
            operator <=*/
                };
    }
}
#endif // ADRESS_H
