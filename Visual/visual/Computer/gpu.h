#ifndef GPU_H
#define GPU_H

#include "detail.h"
#include "detailinfo.h"

namespace ShadowScreen {

    namespace computer {

        class GPU : public Detail {
        public:
            GPU(bool isInit);
            GPU();

            void Manufacturer();

            void init() override;
            QString toString() const override;
            QString type() const override;
        };
    }
}

#endif // GPU_H
