#include "dbobj.h"

namespace ShadowScreen {

    namespace Database {

        Dbobj::Dbobj(int id, QString table)
        {
            setId(id);
            setTable(table);
        }

        Dbobj::Dbobj(QString table):Dbobj(NULL,table){}


        Dbobj::Dbobj():Dbobj("unknown") {}


        void Dbobj::setTable(QString table)
        {
            this->table  = table;
        }

        void Dbobj::setId(int id) {
            if(id < 0)
                throw new Exception::DBFUNCIdisnegative();

            this->id = id;
        }

        int Dbobj::getId() const {
            return id;
        }

        QString Dbobj::getTable() const
        {
            return table;
        }
    }
}
