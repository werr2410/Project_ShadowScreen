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
