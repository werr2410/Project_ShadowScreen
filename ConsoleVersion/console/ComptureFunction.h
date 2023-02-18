#ifndef COMPTUREFUNCTION_H
#define COMPTUREFUNCTION_H

#include <QString>
#include <QFile>

namespace ShadowScreen {

    namespace Compture {

        namespace Function {

            const QString techlogy = "wmic";
            const QString filename = "compture_file.txt";

            inline QString getCommand(QString type, QString inforamtion) {
                QString res = techlogy + " ";

                res += type + " get ";
                res += inforamtion;
                res += " >> " + filename;

                return res;
            }

            inline int removeFileIfReal(std::string filename, QFile file) {
                if (file.isOpen())
                    file.close();

                file.open(filename);

                if (file.is_open()) {
                    file.close();

                return remove(filename.c_str());
            }

                        return -1;
            }

            inline QString GetInformation(QString type, QString information) {
                QString command =  getCommand(type, information);


            }
        }
    }
}
#endif // COMPTUREFUNCTION_H
