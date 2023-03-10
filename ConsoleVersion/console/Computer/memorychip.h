#ifndef MEMORYCHIP_H
#define MEMORYCHIP_H

#include "detail.h"
#include "detailinfo.h"

namespace ShadowScreen {

    namespace computer {

        class Memorychip : public Detail{
        private:
            QString Capacity;

            void setCapacity(QString Capacity);

        public:
            Memorychip(bool isInit);
            Memorychip();

            void setCapacity();
            QString getCapacity() const;

            void init() override;
            QString toString() const override;
            QString type() const override;
        };
    }
}
#endif // MEMORYCHIP_H
