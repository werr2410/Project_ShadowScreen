#ifndef DETAIL_H
#define DETAIL_H

#pragma once
#include <QString>

namespace ShadowScreen {

    namespace Compture {

        class Detail {
        protected:
            QString* manufacturer;

            // should set true if you are going to save in pointer array
            // for correct virtual deconstructor
            bool isArray = false;

            Detail(QString* manufacturer);
            Detail(bool isArray);

            void setIsArray(bool isArray);
            bool getIsArray() const;

            void setManufacturer(QString* manufacturer);
            QString* getManufacturerPointer() const;

        public:
            Detail(QString manufacturer);
            Detail(Detail& detail);
            Detail();

            virtual ~Detail();

            virtual void setManufacturer() = 0;
            QString getManufacturer() const;

            virtual QString type() const = 0;
            virtual void setAll() = 0;
            virtual QString toString() const = 0;
            //Detail& operator =(const Detail detail);
        };
    }
}
#endif // DETAIL_H
