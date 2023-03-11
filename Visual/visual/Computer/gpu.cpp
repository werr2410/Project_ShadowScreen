#include "gpu.h"

namespace ShadowScreen {

    namespace computer {

        GPU::GPU(bool isInit) : Detail(), DetailInfo() {
            if(isInit)
                GPU::init();
            else
                (*this) = GPU();
        }

        GPU::GPU() : Detail(), DetailInfo() { }

        void GPU::Manufacturer() {
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

                    res += "|" + prep.trimmed().toStdString() + "|$";

                    prep = "";
                }

                file.remove();

                file.close();
            }


            setManufacturers((QString().fromStdString(res.substr(0, res.length() - 1)).trimmed()));
        }

        void GPU::init() {
            Manufacturer();
        }

        QString GPU::toString() const {
            return getManufacturer();
        }

        QString GPU::type() const {
            return "gpu";
        }
    }
}
