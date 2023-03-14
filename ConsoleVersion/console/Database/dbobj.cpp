#include "dbobj.h"

namespace ShadowScreen {

    namespace Database {

        bool Dbobj::isFind(QSqlQuery &query) const {
            if(query.size() <= 0)
                return true;
            else
                return false;
        }

        Dbobj::Dbobj(int id) {
            setId(id);
        }

        Dbobj::Dbobj() : Dbobj(0){}

        void Dbobj::setId(int id) {
            if(id < 0)
                throw new Exception::DBFUNCIdisnegative();

            this->id = id;
        }

        int Dbobj::getId() const {
            return id;
        }

        void Dbobj::dropDataById(QSqlDatabase &db, int id)
        {
            // dsfsdfsdfsdfsdfsdfsdfsdfsdfsdfdsfsdfsdfdsf
        }
    }
}
