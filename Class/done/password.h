#ifndef PASSWORD_H
#define PASSWORD_H

#include <QString>
#include <string>

namespace ShadowScreen {

    namespace UserData {

        class Password {
        private:
            QString password;

        public:
            Password(QString password, QString key);
            Password();

            void setPassword(QString password, QString key);
            QString getPassword() const;
            QString getPassword(QString key) const;

            bool isInvalid() const;
        };
    }
}

#endif // PASSWORD_H
