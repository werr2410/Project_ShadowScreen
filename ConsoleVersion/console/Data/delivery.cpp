#include "delivery.h"

namespace ShadowScreen {

    namespace Data {

        Delivery::Delivery(QString title, TypeDelivery type, Adress adress)
        {
            setTitle(title);
            setTypeDelivery(type);
            setAdress(Adress(adress));
        }

        Delivery::Delivery(TypeDelivery type, Adress adress):Delivery("unknown",type,adress){}

        Delivery::Delivery():Delivery("unknown",Ukrposhta,Adress()){}

        void Delivery::setTitle(QString title)
        {
            this->title = title ;
        }

        void Delivery::setTypeDelivery(TypeDelivery type)
        {
            this->type = type;
        }

        void Delivery::setAdress(Adress adress)
        {
            this->adress = adress;
        }

        QString Delivery::getTitle() const
        {
            return title;
        }

        Delivery::TypeDelivery Delivery::getTypeDelivery() const
        {
            return type;
        }

        QString Delivery::toString() const
        {
            return title + "|" +  + "|" + adress.toString();
        }

        void Delivery::init(QString title, TypeDelivery type, Adress adress)
        {
             (*this) = Delivery(title, type, adress);
        }

        void Delivery::init(TypeDelivery type, Adress adress)
        {
            (*this) = Delivery( type, adress);
        }

        Delivery &Delivery::operator =(const Delivery &obj)
        {
            this->title = obj.title;
            this->type = obj.type;
            this->adress = obj.adress;
            return * this;
        }

        bool Delivery::operator==(const Delivery &rhs) const
        {
             return toString() == rhs.toString();
        }

        bool Delivery::operator!=(const Delivery &rhs) const
        {
             return toString() != rhs.toString();
        }





    }
}
