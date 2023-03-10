#ifndef REVIEW_H
#define REVIEW_H
#include <QString>

namespace ShadowScreen {

    namespace Data {

        class Review {
            QString title;
            QString description;
            int mark;
        public:
            Review(QString title, QString description, int mark);
            Review(QString description, int mark);
            Review();

            void setTitle(QString title);
            void setDescription(QString description);
            void setMark(int mark);
            QString getTitle() const;
            QString getDescription() const;
            int getMark() const;
            QString toString() const;

            void init(QString title, QString description, int mark);
            void init(QString description, int mark);

            bool operator==(const Review &rhs) const;
            bool operator!=(const Review &rhs) const;
            bool operator<(const Review &rhs) const;
            bool operator>(const Review &rhs) const;
            bool operator<=(const Review &rhs) const;
            bool operator>=(const Review &rhs) const;
        };
    }
}
#endif // REVIEW_H
