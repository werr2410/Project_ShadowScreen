#ifndef COMPTUREFUNCTION_H
#define COMPTUREFUNCTION_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <iostream>

namespace ShadowScreen {

    namespace Compture {

        namespace Function {

            const QString techlogy = "wmic";
            const QString filename = "compture_file.txt";
            const QString tmpfilename = "compture_file1.txt";

            inline int countDetail(QString command) {
                QString tmpline= "";
                int count = 0;

                system(command.toStdString().c_str());

                QFile file(tmpfilename);


                if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                    QTextStream in(&file);

                    do {
                        tmpline = in.readLine();

                        count++;
                    } while(tmpline != "");

                    file.remove();

                    file.close();
                }

                return count;
            }



            inline QString getCommand(QString type, QString inforamtion) {
                QString res = techlogy + " ";

                res += type + " get ";
                res += inforamtion;
                res += " >> " + filename;

                return res;
            }

            inline QString getCommand(QString type, QString inforamtion, QString tfilename) {
                QString res = techlogy + " ";

                res += type + " get ";
                res += inforamtion;
                res += " >> " + tfilename;

                return res;
            }

            inline int removeFile(QString filename) {
                QFile file(filename);

                return file.remove();
            }

            inline QVector<QString> getDataVector(QString type, QString information) {
                QVector<QString> res;
                QString command = getCommand(type, information);

                std::system(command.toStdString().c_str());

                QFile file(filename);

                if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                    QTextStream in(&file);

                    in.readLine();

                    for(int i = 0; i < countDetail(command); i++) {
                        res.push_back(in.readLine());
                    }

                    file.remove();

                    file.close();
                }

                return res;
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
