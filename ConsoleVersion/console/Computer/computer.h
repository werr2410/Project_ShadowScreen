#ifndef COMPUTER_H
#define COMPUTER_H

#include "Computer/baseboard.h"
#include "Computer/cpu.h"
#include "Computer/memorychip.h"
#include "Computer/storage.h"
#include "Computer/gpu.h"

namespace ShadowScreen {

    namespace Computer {

        class Computer {
            Baseboard baseboard;
            Storage storage;
            Memorychip memorychip;
            CPU cpu;
            GPU gpu;

        public:
            Computer(Baseboard baseboard, Storage storage, Memorychip memorychip, CPU cpu, GPU gpu);
            Computer();

            void setBaseboard(Baseboard baseboard);
            void setStorage(Storage storage);
            void setMemorychip(Memorychip memorychip);
            void setCPU(CPU cpu);
            void setGPU(GPU gpu);

            Baseboard getBaseboard() const;
            Storage getStorage() const;
            Memorychip getMemorychip() const;
            CPU getCPU() const;
            GPU getGPU() const;

            void init(Baseboard baseboard, Storage storage, Memorychip memorychip, CPU cpu, GPU gpu);
            QString toString() const;
        };
    }
}
#endif // COMPUTER_H
