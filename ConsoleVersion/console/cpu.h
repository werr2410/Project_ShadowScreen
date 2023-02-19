#ifndef CPU_H
#define CPU_H

#pragma once
#include "detail.h"
#include "ComptureFunction.h"
#include <QString>

namespace ShadowScreen {

    namespace Compture {

        using Function::getData;

        class CPU : public Detail {
        private:
            QString name;

            void setName(QString name);

            CPU(QString manufacturer, QString name);

        public:
            CPU();

            void setName();
            void setManufacturer() override;

            QString getName() const;

            QString type() const override;
            QString toString() const override;
            void setAll() override;
        };
    }
}

#endif // CPU_H
