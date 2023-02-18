#ifndef DETAIL_H
#define DETAIL_H

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

            void setIsArray(bool isArray);
            bool getIsArray() const;

            void setManufacturer(QString* manufacturer);
            QString* getManufacturerPointer() const;

        public:
            Detail(QString manufacturer);
            Detail(Detail& detail);
            Detail();

            virtual ~Detail();

            void setManufacturer(QString manufacturer);
            QString getManufacturer() const;

            virtual QString type() const;

            Detail& operator =(const Detail detail);
        };
    }
}
#endif // DETAIL_H
