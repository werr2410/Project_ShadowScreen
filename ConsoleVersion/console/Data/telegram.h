#ifndef TELEGRAM_H
#define TELEGRAM_H

#include <QString>
#include "Database/dbobj.h"

namespace ShadowScreen {

    namespace Data {

        using Database::Dbobj;

        class Telegram : public Dbobj {
            QString username;
            QString chatId;
            QString usercode;

        public:
            Telegram(QString username, QString chatId, QString usercode);
            Telegram();

            void setUsername(QString username);
            void setChatId(QString chatId);
            void setUsercode(QString usercode);

            QString getUsername() const;
            QString getChatId() const;
            QString getUsercode() const;

            void init(QString username, QString chatId, QString usercode);
            QString toString() const;

            bool selectDataById(QSqlDatabase& db,int id) override;
            void insertDataTable(QSqlDatabase& db) override;
            int  getDataById(QSqlDatabase& db) override;
        };
    }
}
#endif // TELEGRAM_H
