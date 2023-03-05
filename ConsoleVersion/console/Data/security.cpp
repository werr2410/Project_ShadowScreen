#include "security.h"

namespace ShadowScreen {

    namespace Securitys {

        QString Security::getField(QString field) {
            QString result = "";
            QString key = Securitys::SecurityKey;

            int data_length = field.size();
            int key_length = key.size();

            for (int i = 0; i < data_length; i++)
                result += QChar((field.toStdString())[i] ^ (key.toStdString())[i % key_length]);

            return result;
        }
    }
}
