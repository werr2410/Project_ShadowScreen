#include "computer.h"

#include <QDebug>
#include <iostream>

using namespace std;

namespace ShadowScreen {

    namespace computer {

        Computer::Computer(Baseboard baseboard, Storage storage, Memorychip memorychip, CPU cpu, GPU gpu) {
            setBaseboard(baseboard);
            setStorage(storage);
            setMemorychip(memorychip);
            setCPU(cpu);
            setGPU(gpu);
        }

        Computer::Computer(bool isInit){
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
            return baseboard.getManufacturer().split("|").length();
        }

        int Computer::amountStorage() const {
            return storage.getManufacturer().split("|").length();
        }

        int Computer::amountMemorychip() const {
            return memorychip.getManufacturer().split("|").length();
        }

        int Computer::amountGPU() const {
            return gpu.getManufacturer().split("|").length();
        }

        int Computer::amountCPU() const {
            return cpu.getManufacturer().split("|").length();
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

            res += " |b| " + baseboard.toString()   + " |b|";
            res += " |s| " + storage.toString()     + " |s|";
            res += " |m| " + memorychip.toString()  + " |m|";
            res += " |c| " + cpu.toString()         + " |c|";
            res += " |g| " + gpu.toString()         + " |g|";

            return res;
        }

        void Computer::selectDataById(QSqlDatabase &db, int id) {
            QSqlQuery query(db);

            setId(id);

            query.prepare("select CPUId, GPUId, StorageId, MemorychipId, BaseboardId from Computer where ComputerId = :id");

            query.bindValue(0, id);

            query.exec(); query.next();

            cpu         .selectDataById(db, query.value(0).toInt());
            gpu         .selectDataById(db, query.value(1).toInt());
            storage     .selectDataById(db, query.value(2).toInt());
            memorychip  .selectDataById(db, query.value(3).toInt());
            baseboard   .selectDataById(db, query.value(4).toInt());
        }

        void Computer::insertDataTable(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("exec SmartAddComputer default, :CpuId, :GpuId, :StorageId, :MemorychipId, :BasebpardId, :id");

            cpu.insertDataTable(db);
            gpu.insertDataTable(db);
            storage.insertDataTable(db);
            memorychip.insertDataTable(db);
            baseboard.insertDataTable(db);

            query.bindValue(0, cpu.getDataById(db));
            query.bindValue(1, gpu.getDataById(db));
            query.bindValue(2, storage.getDataById(db));
            query.bindValue(3, memorychip.getDataById(db));
            query.bindValue(4, baseboard.getDataById(db));
            query.bindValue(5, id);

            query.exec();
        }

        int Computer::getDataById(QSqlDatabase &db) {
            QSqlQuery query(db);

            query.prepare("select ComputerId from Computer where CPUId = :CPUId and GPUId = :GPUId and BaseboardId = :BaseboardId and MemorychipId = :memorychipId and StorageId = :storageid");

            query.bindValue(0, cpu.getDataById(db));
            query.bindValue(1, gpu.getDataById(db));
            query.bindValue(2, baseboard.getDataById(db));
            query.bindValue(3, memorychip.getDataById(db));
            query.bindValue(4, storage.getDataById(db));

            query.exec(); query.next();

            setId(query.value(0).toInt());

            return id;
        }

        Detail *Computer::operator[](Details detail) {
            switch(detail) {
            case d_Baseboard:
                return new Baseboard(baseboard);
            case d_Memorychip:
                return new Memorychip(memorychip);
            case d_Storage:
                return new Storage(storage);
            case d_CPU:
                return new CPU(cpu);
            case d_GPU:
                return new GPU(gpu);
            }
        }
    }
}
