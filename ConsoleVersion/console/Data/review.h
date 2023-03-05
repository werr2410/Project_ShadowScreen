#ifndef REVIEW_H
#define REVIEW_H
#include <QString>

namespace ShadowScreen {

    namespace Data {

        class Review
        {
        //fields
            QString title;
            QString description;
            int mark;
        public:
        //constructs
            Review(QString title, QString description, int mark);
            Review(QString description, int mark);
            Review();

        //methods
            void setTitle(QString title);
            void setDescription(QString description);
            void setMark(int mark);
            QString getTitle() const;
            QString getDescription() const;
            int getMark() const;
            QString toString() const;

        //overload methods
            void init(QString title, QString description, int mark);
            void init(QString description, int mark);

        //overload operators
            Review &operator =(const Review& obj);
            bool operator==(const Review &rhs) const;
            bool operator!=(const Review &rhs) const;
            bool operator<(const Review &rhs) const;
            bool operator>(const Review &rhs) const;
            bool operator<=(const Review &rhs) const;
            bool operator>=(const Review &rhs) const;
        /*operator != - mark, description, title
            operator == - mark, description, title
            operator > - mark
            operator >= - mark
            operator < - mark
            operator <= - mark*/
        };
    }
}
#endif // REVIEW_H
