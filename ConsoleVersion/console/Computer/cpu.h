#ifndef CPU_H
#define CPU_H

#include "detail.h"
#include "detailinfo.h"

namespace ShadowScreen {

    namespace computer {

        class CPU : public Detail, public DetailInfo {
        private:
            QString name;

            void setName(QString name);

        public:
            CPU(bool isInit);
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
