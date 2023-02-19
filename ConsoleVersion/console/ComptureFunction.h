#ifndef COMPTUREFUNCTION_H
#define COMPTUREFUNCTION_H

#include <QString>
#include <QFile>
#include <QTextStream>

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

            inline int removeFile(QString filename) {
                QFile file(filename);

                return file.remove();
            }

            inline QString getData(QString type, QString information) {
                QString command = getCommand(type, information);
                QString line = "";

                std::system(command.toStdString().c_str());

                QFile file(filename);

                if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                    QTextStream in(&file);

                    line = in.readLine();
                    line = in.readLine();

                    file.remove();

                    file.close();
                }

                return line;
            }
        }
    }
}
#endif // COMPTUREFUNCTION_H
