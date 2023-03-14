#include "cpu.h"

namespace ShadowScreen {

    namespace computer {
        void ShadowScreen::computer::CPU::setName(QString name) {
            if(name.isEmpty() == false)
                this->name = name;
        }

        CPU::CPU(bool isInit) {
            if(isInit)
                CPU::init();
            else
                (*this) = CPU();
        }

        CPU::CPU() : Detail()  {
            setName("unknown");
        }

        void CPU::setName() {
            setName(Detail::getDetail(CPU::type(), "Name"));
        }

        QString CPU::getName() const {
            return name;
        }

        void CPU::init() {
            setName();
            setManufacturer(CPU::type());
        }

        QString CPU::toString() const {
            return getName() + "$" + getManufacturer();
        }

        QString CPU::type() const {
            return "cpu";
        }

        void CPU::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            setId(id);

            query.prepare("select Manufacturer, Name, Description, IsSale, Image, Stars, Status from CPU where CPUId = :id");
            query.bindValue(0, id);

            query.exec(); query.next();

            setManufacturer(query.value(0).toString());
            setName(query.value(1).toString());

            DetailInfo::initFieldDb(query, 2);
        }

        void CPU::insertDataTable(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("exec SmartAddCPU :manufacturer, :name, :desc, :isSale, :Image, :Stars, :Status, :id");
            query.bindValue(0, getManufacturer());
            query.bindValue(1, getName());

            DetailInfo::bindValueDb(query, 2);

            query.bindValue(7, id);

            query.exec();
        }

        int CPU::getDataById(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("select CPUId from CPU where Manufacturer = :name and Name = :name");
            query.bindValue(0, getManufacturer());
            query.bindValue(1, getName());

            query.exec(); query.next();

            setId(query.value(0).toInt());

            return id;
        }
    }
}
