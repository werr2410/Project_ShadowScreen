#ifndef STORAGE_H
#define STORAGE_H

#include "detail.h"
#include "detailinfo.h"

namespace ShadowScreen {

    namespace Computer {

        class Storage : public Detail, public DetailInfo {
        private:
            QString model;
            QString size;

            void setModel(QString model);
            void setSize(QString size);

        public:
            Storage(bool isInit);
            Storage();

            void setModel();
            void setSize();

            QString getModel() const;
            QString getSize() const;

            void init() override;
            QString toString() const override;
            QString type() const override;
        };
    }
}

#endif // STORAGE_H
