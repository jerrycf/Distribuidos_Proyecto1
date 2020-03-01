#include "Primo.h"

using namespace std;

Primo::Primo(int num){
    entero = num;
    primo = true;
}

void Primo::setNoPrimo(){
    primo = false;
    return;
}

int Primo::getNum(){
    return entero;
}

bool Primo::isPrimo(){
    return primo;
}