#ifndef MEMORYCHIP_H
#define MEMORYCHIP_H

#pragma  once
#include "ComptureFunction.h"
#include "detail.h"
#include <QVector>
#include <QString>

namespace ShadowScreen {

    namespace Compture {

        using Function::getDataVector;

        class Memorychip : public Detail {
        private:
            QVector<QString> qv_deviceLocale;
            QVector<QString> qv_capacity;

        protected:

            void setDevicelocale(QVector<QString> qv_devicelocale);
            void setCapacity(QVector<QString> qv_capacity);

        public:
            Memorychip(QVector<QString> qv_devicelocale, QVector<QString> qv_capacity, QVector<QString> qv_manufacrurer);
            Memorychip();

            void setManufacturer() override;
            void setDevicelocale();
            void setCapacity();

            QString getDevicelocale() const;
            QVector<QString> getDevicelocaleVector() const;

            QString getCapacity() const;
            QVector<QString> getCapacityVector() const;

            QString getManufacturer() const;

            QString type() const override;
            QVector<QString> toStringVector() const;
            QString toString() const override;
            void init() override;
        };
    }
}
#endif // MEMORYCHIP_H
