#ifndef BASEBOARD_H
#define BASEBOARD_H

#include "detail.h"

namespace ShadowScreen {

    namespace Computer {

        class Baseboard : public Detail {
        private:
            QString product;

            void setProduct(QString product);

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
