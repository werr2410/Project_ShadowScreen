#ifndef CPU_H
#define CPU_H

#include "Computer/detail.h"

namespace ShadowScreen {

    namespace Computer {

        class CPU : public Detail {
            QString name;

            void setPrivateName(QString name);

        public:
            CPU();
            CPU(bool isInit);

            void setName();
            QString getName() const;

            void init() override;
            QString toString() const override;
            QString type() const override;
        };
    }
}

#endif // CPU_H
