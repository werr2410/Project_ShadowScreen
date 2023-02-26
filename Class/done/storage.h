#ifndef STORAGE_H
#define STORAGE_H

#include "detail.h"


namespace ShadowScreen {

    namespace  Compture {

        class Storage : public Detail {
        private:
            QString model;
            QString size;

            void setModel(QString model);
            void setSize(QString size);

        public:
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
