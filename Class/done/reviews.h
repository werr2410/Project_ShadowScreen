#ifndef REVIEWS_H
#define REVIEWS_H

#pragma once
#include <QString>

namespace ShadowScreen {

    namespace Data {

        const int mark_min = 0;
        const int mark_max = 100;

        class Reviews {
        protected:
            QString title;
            QString description;
            int mark;

        public:
            Reviews(QString title, QString description, int mark);
            Reviews(QString description, int mark);
            Reviews();

            void setTitle(QString title);
            void setDescription(QString description);

            void setMark(int mark);
            void setMark(short mark);
            void setMark(bool mark);

            QString getTitle() const;
            QString getDescription() const;
            int getMark() const;

            QString getReviews() const;
            void getReviews(QString& str, QString& description, int& mark) const;
            void getReviews(QString& description, int& mark) const;
        };

    }
}
#endif // REVIEWS_H
