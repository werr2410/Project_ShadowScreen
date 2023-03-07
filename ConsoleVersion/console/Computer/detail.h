#ifndef DETAIL_H
#define DETAIL_H

#define comp_filename "file.txt"

#include <QString>
#include <QVector>
#include <QFile>
#include <cstring>
#include <string>
#include <QSqlDatabase>
#include <QTextStream>


namespace ShadowScreen {

    namespace computer {

        class Detail {
        private:
            QString manufacturer;

            static bool seacrhString(QString str1, QString str2);

        protected:
            Detail(QString manufacturer);

            void setManufacturers(QString manufacturer);

            static QString getDetail(QString type, QString detail);
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
