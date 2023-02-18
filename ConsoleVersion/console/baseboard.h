#ifndef BASEBOARD_H
#define BASEBOARD_H

#include "detail.h"

namespace ShadowScreen {

    namespace Compture {

        class Baseboard : protected Detail {
        private:
            QString* Product;

            void setProduct(QString* Product);
            QString getProduct() const;

        public:
            Baseboard(QString manufacturer, QString product);
            Baseboard(bool autoset = true);

            void setManufacturer() override;
            void setProduct();

            // QString getManufacturer - in class Detail
            QString getProduct() const;
        };
    }
}
#endif // BASEBOARD_H
