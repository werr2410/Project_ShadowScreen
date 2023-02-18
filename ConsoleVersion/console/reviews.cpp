#include "reviews.h"

namespace ShadowScreen {

    namespace Data {

        Reviews::Reviews(QString title, QString description, int mark) {
            setTitle(title);
            setDescription(description);
            setMark(mark);
        }

        Reviews::Reviews(QString description, int mark)
            : Reviews(NULL, description, mark) { }

        Reviews::Reviews()
            : Reviews(NULL, NULL, 0) { }

        void Reviews::setTitle(QString title) {
            if(title.isEmpty() == false || title.isNull() == true) {
                this->title = title;
            } else {
                // exepction
            }
        }

        void Reviews::setDescription(QString description) {
            this->description = description;
        }

        void Reviews::setMark(int mark) {
            if(mark < mark_min)
                this->mark = mark_min;
            else if(mark > mark_max)
                this->mark = mark_max;
            else
                this->mark = mark;
        }

        void Reviews::setMark(short mark) {
            setMark((int)mark);
        }

        void Reviews::setMark(bool mark) {
            setMark((mark ? mark_max : mark_min));
        }

        QString Reviews::getTitle() const {
            return title;
        }

        QString Reviews::getDescription() const {
            return description;
        }

        int Reviews::getMark() const {
            return mark;
        }

        QString Reviews::getReviews() const {
            QString res = title + " ";

            res += description + " ";
            res += QString().setNum(mark);

            return res;
        }

        void Reviews::getReviews(QString &str, QString &description, int &mark) const {
            str = title;
            description = this->description;
            mark = this->mark;
        }

        void Reviews::getReviews(QString &description, int &mark) const {
            description = this->description;
            mark = this->mark;
        }

    }
}
