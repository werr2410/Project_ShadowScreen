#ifndef DETAIL_H
#define DETAIL_H
#include <QString>
#include <QVector>
#include <QFile>
#include <cstring>
#include <string>
#include <QTextStream>

namespace ShadowScreen {

    namespace Compture {

        enum AttributesDetail {
            Manufacturer,
            Product,
            Model,
            Name,
            Capacity,
            Size
        };

        class Detail {
        private:
            QString manufacturer;

            static bool seacrhString(QString str1, QString str2);

        protected:
            Detail(QString manufacturer);

            void setManufacturers(QString manufacturer);

            static QString getFilename();
            static QString getType(AttributesDetail td);
            static QString getDetail(QString type, AttributesDetail detail);
            static QString getCommand(QString type);

        public:
            Detail();

            void setManufacturer(QString typeDetail = "baseboard");
            QString getManufacturer() const;

            virtual void init() = 0;
            virtual QString toString() const = 0;
            virtual QString type() const = 0;
        };
    }
}

#endif // DETAIL_H
