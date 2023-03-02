#ifndef VIDEOCARD_H
#define VIDEOCARD_H

#include "detail.h"

namespace ShadowScreen {

    namespace Computer {

        class Videocard : public Detail {
        public:
            Videocard(bool isInit);
            Videocard();

            void Manufacturer();

            void init() override;
            QString toString() const override;
            QString type() const override;
        };
    }
}

#endif // VIDEOCARD_H
