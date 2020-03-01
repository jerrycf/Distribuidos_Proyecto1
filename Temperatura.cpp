#include "Temperatura.h"
#include <iostream>

using namespace std;

Temperatura::Temperatura(){
    grados = 0;
}
Temperatura::Temperatura(double temp){
    grados = temp;
}

void Temperatura::setTempKelvin(double temp){
    grados = temp;
    return;
}

void Temperatura::setTempFahrenheit(double temp){
    //(X °F − 32) × 5/9 + 273.15 = 255.372 K
    grados = (temp - 32) * 5/9 + 273.15;
    return;
}

void Temperatura::setTempCelsius(double temp){
    //X °C + 273.15 = 273.15 K
    grados = temp + 273.15;
    return;
}

double Temperatura::getTemp(){
    return grados;
}