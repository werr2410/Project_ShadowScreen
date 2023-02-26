#ifndef VIDEOCARD_H
#define VIDEOCARD_H

#include "detail.h"

namespace ShadowScreen {

    namespace Compture {

        class Videocard : public Detail {
        public:
            void Manufacturer();

            void init() override;
            QString toString() const override;
            QString type() const override;
        };
    }
}

#endif // VIDEOCARD_H
