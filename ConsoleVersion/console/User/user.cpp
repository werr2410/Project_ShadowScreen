#include "user.h"

namespace ShadowScreen {

    namespace user {

    QString User::generateHashcode()
    {
        QString example = Numbers + Smallletters+ Bigletters+Magicchas;
        QString res ="";
        for(int i =0 ; i <32;i++)
        {
            res +=  example[std::rand()%example.length()];
        }
        return res;
    }

    User::User(QString Password, QString Username)
    {
        setPassword(Password);
        setUsername(Username);
        setName("Name");
        setMiddlename("Middlename");
        setSurname("Surname");
        setBirthday(QDate());
        setEmail("Email");
        setAdress(Adress());
        setComp(Computer(true));
        setStartUse(QDateTime().currentDateTime());
        setTelegram(Telegram());
        Hashcode = generateHashcode();

    }

    User::User():User(nologenuser,nologenuser) {}

    void User::setName(QString Name)
    {

    }

    void User::setSurname(QString Surname)
    {

    }

    void User::setMiddlename(QString Middlename)
    {

    }

    void User::setBirthday(QDate Birthday)
    {

    }

    void User::setStartUse(QDateTime StartUse)
    {

    }

    void User::setEmail(QString Email)
    {

    }

    void User::setPassword(QString Password)
    {

    }

    void User::setUsername(QString Username)
    {

    }

    void User::setComp(Computer Comp)
    {

    }

    QString User::getName() const
    {
        return Name;
    }

    QString User::getSurname() const
    {
        return Surname;
    }

    QString User::getMiddlename() const
    {
        return Middlename;
    }

    QDate User::getBirthday() const
    {
        return Birthday;
    }

    QDateTime User::getStartUse() const
    {
        return StartUse;
    }

    QString User::getEmail() const
    {
        return Email;
    }

    QString User::getPassword() const
    {
        return Password;
    }

    QString User::getUsername() const
    {
        return Username;
    }

    Computer User::getComp() const
    {
        return Comp;
    }

    Telegram User::getTelegram() const
    {
        return telegram;
    }

    Adress User::getAdress() const
    {
        return adress;
    }

    QString User::getHashcode() const
    {
        return Hashcode;
    }

    QString User::toString() const
    {

    }

    bool User::isValidBirthday() const
    {

    }

    bool User::isValidEmail() const
    {

    }

    bool User::isValidPassword() const
    {

    }

    bool User::isValidUsername() const
    {

    }


    }
}
