#include "detail.h"
#include <iostream>

namespace ShadowScreen {

    namespace Computer {

    QString Detail::getFilename() {
        return "tmpcompturefile.txt";
    }

    bool Detail::seacrhString(QString str1, QString str2) {
        return (std::strstr(str1.toStdString().c_str(), str2.toStdString().c_str()) != NULL);
    }

    ShadowScreen::Computer::Detail::Detail(QString manufacturer) {
            if(manufacturer.isEmpty() == false)
                this->manufacturer = manufacturer;
            //else
                // exec
        }

        void Detail::setManufacturers(QString manufacturer) {
            if(manufacturer.isEmpty() == false)
                this->manufacturer = manufacturer;
            //else
                // exec
        }

        QString Detail::getType(AttributesDetail td) {
            switch (td) {
            case AttributesDetail::Manufacturer:
                return "Manufacturer";
            case AttributesDetail::Capacity:
                return "Capacity";
            case AttributesDetail::Model:
                return "Model";
            case AttributesDetail::Name:
                return "Name";
            case AttributesDetail::Product:
                return "Product";
            case AttributesDetail::Size:
                return "Size";
            default:
                //exec
                break;
            }

            return "";
        }


        QString Detail::getDetail(QString type, AttributesDetail detail) {
            QString command = getCommand(type);
            QString line = " ";
            std::string res = "";

            std::system(command.toStdString().c_str());

            QFile file(getFilename());

            if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);

                while (!in.atEnd()) {

                    line = in.readLine();

                    if(seacrhString(line, getType(detail))) {
                        QStringList list = line.split("=");

                        res += list[list.length() - 1].toStdString() + " ";

                    }
                }

                file.remove();

                file.close();
            } else {
                 std::cout << "file dont open \n" << std::endl;
            }

            return QString(res.c_str());
        }

        QString Detail::getCommand(QString type) {
            QString res = "wmic "; // wmic "type" get list full

            res += type + " ";
            res += "list full ";
            res += ">> " + getFilename();

            return res;
        }

        Detail::Detail() {
            this->manufacturer = "unknown";
        }

        void Detail::setManufacturer(QString typeDetail) {
            setManufacturers(getDetail(typeDetail, Manufacturer));
        }

        QString Detail::getManufacturer() const {
            return manufacturer;
        }
    }
}

