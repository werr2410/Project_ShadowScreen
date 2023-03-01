#ifndef DETAIL_H
#define DETAIL_H

#define comp_filename   "computerFile.txt"
#define betweenString   " | (-string-) | "
#define betweenTypes    " | (-type-) | "

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>

namespace ShadowScreen {

    namespace Computer {

        class Detail {

            QString manufacturer;

            // return command "wmic {detail} list full"
            static QString getCommand(QString detail);

            // seaching in string substring
            static bool SearchString(QString left, QString right);

        protected:
            Detail(QString manufacturer);

            void setPrivateManufacturer(QString manufacturer);

            // return information about detail
            static QString getDetail(QString type, QString detail);

        public:
            Detail();

            void setManufacturer(QString typeDetail);
            QString getManufacturer() const;

            virtual void init() = 0;
            virtual QString toString() const = 0; // manufacturer{betweenString}manufacturer{...}...
            virtual QString type() const = 0;
        };
    }
}

#endif // DETAIL_H
