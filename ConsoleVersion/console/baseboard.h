#ifndef BASEBOARD_H
#define BASEBOARD_H

#pragma once
#include "detail.h"
#include "ComptureFunction.h"

namespace ShadowScreen {

    namespace Compture {

        using Function::getData;

        class Baseboard : public Detail {
        private:
            QString product;

        protected:
            Baseboard(QString manufacturer, QString product);

            void setProduct(QString product);

        public:
            Baseboard(bool autoset = false);

            void setProduct();
            void setManufacturer() override;

            QString getProduct() const;

            QString type() const override;
            QString toString() const override;
            void init() override;
        };
    }
}

#endif // BASEBOARD_H
