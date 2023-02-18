#ifndef BASEBOARD_H
#define BASEBOARD_H

#include "detail.h"

namespace ShadowScreen {

    namespace Compture {

        const int param_baseboard_size = 2;
        const QString param_baseboard[param_baseboard_size]{ "Manufacturer", "Product" };

        const int param_baseboard_Manufacturer = 0;
        const int param_baseboard_Product = 1;

        class Baseboard : public Detail {
        private:
            QString* product;

            void setProduct(QString* Product);
            QString* getProductPointer() const;

        public:
            Baseboard(bool autoset = true);
            Baseboard(const Baseboard& obj);

            ~Baseboard();

            void setManufacturer() override;
            void setProduct();
            void setAll() override;

            // QString getManufacturer - in class Detail
            QString getProduct() const;

            QString toString() const override;
            QString type() const override;

            Baseboard& operator=(const Baseboard& obj);
        };
    }
}
#endif // BASEBOARD_H
