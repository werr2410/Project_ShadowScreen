#ifndef DELIVERY_H
#define DELIVERY_H

#pragma once
#include <QString>
#include "adress.h"

namespace ShadowScreen {

    namespace Data {

        enum TypeDelivery : int{
            Ukrposhta = 0,
            Novaposhta,
            Meest
        };

        class Delivery {
        private:
            QString title;
            TypeDelivery type;
            Adress adress;

        public:
            Delivery(QString title, TypeDelivery type, Adress adress);
            Delivery(TypeDelivery type, Adress adress);
            Delivery();

            void setTitle(QString title);
            void setTypeDelivery(TypeDelivery type);
            void setAdress(Adress adress);

            QString getTitle() const;
            TypeDelivery getTypeDelivery() const;
            Adress getAdress() const;

            QString getDelivery() const;
            void getDelivery(QString& title, TypeDelivery& type, Adress& adress);
            void getDelivery(TypeDelivery& type, Adress& adress);
        };
    }
}

#endif // DELIVERY_H
