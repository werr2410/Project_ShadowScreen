#include "mssql.h"

namespace ShadowScreen {

    namespace Database {

        QString MSSQL::getDriver() {
            return "QODBC";
        }

        MSSQL::MSSQL(QString server, QString database, QString username, QString password)
            : MSSQL() {
            setServer(server);
            setDatabase(database);
            setUsername(username);
            setPassword(password);
        }

        MSSQL::MSSQL()
        {
            db = QSqlDatabase::addDatabase(getDriver());
        }

        void MSSQL::setServer(QString server) {
            if(status)
                throw new Exception::MSSQLConnectedExecption();

            if(server.isEmpty())
                throw new Exception::MSSQLCloseData();

            this->server = server;
        }

        void MSSQL::setDatabase(QString database) {
            if(status)
                throw new Exception::MSSQLConnectedExecption();

            if(database.isEmpty())
                throw new Exception::MSSQLCloseData();

            this->database = database;
        }

        void MSSQL::setUsername(QString username) {
            if(status)
                throw new Exception::MSSQLConnectedExecption();

            if(username.isEmpty())
                throw new Exception::MSSQLCloseData();

            this->username = username;
        }

        void MSSQL::setPassword(QString password) {
            if(status)
                throw new Exception::MSSQLConnectedExecption();

            if(password.isEmpty())
                throw new Exception::MSSQLCloseData();

            this->password = password;
        }

        QString MSSQL::getServer() const {
            return server;
        }

        QString MSSQL::getDatabase() const {
            return database;
        }

        QString MSSQL::getUsername() const {
            return username;
        }

        QString MSSQL::getPassword() const {
            return password;
        }

        bool MSSQL::getStatus() const {
            return status;
        }

        void MSSQL::init() {
            db.setDatabaseName(toString());
            db.setUserName(username);
            db.setPassword(password);
        }

        bool MSSQL::open() {
            status = db.open();

            return status;
        }

        void MSSQL::close() {
            db.close();
        }

        void MSSQL::init(QString server, QString database, QString username, QString password) {
            setServer(server);
            setDatabase(database);
            setUsername(username);
            setPassword(password);
        }

        QString MSSQL::toString() const {
            //DRIVER={SQL Server};SERVER=DESKTOP-TDHSHRS\\NEWSQL2;DATABASE=bankcard

            QString res = "DRIVER={SQL Server};SERVER=" + server + ";DATABASE=" + database;

            return res;
        }
    }
}
