#ifndef Led_H
#define Led_H

#if defined(ARDUINO) && ARDUINO > 100
#include "WProgram.h"
#else
#include "Arduino.h"
#endif

class Led{
    public:
        Led(int porta);
        void setPorta(int porta);
        int getPorta();
        void setLigar(bool ligado);
        void acender();
        void acender(int x);
        void apagar();
        void inverter();
        bool getLigado();
        void piscar(int x, int y);
        bool isAceso();
        bool isPwm();
    private:
        int porta;
        bool ligado;
}

#endif // Potenciometro_H


