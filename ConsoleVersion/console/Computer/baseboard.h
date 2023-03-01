#ifndef BASEBOARD_H
#define BASEBOARD_H

#include "Computer/detail.h"

namespace ShadowScreen {

    namespace Computer {

        class Baseboard : public Detail {
            QString product;

            void setPrivateProduct(QString product);
        public:
            Baseboard(bool isInit);
            Baseboard();

            void setProduct();
            QString getProduct() const;

            void init() override;
            QString toString() const override;
            QString type() const override;
        };
    }
}
#endif // BASEBOARD_H
