#include "Led.h"

Led::Led(int porta){
    setPorta(porta);
    setLigar(false);
}

void Led::setPorta(int porta){
    this->porta = porta;
}

int Led::getPorta(){
    return porta;
}

void Led::setLigar(bool ligado){
    this->ligado = ligado;
}

void Led::acender(){
    setLigar(true);
    digitalWrite(porta, getLigado());

}

void Led::apagar(){
    setLigar(false);
    digitalWrite(porta, getLigado());
}

void Led::inverter(){
    setLigar(!getLigado());
    digitalWrite(porta, getLigado())
}

void Led::acender(int x){
    analogWrite(porta, x);
    setLigar(true);
}

bool Led::getLigado(){
    return ligado;
}

void Led::piscar(int x, int y){
    int mili = y * 1000;
    mili /= x; //este é o delay
    for (int i = 0; i < x; i++){
        acender();
        delay(25);
        apagar();
        delay(mili);
    }
}

bool Led::isAceso(){
    return getLigado();
}

bool Led::isPwm(){
    switch(porta){
        case 3: return true; break;
        case 5: return true; break;
        case 6: return true; break;
        case 9: return true; break;
        case 10: return true; break;
        case 11: return true; break;
        default: return false; break;
    }
}
