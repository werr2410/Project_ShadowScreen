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
            if(code.length() == LENGHT_HASHCODE)
                this->hashcode = code;
            else
                setHashcode(generateHashcode());
        }

        void User::setStartUse(QDateTime datetime) {
            // no logic
            this->startUse = datetime;
        }

        User::User(QString username, QString password) {
            // hard logic
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
            if(isInvalidEmail(email) == false)
                throw new Exception::UserDataInvalidException();

            this->email = email.trimmed();
        }

        void User::setPassword(QString password) {
            if(password.isEmpty() || password.isEmpty())
                throw new Exception::UserDataInvalidException();

            // дело пользователя

            this->password = password;
        }

        void User::setUsername(QString username) {
            if(password.isEmpty())
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

        void User::setDatabase(MSSQL database) {
            this->database = database;
        }

        void User::setAdress(Adress adress) {
            this->adress = adress;
        }

        void User::setDelivery(QVector<Delivery> delivery) {
            if(delivery.length() > MAX_COUNT_DELIVERY)
                throw new Exception::BiggestArrayInvalidException();

            this->delivery = delivery;
        }

        void User::setBankcard(QVector<Bankcard> bankcard) {
            if(bankcard.length() > MAX_COUNT_BANKCARD)
                throw new Exception::BiggestArrayInvalidException();

            this->bankcard = bankcard;
        }

        void User::setReviews(QList<Review> reviews) {
            this->review = reviews;
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

        bool User::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            query.prepare("select Username, Name, Surname, Middlename, NumberPhone, Birthday, StartUse, Hashcode, Email, Passport, ComputerId, TelegramId, AdressId from [user] where UserId = :id");
            query.bindValue(0, getId() == -1 ? getDataById(db) : getId());
            query.exec();

            if(isFind(query) == false) return false;

            setUsername(query.value(0).toString());
            setName(query.value(1).toString());
            setSurname(query.value(2).toString());
            setMiddlename(query.value(3).toString());
            setNumberphone(query.value(4).toString());
            setBirthDay(query.value(5).toDate());
            setStartUse(query.value(6).toDateTime());
            setHashcode(query.value(7).toString());
            setEmail(query.value(8).toString());
            setPassword(query.value(9).toString());

            int computerId = query.value(10).toInt();
            int telegramId = query.value(11).toInt();
            int adressId = query.value(12).toInt();

            if(computer.selectDataById(db, computerId) == false)
                computer.insertDataTable(db);

            if(telegram.selectDataById(db, telegramId) == false)
                telegram.insertDataTable(db);

            if(adress.selectDataById(db, adressId) == false)
                adress.insertDataTable(db);

            // bankcard - start
            QSqlQuery q(db);
            Bankcard bc;

            q.prepare("SELECT b.Title, b.Number, b.ExpirationDate FROM bankcard b JOIN FK_User_Bankcard f ON f.BankcardId = b.BankcardId JOIN [User] u ON u.UserId = f.UserId WHERE u.UserId = :id;");
            q.bindValue(0, getId());

            if(q.exec()) {
                bankcard.clear();

                while(q.next()) {
                    bc.setTitle(q.value(0).toString());
                    bc.setNumber(q.value(1).toString());
                    bc.setExpirationDate(q.value(2).toDate());

                    bankcard.push_back(bc);
                }
            }

            q.clear();
            // bankcard - end

            // delivery -  start
            q.prepare("SELECT d.DeliveryId FROM Delivery d  JOIN FK_User_Delivery ud ON d.DeliveryId = ud.DeliveryId  JOIN [User] u ON u.UserId = ud.UserId  WHERE u.UserId = id;");
            q.bindValue(0, getId());

            if(q.exec()) {
                delivery.clear();

                while(q.next()) {
                    Delivery deliv;

                    deliv.selectDataById(db, query.value(0).toInt());

                    delivery.push_back(deliv);
                }
            }
            q.clear();
            // delivey - end

            // review - start
            q.prepare("SELECT r.Mark FROM Reviews r JOIN FK_User_Reviews f ON r.ReviewsId = f.ReviewsId JOIN [user] u ON u.UserId = f.UserId WHERE u.UserId = :id;");
            q.bindValue(0, getId());

            if(q.exec()) {
                review.clear();

                while(q.next()) {
                    Review rew;

                    rew.selectDataById(db, query.value(0).toInt());

                    review.push_back(rew);
                }
            }

            q.clear();
            // review - end

            return true;
        }

        void User::insertDataTable(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("exec SmartAddUser :username, :Name:, :surname:, :Middlename, :numberphone, :birthday, :startUse, :hashcode, :email, :password, :ComputerId, :TelegramId, :AdressId, :id");

            query.bindValue(0, username);
            query.bindValue(1, name);
            query.bindValue(2, surname);
            query.bindValue(3, middlename);
            query.bindValue(4, numberphone);
            query.bindValue(5, birthday);
            query.bindValue(6, startUse);
            query.bindValue(7, hashcode);
            query.bindValue(8, email);
            query.bindValue(9, password);

            // adress - start
            int tmpId = adress.getDataById(db);

            if(tmpId != -1)
                query.bindValue(10, tmpId);
            else {
                adress.insertDataTable(db);
                query.bindValue(10, adress.getId());
            }
            // Adress - end


            // Telegram - start
            tmpId = telegram.getDataById(db);

            if(tmpId != -1)
                query.bindValue(11, tmpId);
            else {
                telegram.insertDataTable(db);
                query.bindValue(11, telegram.getId());
            }
            // telgram - end

            // computer - start
            tmpId = computer.getDataById(db);

            if(tmpId != -1)
                query.bindValue(12, tmpId);
            else {
                computer.insertDataTable(db);
                query.bindValue(12, computer.getId());
            }
            // computer - end

            // bankcard - start
            QSqlQuery UBQuery(db);

            for(int i = 0; i < bankcard.length(); i++) {

                UBQuery.prepare("exec SmartAddBancardFK :user, :bankcard");

                // user - start
                UBQuery.bindValue(0, getId());
                // user - end

                // bankcard - start

                int tmpid1 = bankcard[i].getDataById(db);

                if(tmpid1 != -1)
                    UBQuery.bindValue(1, tmpid1);
                else {
                    bankcard[i].insertDataTable(db);
                    UBQuery.bindValue(1, bankcard[i].getId());
                }
                // bankcard - end

                UBQuery.exec();
                UBQuery.clear();
            }
            // bankcard - end

            // delivery - start
            for(int i = 0; i < delivery.length(); i++)  {
                UBQuery.prepare("exec SmartAddDeliveryFK :user, :delivery");

                // user - start
                UBQuery.bindValue(0, getId());
                // user - end

                // delivery - start
                int tmpid1 = delivery[i].getDataById(db);

                if(tmpid1 != -1)
                    UBQuery.bindValue(1, tmpid1);
                else {
                    delivery[i].insertDataTable(db);
                    UBQuery.bindValue(1, delivery[i].getId());
                }
                // delivery - end

                UBQuery.exec();
                UBQuery.clear();
            }
            // delivery - end

            // review - start
            for(int i = 0; i < review.length(); i++) {
                UBQuery.prepare("exec SmartAddReviewFK :user, :review");
                UBQuery.bindValue(1, getId());

                // user - start
                UBQuery.bindValue(0, getId());
                // user - end

                // review - start
                int tmpid1 = review[i].getDataById(db);

                if(tmpid1 != -1)
                    UBQuery.bindValue(1, tmpid1);
                else {
                    review[i].insertDataTable(db);
                    UBQuery.bindValue(1, review[i].getId());
                }
                // review - end

                UBQuery.exec();
                UBQuery.clear();
            }
            // review - end

            query.bindValue(13, getId());

            query.exec();
        }

        int User::getDataById(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("select UserId from [User] where Username = :username and Passport = :password");
            query.bindValue(0, username);
            query.bindValue(1, password);

            query.exec();

            if(isFind(query) == false) return -1;

            query.next();

            setId(query.value(0).toInt());

            return getId();
        }
    }
}
