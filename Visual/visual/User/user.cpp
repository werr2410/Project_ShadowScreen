#include "user.h"

namespace ShadowScreen {

    namespace user {

        QString User::generateHashcode() {
            QRandomGenerator random;

            QString str = getFullString();
            QString res = "";

            for(int i = 0; i < LENGHT_HASHCODE; i++)
                res += str[random.bounded(str.length() - 1)];

            return res;
        }

        QString User::getFullString() {
            return QString("1234567890")                    +
                   QString("qwertyuiopasdfghjklzxcvbnm")    +
                   QString("QWERTYUIOPASDFGHJKLZXCVBNM")    +
                   QString("!@#$%^&*()[]{}|?/.,;:-+=_~`");
        }

        void User::setHashcode(QString code) {
            if(isUniqueHashcode(code) && code.length() == LENGHT_HASHCODE)
                this->hashcode = code;
            else
                setHashcode(generateHashcode());
        }

        void User::setStartUse(QDateTime datetime) {
            // no logic
            this->startUse = datetime;
        }

        User::User(QString username, QString password) {
            setUsername(username);
            setPassword(password);
            setName("unknown");
            setSurname("unknown");
            setMiddlename("unknown");
            setHashcode(ShadowScreen::user::User::generateHashcode());
            setStartUse(QDateTime().currentDateTime());
            setAdress(Adress());
            setBirthDay(QDate().currentDate());
            setComputer(ShadowScreen::computer::Computer(true));
            setEmail("unk@now.n");
            setTelegram(ShadowScreen::Data::Telegram());
        }

        User::User() : User(NO_LOGIN_USER, NO_LOGIN_USER) { }

        void User::setName(QString name) {
            if(name.isEmpty())
                throw new Exception::UserDataInvalidException();

            this->name = name.trimmed();
        }

        void User::setSurname(QString surname) {
            if(surname.isEmpty())
                throw new Exception::UserDataInvalidException();

            this->surname = surname.trimmed();
        }

        void User::setMiddlename(QString middlename) {
            if(middlename.isEmpty())
                throw new Exception::UserDataInvalidException();

            this->middlename = middlename.trimmed();
        }

        void User::setEmail(QString email) {
            if(isInvalidEmail(email) == false || isUniqueEmail(email) == false)
                throw new Exception::UserDataInvalidException();

            this->email = email.trimmed();
        }

        void User::setPassword(QString password) {
            if(password.isEmpty())
                throw new Exception::UserDataInvalidException();

            // дело пользователя

            this->password = password;
        }

        void User::setUsername(QString username) {
            if(username.isEmpty())
                throw new Exception::UserDataInvalidException();

            this->username = username;
        }

        void User::setBirthDay(QDate birthday) {
            this->birthday = birthday;
        }

        void User::addHashcode() {
            setHashcode("");
        }

        void User::setComputer(Computer computer) {
            this->computer = computer;
        }

        void User::setTelegram(Telegram telegem) {
            this->telegram = telegem;
        }

//        void User::setDatabase(MSSQL database) {
//            this->database = database;
//        }

        void User::setAdress(Adress adress) {
            this->adress = adress;
        }

        void User::setDelivery(QVector<Delivery> delivery) {
            this->delivery = delivery;
        }

        void User::setBankcard(QVector<Bankcard> bankcard) {
            this->bankcard = bankcard;
        }

        void User::setReviews(QList<Review> reviews) {
            this->review = reviews;
        }

        void User::setChat(QVector<Chat> chat) {
            this->chat = chat;
        }

        QString User::getName() const {
            return name;
        }

        QString User::getSurname() const {
            return surname;
        }

        QString User::getMiddlename() const {
            return middlename;
        }

        QString User::getEmail() const {
            return email;
        }

        QString User::getPassword() const {
            return password;
        }

        QString User::getUsername() const {
            return username;
        }

        QString User::getHashcode() const {
            return hashcode;
        }

        Telegram User::getTelegram() const {
            return telegram;
        }

        QDate User::getBirthday() const {
            return birthday;
        }

        QDateTime User::getStartUse() const {
            return startUse;
        }

        Computer User::getComputer() const {
            return computer;
        }

        QVector<Delivery> User::getDelivery() const {
            return delivery;
        }

        QVector<Bankcard> User::getBankcard() const {
            return bankcard;
        }

        QList<Review> User::getReview() const {
            return review;
        }

        QVector<Chat> User::getChat() const {
            return chat;
        }

        int User::getAmountDelivery() const {
            return delivery.length();
        }

        int User::getAmountBankcard() const {
            return bankcard.length();
        }

        void User::pushBankcard(Bankcard bankcard) {
            if(this->bankcard.length() + 1 > MAX_COUNT_BANKCARD)
                throw new Exception::BiggestArrayInvalidException();

            this->bankcard.push_back(bankcard);
        }

        void User::pushDelivery(Delivery delivery) {
            if(this->delivery.length() + 1 > MAX_COUNT_DELIVERY)
                throw new Exception::BiggestArrayInvalidException();

            this->delivery.push_back(delivery);
        }

        void User::pushChat(Chat chat) {
            this->chat.push_back(chat);
        }

        void User::eraseBankcard(Bankcard bankcard) {
            QVector<Bankcard>::Iterator it;

            for(it = this->bankcard.begin(); it != this->bankcard.end(); it++) {
                if(it->toString() == bankcard.toString()) {
                    this->bankcard.erase(it);
                    break;
                }
            }
        }

        void User::eraseDelivery(Delivery delivery) {
            QVector<Delivery>::Iterator it;

            for(it = this->delivery.begin(); it != this->delivery.end(); it++) {
                if(it->toString() == delivery.toString()) {
                    this->delivery.erase(it);
                    break;
                }
            }
        }

        bool User::isInvalidEmail(QString email) {
            bool hasAtSign = false;
            bool hasPeriod = false;

            int atSignIndex = -1;
            int periodIndex = -1;

            // проверяем каждый символ в строке
            for (int i = 0; i < email.length(); i++) {
                QChar c = email[i];

                if (i == 0 && (c == '.' || c == '@'))
                    return false;

                if (c == '@') {

                    // если символ "@" уже был найден
                    if (hasAtSign)
                        return false;

                    hasAtSign = true;
                    atSignIndex = i;
                }

                // проверяем, есть ли символ "." в адресе электронной почты
                if (c == '.') {

                    // если символ "." уже был найден
                    if (hasPeriod)
                        return false;

                    hasPeriod = true;
                    periodIndex = i;
                }
            }

            // адрес электронной почты должен иметь хотя бы один символ до и после символа "@"
            if (!hasAtSign || !hasPeriod || atSignIndex == 0 ||
                periodIndex == email.length() - 1 || atSignIndex > periodIndex)
                return false;

            return true;
        }

        bool User::isInvalidPassword(QString password) {
            if (password.length() < 8)
                return false;

            bool hasLowercase = false;
            bool hasUppercase = false;
            bool hasDigit = false;

            for (QChar c : password) {

                if (c.isLower())
                    hasLowercase = true;

                if (c.isUpper())
                    hasUppercase = true;

                if (c.isDigit())
                    hasDigit = true;
            }

            return hasLowercase && hasUppercase && hasDigit;
        }

        User User::quickRegistration(const QDir& dir) {
            User user;

            user.setUsername(generationUsername());
            user.setPassword(generationPassword());

            // Создаем файл в указанном каталоге
            QString fileName = user.getUsername() + ".txt";

            QFile file(dir.filePath(fileName));

            if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                qDebug() << "FILE DONT OPEN";
            }

            // Записываем логин и пароль в файл
            QTextStream out(&file);

            out << "Login: " << user.getUsername() << Qt::endl;
            out << "Password: " << user.getPassword() << Qt::endl;

            file.close();

            return user;
        }


        QString User::generationUsername() {
            QString validChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
            QString username;

            for (int i = 0; i < LENGHT_USERNAME; i++) {
                int randomIndex = QRandomGenerator::global()->bounded(validChars.length());
                QChar randomChar = validChars[randomIndex];

                username.append(randomChar);
            }

            return username;
        }

        QString User::generationPassword() {
            const int length = 16;

            QString validChars = getFullString();
            QString password;

            for (int i = 0; i < length; i++) {
                int randomIndex = QRandomGenerator::global()->bounded(validChars.length());
                QChar randomChar = validChars[randomIndex];

                password.append(randomChar);
            }

            return password;
        }

        bool User::isUniqueUsername(QString username) {
            bool res = true;
            // database
            return res;
        }

        bool User::isUniqueEmail(QString email) {
            bool res = true;
            // database
            return res;
        }

        bool User::isUniqueHashcode(QString code) {
            bool res = true;
            // database
            return res;
        }
    }
}
