#include "gpu.h"

namespace ShadowScreen {

    namespace computer {

        GPU::GPU(bool isInit) : Detail(), DetailInfo(), Dbobj() {
            if(isInit)
                GPU::init();
        }

        GPU::GPU() : Detail() { }

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

        void GPU::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            query.prepare("select Manufacturer, [Description], IsSale, [Image], Stars, [Status] from GPU where GPUId = :id");

            query.bindValue(0, id);

            query.exec(); query.next();

            setManufacturers(query.value(0).toString());

            DetailInfo::initFieldDb(query, 1);

        }

        void GPU::insertDataTable(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("exec SmartAddGPU :manufacturer, :description, :isSale, :Image, :Stars, :Status, :id");
            query.bindValue(0, getManufacturer());

            DetailInfo::bindValueDb(query, 1);

            query.bindValue(6, id);

            query.exec();
        }

        int GPU::getDataById(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("select GPUId from GPU where Manufacturer = :manu and [Description] = :Desc and IsSale = :isSale and Stars = :Stars");

            query.bindValue(0, getManufacturer());
            query.bindValue(1, getDescription());
            query.bindValue(2, getIsSale());
            query.bindValue(3, getStars());

            query.exec(); query.next();

            return query.value(0).toInt();
        }
    }
}
