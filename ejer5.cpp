#include <iostream> 
#include "Fraccion.h"
using namespace std;


int main(){
    Fraccion fraccion;
    int num, den;
    float res;
    cout << "Ingrese el numerador de la fraccion: ";
    cin >> num;
    fraccion.setNumerador(num);

    cout << "Ingrese el denominador de la fraccion: ";
    cin >> den;
    fraccion.setDenominador(den);

    res = fraccion.division();
    cout << "Resultado de la division: " << res << endl;

    cout << "Fraccion en su minima expresion: " << endl;
    fraccion.minimizar();
    fraccion.imprimir();

    return 0;
}