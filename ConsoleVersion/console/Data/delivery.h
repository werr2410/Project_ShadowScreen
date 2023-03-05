#ifndef DELIVERY_H
#define DELIVERY_H

#include <QString>
#include"adress.h"
namespace ShadowScreen {

    namespace Data {

        class Delivery
        {
            enum TypeDelivery{
                    Ukrposhta,
                    NovaPoshta,
                    Meest };
        //fields
            QString title;
            TypeDelivery type;
            Adress adress;
        public:
        //constructs
            Delivery(QString title, TypeDelivery type, Adress adress);
            Delivery(TypeDelivery type, Adress adress);
            Delivery();

        //methods
            void setTitle(QString title);
            void setTypeDelivery(TypeDelivery type);
            void setAdress(Adress adress);
            QString getTitle() const;
            TypeDelivery getTypeDelivery() const;
            QString toString() const;
        //overload methods
            void init(QString title, TypeDelivery type, Adress adress);
            void init(TypeDelivery type, Adress adress);

        //overload operators
            Delivery& operator =(const Delivery& obj);
            bool operator==(const Delivery &rhs) const;
            bool operator!=(const Delivery &rhs) const;
        /*
        operator !=
        operator ==
        */
        };
    }
}
#endif // DELIVERY_H
