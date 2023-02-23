#include "password.h"

namespace ShadowScreen {

    namespace UserData {

        Password::Password(QString password, QString key) {
            setPassword(password, key);
        }

        Password::Password() {
            this->password = " ";
        }

        void Password::setPassword(QString password, QString key) {
            std::string result = "";
            std::string _password = password.toStdString();
            std::string _key = key.toStdString();

            for (int i = 0; i < (int)_password.length(); i++) {
                char c = _password[i] ^ _key[i % _key.length()];
                result += c;
            }

            this->password = QString().fromStdString(result);
        }

        QString Password::getPassword() const {
            return this->password;
        }

        QString Password::getPassword(QString key) const {
            std::string result = "";
            std::string _password = password.toStdString();
            std::string _key = key.toStdString();

            for (int i = 0; i < (int)_password.length(); i++) {
                char c = _password[i] ^ _key[i % _key.length()];
                result += c;
            }

            return QString().fromStdString(result);
        }

        bool Password::isInvalid() const {
            return (password.isEmpty() == false);
        }

    }
}
