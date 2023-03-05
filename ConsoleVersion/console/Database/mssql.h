#ifndef MSSQL_H
#define MSSQL_H

#include <QString>
#include <QSqlDatabase>
#include "Exception/exceptions.h"

namespace ShadowScreen {

    namespace Database {

        class MSSQL {
        private:
            QSqlDatabase db;

        protected:
            QString server;
            QString database;
            QString username;
            QString password;

            bool status;

            static QString getDriver();

        public:
            MSSQL(QString server, QString database, QString username, QString password);
            MSSQL();

            void setServer(QString server);
            void setDatabase(QString database);
            void setUsername(QString username);
            void setPassword(QString password);

            QString getServer() const;
            QString getDatabase() const;
            QString getUsername() const;
            QString getPassword() const;

            bool getStatus() const;

            void init();

            bool open();
            void close();

            void init(QString server, QString database, QString username, QString password);
            QString toString() const;
        };
    }
}

#endif // MSSQL_H
