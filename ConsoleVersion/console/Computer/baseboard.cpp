#include "baseboard.h"

namespace ShadowScreen {

    namespace Computer {

        void ShadowScreen::Computer::Baseboard::setProduct(QString product) {
            if(product.isEmpty() == false)
                this->product = product;
        }

        Baseboard::Baseboard(bool isInit) : Detail(), DetailInfo(), Dbobj() {
            if(isInit)
                Baseboard::init();
            else
                (*this) = Baseboard();
        }

        Baseboard::Baseboard() : Detail(), DetailInfo(), Dbobj() {
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

        void Baseboard::insertToDatabase(QSqlDatabase &db) const {
            QSqlQuery query(db);

            query.prepare("exec addFullBaseboard :Manufacturer, :Product, :Description, :isSale, :Image, :Stars, :Status");
            query.bindValue(0, this->getManufacturer());
            query.bindValue(1, this->product);
            query.bindValue(2, this->getDescription());
            query.bindValue(3, this->getIsSale());

            QByteArray imageData;
            QBuffer buffer(&imageData);
            buffer.open(QIODevice::WriteOnly);
            this->getImage().save(&buffer, "PNG");

            query.bindValue(4, imageData);
            query.bindValue(5, this->getStars());
            query.bindValue(6, this->getStatus());

            query.exec();
        }

        void Baseboard::selectFromDatabase(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            query.prepare("select BaseboardId, Manufacturer, Product, Description, IsSale, Image, Stars, Status from Baseboard where id = :id");
            query.bindValue(0, id);

            query.exec();
            query.next();

            setId(query.value(0).toInt());
            setManufacturer(query.value(1).toString());
            setProduct(query.value(2).toString());
            setDescription(query.value(3).toString());
            setIsSale(query.value(4).toBool());

            QByteArray imageData = query.value(5).toByteArray();
            QPixmap image;
            QImage img;
            img.loadFromData(imageData);
            image = QPixmap::fromImage(img, Qt::AutoColor);

            setImage(image);
            setStars(query.value(6).toInt());
            setStatus(query.value(7).toString());
        }

        void Baseboard::alterToDatabase(QSqlDatabase &db, int id) const {
            QSqlQuery query(db);


        }

        void Baseboard::deleteFromDatabase(QSqlDatabase &db, int id) const {

        }

        int Baseboard::getIdFromDatabase(QSqlDatabase &db) const {

        }
    }
}
