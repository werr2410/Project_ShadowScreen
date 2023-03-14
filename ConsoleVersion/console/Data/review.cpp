#include "review.h"

namespace ShadowScreen {

    namespace Data {


    Review::Review(QString title, QString description, int mark)
    {
        setTitle(title);
        setDescription(description);
        setMark(mark);
    }

    Review::Review(QString description, int mark):Review("unknown",description,mark){}


    Review::Review():Review("unknown","unknown",0){}

    void Review::setTitle(QString title)
        {
            this->title = title;
        }

        void Review::setDescription(QString description)
        {
            this->description = description;
        }

        void Review::setMark(int mark)
        {
            this->mark = mark;
        }

        QString Review::getTitle() const
        {
            return title;
        }

        QString Review::getDescription() const
        {
            return description;
        }

        int Review::getMark() const
        {
            return mark;
        }

        QString Review::toString() const
        {
             return title + "|" + description + "|" + QString().setNum(mark) ;
        }

        void Review::init(QString title, QString description, int mark)
        {
            (*this) = Review(title, description, mark);
        }

        void Review::init(QString description, int mark)
        {
            (*this) = Review(description, mark);
        }

        void Review::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            setId(id);

            query.prepare("select [Description], Mark from Reviews where ReviewsId = :id");
            query.bindValue(0, id);

            query.exec(); query.next();

            setTitle("no data");
            setDescription(query.value(0).toString());
            setMark(query.value(1).toInt());
        }

        void Review::insertDataTable(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("exec  SmartAddReview :Description, :mark, :id");
            query.bindValue(0, description);
            query.bindValue(1, mark);
            query.bindValue(2, id);

            query.exec();
        }

        int Review::getDataById(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("select ReviewsId from Reviews where [Description] = :desc and Mark = :mark");

            query.bindValue(0, description);
            query.bindValue(1, mark);

            query.exec(); query.next();

            setId(query.value(0).toInt());

            return id;
        }

        bool Review::operator==(const Review &rhs) const
        {
            return toString() == rhs.toString();
        }

        bool Review::operator!=(const Review &rhs) const
        {
            return toString() != rhs.toString();
        }

        bool Review::operator<(const Review &rhs) const
        {
            if(rhs.mark > mark) return true;
                else return false;
        }

        bool Review::operator>(const Review &rhs) const
        {
            return  rhs < *this;
        }

        bool Review::operator<=(const Review &rhs) const
        {
            if(rhs.mark >= mark) return true;
                else return false;
        }

        bool Review::operator>=(const Review &rhs) const
        {
             return  rhs <= *this;
        }
    }
}
