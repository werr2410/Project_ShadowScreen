#include "videocard.h"
#include <iostream>

namespace ShadowScreen {

    namespace Computer {

        Videocard::Videocard(bool isInit) {
            if(isInit)
                Videocard::init();
            else
                (*this) = Videocard();
        }

        Videocard::Videocard() : Detail() { }

        void Videocard::Manufacturer() {
            QString line = " ";
            QString prep = "";
            std::string res = "";
            QString command = "wmic path win32_VideoController get name ";

            command += ">> ";
            command += comp_filename;

            std::system(command.toStdString().c_str());

            QFile file(comp_filename);

            if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);

                line = in.readLine();

                while (!in.atEnd()) {
                    prep = in.readLine();

                    res += " " + prep.trimmed().toStdString() + " |";

                    prep = "";
                }

                file.remove();

                file.close();
            }


            setManufacturers(QString().fromStdString(res).trimmed());
        }

        void Videocard::init() {
            Manufacturer();
        }

        QString Videocard::toString() const {
            return getManufacturer();
        }

        QString Videocard::type() const {
            return "videocard";
        }
    }
}
