#ifndef BASEBOARD_H
#define BASEBOARD_H

#include "detail.h"
#include "ComptureFunction.h"

namespace ShadowScreen {

    namespace Compture {

        using Function::getData;

        class Baseboard : public Detail {
        private:
            QString* product;

            void setProduct(QString* Product);
            QString* getProductPointer() const;

        public:
            Baseboard();
            //Baseboard(const Baseboard& obj);

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
