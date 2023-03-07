#ifndef COMPUTER_H
#define COMPUTER_H

#include "Computer/baseboard.h"
#include "Computer/cpu.h"
#include "Computer/memorychip.h"
#include "Computer/storage.h"
#include "Computer/gpu.h"

#include <iostream>

namespace ShadowScreen {

    namespace Computer {

        enum Details {
            d_Baseboard,
            d_Storage,
            d_Memorychip,
            d_CPU,
            d_GPU
        };


        class Computer {
            Baseboard baseboard;
            Storage storage;
            Memorychip memorychip;
            CPU cpu;
            GPU gpu;

        public:
            Computer(Baseboard baseboard, Storage storage, Memorychip memorychip, CPU cpu, GPU gpu);
            Computer(bool isInit);
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

            int amountBaseboard() const;
            int amountStorage() const;
            int amountMemorychip() const;
            int amountGPU() const;
            int amountCPU() const;

            void init(Baseboard baseboard, Storage storage, Memorychip memorychip, CPU cpu, GPU gpu);
            void init();
            QString toString() const;

            QStringList getNormalyDetail(Detail* detail);

            Detail* operator[](Details detail);
        };

    }
}
#endif // COMPUTER_H
