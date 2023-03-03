#include "computer.h"

#include <QDebug>
#include <iostream>

using namespace std;

namespace ShadowScreen {

    namespace Computer {

        QStringList Computer::getNormalyDetail(Detail *detail) {
            QStringList res;
            QStringList tmp;
            QStringList tmp1;
//            int amount;

//            if(detail->type() == "baseboard") {
//                amount = amountBaseboard();
//            } else if(detail->type() == "memorychip") {
//                amount = amountMemorychip();
//            } else if(detail->type() == "cpu") {
//                amount = amountCPU();
//            } else if(detail->type() == "gpu") {
//                amount = amountGPU();
//            } else if(detail->type() == "diskdrive") {
//                amount = amountStorage();
//            } else if(detail->type() == "memorychip") {
//                amount = amountMemorychip();
//            } else {
//                amount = 0;
//            }

            tmp = detail->toString().split("$");

            for(int i = 0; i < tmp.length(); i++) {
                tmp1 = tmp[i].split("|");
            }

            qDebug() << "tmp: \n";

            for(int i = 0; i < tmp.length(); i++) {
                qDebug() << tmp[i] << " ---- ";
            }

            qDebug() << "\ntmp1: \n";

            for(int i = 0; i < tmp1.length(); i++) {
                qDebug() << tmp1[i] << " ---- ";
            }

            return res;
        }

        Computer::Computer(Baseboard baseboard, Storage storage, Memorychip memorychip, CPU cpu, GPU gpu) {
            setBaseboard(baseboard);
            setStorage(storage);
            setMemorychip(memorychip);
            setCPU(cpu);
            setGPU(gpu);
        }

        Computer::Computer(bool isInit) {
            if(isInit)
                init();
            else
                (*this) = Computer();
        }

        Computer::Computer() : Computer(Baseboard(), Storage(), Memorychip(), CPU(), GPU()) { }

        void Computer::setBaseboard(Baseboard baseboard) {
            this->baseboard = baseboard;
        }

        void Computer::setStorage(Storage storage) {
            this->storage = storage;
        }

        void Computer::setMemorychip(Memorychip memorychip) {
            this->memorychip = memorychip;
        }

        void Computer::setCPU(CPU cpu) {
            this->cpu = cpu;
        }

        void Computer::setGPU(GPU gpu) {
            this->gpu = gpu;
        }

        Baseboard Computer::getBaseboard() const {
            return baseboard;
        }

        Storage Computer::getStorage() const {
            return storage;
        }

        Memorychip Computer::getMemorychip() const {
            return memorychip;
        }

        CPU Computer::getCPU() const {
            return cpu;
        }

        GPU Computer::getGPU() const {
            return gpu;
        }

        int Computer::amountBaseboard() const {
            return baseboard.getManufacturer().split(" ").length();
        }

        int Computer::amountStorage() const {
            return storage.getManufacturer().split(" ").length();
        }

        int Computer::amountMemorychip() const {
            return memorychip.getManufacturer().split(" ").length();
        }

        int Computer::amountGPU() const {
            return gpu.getManufacturer().split("|").length();
        }

        int Computer::amountCPU() const {
            return cpu.getManufacturer().split(" ").length();
        }

        QString Computer::getNormalyBaseboard(QChar between) const {

        }

        QString Computer::getNormalyStorage(QChar between) const
        {

        }

        QString Computer::getNormalyMemorychip(QChar between) const
        {

        }

        QString Computer::getNormalyCPU(QChar between) const
        {

        }

        QString Computer::getNormalyGPU(QChar between) const
        {

        }

        QStringList Computer::getNormalyBaseboard() const
        {

        }

        QStringList Computer::getNormalyStorage() const
        {

        }

        QStringList Computer::getNormalyMemorychip() const
        {

        }

        QStringList Computer::getNormalyGPU() const
        {

        }

        QStringList Computer::getNormalyCPU() const
        {

        }

        void Computer::init(Baseboard baseboard, Storage storage, Memorychip memorychip, CPU cpu, GPU gpu) {
            (*this) = Computer(baseboard, storage, memorychip, cpu, gpu);
        }

        void Computer::init()
        {
            (*this) = Computer(Baseboard(true), Storage(true), Memorychip(true), CPU(true), GPU(true));
        }

        QString Computer::toString() const {
            QString res = "";

            res += " |b| " + baseboard.toString()   + " |b|\n";
            res += " |s| " + storage.toString()     + " |s|\n";
            res += " |m| " + memorychip.toString()  + " |m|\n";
            res += " |c| " + cpu.toString()         + " |c|\n";
            res += " |g| " + gpu.toString()         + " |g|\n";

            return res;
        }

    }
}
