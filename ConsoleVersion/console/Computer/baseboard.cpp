#include "baseboard.h"

namespace ShadowScreen {

    namespace computer {

        void ShadowScreen::computer::Baseboard::setProduct(QString product) {
            if(product.isEmpty() == false)
                this->product = product;
        }

        Baseboard::Baseboard(bool isInit) : Detail(), DetailInfo() {
            if(isInit)
                Baseboard::init();
            else
                (*this) = Baseboard();
        }

        Baseboard::Baseboard() : Detail(), DetailInfo() {
            setProduct("unkown");
        }

        void Baseboard::setProduct() {
            setProduct(Detail::getDetail(Baseboard::type(), "Product"));
        }

        QString Baseboard::getProduct() const {
            return product;
        }

        void Baseboard::init() {
            setManufacturer();
            setProduct();
        }

        QString Baseboard::toString() const {
            return getManufacturer() + "$" + getProduct();
        }

        QString Baseboard::type() const {
            return "baseboard";
        }

        void Baseboard::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            query.prepare("select Manufacturer, Product, Description, IsSale, Image, Stars, Status from Baseboard where BaseboardId = :id");
            query.bindValue(0, id);

            query.exec(); query.next();

            setManufacturer(query.value(0).toString());
            setProduct(query.value(1).toString());

            DetailInfo::initFieldDb(query, 2);
        }

        void Baseboard::insertDataTable(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("exec SmartAddBaseboard :manufacturer, :product, :desc, :isSale, :image, :stars, :status, :id");

            query.bindValue(0, getManufacturer());
            query.bindValue(1, getProduct());

            DetailInfo::bindValueDb(query, 2);

            query.bindValue(7, id);

            query.exec();

        }

        int Baseboard::getDataById(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("select BaseboardId from Baseboard where Manufacturer = :manufacturer and Product = :Product");
            query.bindValue(0, getManufacturer());
            query.bindValue(1, getProduct());

            query.exec(); query.next();

            return query.value(0).toInt();
        }
    }
}
