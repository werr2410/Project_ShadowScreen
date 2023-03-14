#include "storage.h"

namespace ShadowScreen {

    namespace computer {

        void ShadowScreen::computer::Storage::setModel(QString model) {
            if(model.isEmpty() == false)
                this->model = model;
        }

        void Storage::setSize(QString size) {
            if(size.isEmpty() == false)
                this->size = size;
        }

        Storage::Storage(bool isInit) {
            if(isInit)
                Storage::init();
            else
                (*this) = Storage();
        }

        Storage::Storage() {
            setSize("unknown");
            setModel("unknown");
        }

        void Storage::setModel() {
            setModel(Detail::getDetail(Storage::type(), "Model"));
        }

        void Storage::setSize() {
            setSize(Detail::getDetail(Storage::type(), "Size"));
        }

        QString Storage::getModel() const {
            return model;
        }

        QString Storage::getSize() const {
            return size;
        }

        void Storage::init() {
            setManufacturer(Storage::type());
            setModel();
            setSize();
        }

        QString Storage::toString() const {
            return getManufacturer() + "$" + getModel() + "$" + getSize();
        }

        QString Storage::type() const {
            return "diskdrive";
        }

        bool Storage::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            setId(id);

            query.prepare("select Manufacturer, Model, Size, Description, IsSale, Image, Stars, Status from Storage where StorageId = :id");
            query.bindValue(0, id);

            query.exec();

            if(isFind(query) == false) return false;

            query.next();

            setManufacturer(query.value(0).toString());
            setModel(query.value(1).toString());
            setSize(query.value(2).toString());

            DetailInfo::initFieldDb(query, 3);

            return true;
        }

        void Storage::insertDataTable(QSqlDatabase &db){
            QSqlQuery query(db);

            query.prepare("exec SmartAddStorage :manufacturer, :model, :size, :desc, :isSale, :image, :stars, :status, :id");

            query.bindValue(0, getManufacturer());
            query.bindValue(1, getModel());
            query.bindValue(2, getSize());

            DetailInfo::bindValueDb(query, 3);

            query.bindValue(8, getId());

            query.exec();
        }

        int Storage::getDataById(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("select StorageId from Storage where Manufacturer = :manufacturer and Model = :model and Size = :size");
            query.bindValue(0, getManufacturer());
            query.bindValue(1, getModel());
            query.bindValue(2, getSize());

            query.exec();

            if(isFind(query) == false) return -1;

            query.next();

            setId(query.value(0).toInt());

            return getId();
        }

    }
}

