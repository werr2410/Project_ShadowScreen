#ifndef COMPTURE_H
#define COMPTURE_H

#include "baseboard.h"
#include "cpu.h"
#include "memorychip.h"
#include "storage.h"
#include "videocard.h"

namespace ShadowScreen {

    namespace Compture {

        class Compture {
        private:
            Baseboard motherboard;
            CPU cpu;
            Memorychip ram;
            Storage storage;
            Videocard gpu;

        public:
            Compture(Baseboard mb, CPU cpu, Memorychip ram, Storage storage, Videocard gpu);
            Compture(bool init);

            void setMotherboard(Baseboard motherboard);
            void setCPU(CPU cpu);
            void setRAM(Memorychip ram);
            void setStorage(Storage storage);
            void setGPU(Videocard gpu);

            Baseboard getMotherboard() const;
            CPU getCPU() const;
            Memorychip getRAM() const;
            Storage getStorage() const;
            Videocard getGPU() const;

            void init();
        };
    }
}

#endif // COMPTURE_H
