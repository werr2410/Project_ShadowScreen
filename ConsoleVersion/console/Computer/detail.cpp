#include "detail.h"
#include <iostream>

namespace ShadowScreen {

    namespace Computer {

        bool Detail::seacrhString(QString str1, QString str2) {
            return (std::strstr(str1.toStdString().c_str(), str2.toStdString().c_str()) != NULL);
        }

        ShadowScreen::Computer::Detail::Detail(QString manufacturer) {
            if(manufacturer.isEmpty() == false)
                this->manufacturer = manufacturer;
        }

        void Detail::setManufacturers(QString manufacturer) {
            if(manufacturer.isEmpty() == false)
                this->manufacturer = manufacturer;
        }

        QString Detail::getDetail(QString type, QString detail) {
            QString command = getCommand(type);
            QString line = " ";
            std::string res = "";

            std::system(command.toStdString().c_str());

            QFile file(comp_filename);

            if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);

                while (!in.atEnd()) {

                    line = in.readLine();

                    if(seacrhString(line, detail)) {
                        QStringList list = line.split("=");

                        res += list[list.length() - 1].toStdString() + " ";
                    }
                }

                file.remove();

                file.close();
            }

            return QString(res.c_str());
        }

        QString Detail::getCommand(QString type) {
            QString res = "wmic ";

            res += type + " ";
            res += "list full ";
            res += ">> ";
            res += comp_filename;

            return res;
        }

        Detail::Detail() {
            this->manufacturer = "unknown";
        }

        void Detail::setManufacturer(QString typeDetail) {
            setManufacturers(getDetail(typeDetail, "Manufacturer"));
        }

        QString Detail::getManufacturer() const {
            return manufacturer;
        }
    }
}

