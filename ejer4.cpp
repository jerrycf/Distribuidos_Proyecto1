#include <iostream>
#include "Temperatura.h"

using namespace std;

int main(){
    
    Temperatura temperatura;
    int opc;
    double grados;

    cout << "Ingrese la medida en los que se guardarán los grados Kelvin: " << endl;
    cout << "1) Kelvin" << endl << "2) Fahrenheit" << endl << "3) Celsius" << endl;
    cin >> opc;
    cout << "Ingrese los grados: " << endl;
    cin >> grados;
    
    switch(opc){
        case 1:
            temperatura.setTempKelvin(grados);
            break;
        case 2:
            temperatura.setTempFahrenheit(grados);
            break;
        case 3: 
            temperatura.setTempCelsius(grados);
            break;
        default:
            cout << "Opcion no valida" << endl;
    }

    cout << "La temperatura ingresada en grados Kelvin es: " << temperatura.getTemp() << endl;

    return 0;
}