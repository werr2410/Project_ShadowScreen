#include "dbobj.h"

namespace ShadowScreen {

    namespace Database {

        void Dbobj::setId(int id) {
            if(id <= 0)
                throw new Exception::DBFUNCIdisnegative();

            this->id = id;
        }

        int Dbobj::getId() const {
            return id;
        }
    }
}
