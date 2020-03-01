#include "Fraccion.h"
#include <iostream>
using namespace std;

Fraccion::Fraccion(){
    numerador = 1;
    denominador = 1;
}

float Fraccion::division(){
    float res = (float)(numerador / denominador);
    imprimir();
    cout << "Resultado de division desde clase: " << res << endl;
    return res;
}

void Fraccion::minimizar(){
    if (numerador % denominador == 0){
        numerador = numerador / denominador;
        cout << "Fraccion entera" << endl;
        denominador = 1;
        return;
    }
    int min, max, mcd;
    if (numerador < denominador){
        min = numerador;
        max = denominador;
    }else{
        min = denominador;
        max = numerador;
    }
    for (int i=1;i<min/2;i++){
        if (min % i == 0 && max % i == 0)
            mcd = i;
    }
    numerador /= mcd;
    denominador /= mcd;
    return;
    
}

void Fraccion::imprimir(){
    cout << "Numerador: " << numerador << " Denominador: " << denominador << endl;
    return;
}

void Fraccion::setNumerador(int num){
    numerador = num;
    return;
}
void Fraccion::setDenominador(int den){
    denominador = den;
    return;
}