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

//            QByteArray byteArray = query.value(3).toByteArray();
//            QPixmap img; img.loadFromData(byteArray, "PNG");

            query.prepare("select Manufacturer, Product, Description, IsSale, Image, Stars, Status from Baseboard where BaseboardId = :id");
            query.bindValue(0, id);

            query.exec(); query.next();

            setManufacturer(query.value(0).toString());
            setProduct(query.value(1).toString());
            setDescription(query.value(2).toString());
        }

        void Baseboard::insertDataTable(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("exec SmartAddBaseboard :manufacturer, :product, :desc, :isSale, :image, :stars, :status, :id");

            QByteArray byteArray;
            QBuffer buffer(&byteArray);
            buffer.open(QIODevice::WriteOnly);
            getImage().save(&buffer, "PNG"); // сохранить в формате PNG

            query.bindValue(0, getManufacturer());
            query.bindValue(1, getProduct());
            query.bindValue(2, getDescription());
            query.bindValue(3, getIsSale());
            query.bindValue(4, byteArray);
            query.bindValue(5, getStars());
            query.bindValue(6, getStatus());
            query.bindValue(7, id);

            query.exec();

        }

        int Baseboard::getDataById(QSqlDatabase &db) const
        {

        }
    }
}
