#ifndef ADRESS_H
#define ADRESS_H

#pragma once

#include <QString>

namespace ShadowScreen {

    namespace Data {

        class Adress {
        private:
            QString country;
            QString town;
            QString street;
            QString number;

        public:
            Adress(QString country, QString town, QString street, QString number);
            Adress(QString town, QString street, QString number);
            Adress(QString town, QString street);
            Adress();

            void setCountry(QString country);
            void setTown(QString town);
            void setStreet(QString street);
            void setNumber(QString number);

            QString getCountry() const;
            QString getTown() const;
            QString getStreet() const;
            QString getNumber() const;

            QString getFullAdress() const;
            void getFullAdress(QString& str) const;
            void getAdress(QString& country, QString& town, QString& street, QString&  number);
        };
    }
}
#endif // ADRESS_H
