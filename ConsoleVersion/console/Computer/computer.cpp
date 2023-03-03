#include "computer.h"

namespace ShadowScreen {

    namespace Computer {

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

        void Computer::init(Baseboard baseboard, Storage storage, Memorychip memorychip, CPU cpu, GPU gpu) {
            (*this) = Computer(baseboard, storage, memorychip, cpu, gpu);
        }

        void Computer::init()
        {
            (*this) = Computer(Baseboard(true), Storage(true), Memorychip(true), CPU(true), GPU(true));
        }

        QString Computer::toString() const {
            QString res = "";

            res += " |b| " + baseboard.toString()   + " |b| ";
            res += " |s| " + storage.toString()     + " |s| ";
            res += " |m| " + memorychip.toString()  + " |m| ";
            res += " |c| " + cpu.toString()         + " |c| ";
            res += " |g| " + gpu.toString()         + " |g| ";

            return res;
        }

    }
}
