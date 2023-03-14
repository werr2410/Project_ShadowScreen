#include "memorychip.h"

namespace ShadowScreen {

    namespace computer {

        void ShadowScreen::computer::Memorychip::setCapacity(QString Capacity) {
            if(Capacity.isEmpty() == false)
                this->Capacity = Capacity;
        }

        Memorychip::Memorychip(bool isInit) {
            if(isInit)
                Memorychip::init();
            else
                (*this) = Memorychip();
        }

        Memorychip::Memorychip() {
            setCapacity("unknown");
        }

        void Memorychip::setCapacity() {
            setCapacity(getDetail(Memorychip::type(), "Capacity"));
        }

        QString Memorychip::getCapacity() const {
            return Capacity;
        }

        void Memorychip::init() {
            setManufacturer(Memorychip::type());
            setCapacity();
        }

        QString Memorychip::toString() const {
            return getManufacturer() + "$" + getCapacity();
        }

        QString Memorychip::type() const {
            return "Memorychip";
        }

        void Memorychip::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            setId(id);

            query.prepare("select Manufacturer, Capacity, Description, IsSale, Image, Stars, Status from Memorychip where MemorychipId = :id");
            query.bindValue(0, id);

            query.exec(); query.next();

            setManufacturer(query.value(0).toString());
            setCapacity(query.value(1).toString());

            DetailInfo::initFieldDb(query, 2);
        }

        void Memorychip::insertDataTable(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("exec SmartAddMemorychip :manufacturer, :capacity, :Description, :isSale, :image, :stars, :status, :id");
            query.bindValue(0, getManufacturer());
            query.bindValue(1, getCapacity());
            query.bindValue(2, getCapacity());

            DetailInfo::bindValueDb(query, 3);

            query.bindValue(7, id);

            query.exec();
        }

        int Memorychip::getDataById(QSqlDatabase &db)
        {
            QSqlQuery query(db);

            query.prepare("select MemorychipId from Memorychip where Manufacturer = :manufacturer and Capacity = :Capacity");
            query.bindValue(0, getManufacturer());
            query.bindValue(1, getCapacity());

            query.exec(); query.next();

            setId(query.value(0).toInt());

            return id;
        }

    }
}
