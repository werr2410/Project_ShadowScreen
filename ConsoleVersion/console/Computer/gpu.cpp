#include "gpu.h"


namespace ShadowScreen {

    namespace Computer {

        GPU::GPU(bool isInit)
        {
            if(isInit)
                GPU::init();
            else
                (*this) = GPU();
        }

        GPU::GPU() {
            setPrivateManufacturer("detail dont have name");
        }


        void GPU::init()
        {
            QString command = "wmic path win32_VideoController get name ";

            command += ">> ";
            command += comp_filename;

            QString line = " ";
            std::string res = "";

            std::system(command.toStdString().c_str());

            QFile file(comp_filename);

            if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);

                line = in.readLine() + " | ";

                while (!in.atEnd()) {
                    res += in.readLine().toStdString() + " | ";
                }

                file.remove();

                file.close();

            }

            Detail::setManufacturer(QString().fromStdString(res));
        }

        QString GPU::toString() const
        {
            return getManufacturer();
        }

        QString GPU::type() const
        {
            return "gpu";
        }

    }
}
