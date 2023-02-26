#include "delivery.h"

namespace ShadowScreen {

    namespace Data {

        Delivery::Delivery(QString title, TypeDelivery type, Adress adress) {
            setTitle(title);
            setTypeDelivery(type);
            setAdress(adress);
        }

        Delivery::Delivery(TypeDelivery type, Adress adress)
            : Delivery(NULL, type, adress) { }

        Delivery::Delivery()
            : Delivery(NULL, Ukrposhta, Adress()) {  }

        void Delivery::setTitle(QString title) {
            if(title.isEmpty() == false || title.isNull() == true) {
                this->title = title;
            } else {
                // exepction
            }
        }

        void Delivery::setTypeDelivery(TypeDelivery type) {
            this->type = type;
        }

        void Delivery::setAdress(Adress adress) {
            this->adress = adress;
        }

        QString Delivery::getTitle() const {
            return title;
        }

        TypeDelivery Delivery::getTypeDelivery() const {
            return type;
        }

        Adress Delivery::getAdress() const {
            return adress;
        }

        QString Delivery::getDelivery() const {
            QString res = title + " ";

            switch(type) {
                case Novaposhta: res += "Novaposhta "; break;
                case Ukrposhta: res += "Ukrposhta "; break;
                case Meest: res += "Meest "; break;
            }

            res += adress.getFullAdress();

            return res;
        }

        void Delivery::getDelivery(QString &title, TypeDelivery &type, Adress &adress)  {
            title = this->title;
            type = this->type;
            adress = this->adress;
        }

        void Delivery::getDelivery(TypeDelivery &type, Adress &adress) {
            type = this->type;
            adress = this->adress;
        }
    }
}
