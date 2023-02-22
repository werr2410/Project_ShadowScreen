#ifndef CPU_H
#define CPU_H

#include "detail.h"

namespace ShadowScreen {

    namespace Compture {

        class CPU : public Detail {
        private:
            QString name;

            void setName(QString name);

        public:
            CPU();

            void setName();
            QString getName() const;

            void init() override;
            QString toString() const override;
            QString type() const override;
        };
    }
}

#endif // CPU_H
