#ifndef DETAIL_H
#define DETAIL_H

#pragma once
#include <QString>
#include <QVector>

namespace ShadowScreen {

    namespace Compture {

        class Detail {
        protected:
            QVector<QString> qv_manufacturer;

            QVector<QString> getManufacturerVector() const;
            void setManufacturerVector(QVector<QString> qv_manufacturer);

        public:
            Detail();
            Detail(QString manufacturer);
            Detail(QVector<QString> qv_manufacturer);

            void setManufacturer(QString Manufacuturer);
            virtual void setManufacturer() = 0;

            QString getManufacturer() const;

            virtual QString type() const = 0;
            virtual QString toString() const = 0;
            virtual void init() = 0;
        };
    }
}

#endif // DETAIL_H
