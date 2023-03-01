#include "detail.h"

namespace ShadowScreen {

    namespace Computer {

        QString Detail::getCommand(QString detail) {
            QString res = "wmic "; // wmic "type" get list full

            res += detail + " ";
            res += "list full ";
            res += ">> ";
            res += comp_filename;

            return res;
        }

        bool Detail::SearchString(QString left, QString right) {
            return (std::strstr(left.toStdString().c_str(), right.toStdString().c_str()) != NULL);
        }

        Detail::Detail(QString manufacturer) {
            this->manufacturer = manufacturer;
        }

        void Detail::setPrivateManufacturer(QString manufacturer) {
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

                    if(SearchString(line, detail)) {
                        QStringList list = line.split("=");

                        res += list[list.length() - 1].toStdString() + betweenString;
                    }
                }

                file.remove();

                file.close();
            } else {
                qDebug() << "file dont open \n";
            }

            return QString(res.c_str());
        }

        Detail::Detail()
        {
            setPrivateManufacturer("detail dont have manufacturer/s");
        }

        void Detail::setManufacturer(QString typeDetail)
        {
            setPrivateManufacturer(typeDetail);
        }

        QString Detail::getManufacturer() const
        {
            return manufacturer;
        }

    }

}
