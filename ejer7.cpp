#include <iostream>
#include "Primo.h"
#include <math.h>
#include <vector>
using namespace std;

int main(){

    int num;
    cout << "Ingrese el numero a determinar sus numeros primos menores: ";
    cin >> num;

    vector<Primo> numeros;
    for (int i=2;i<num;i++)
        numeros.push_back(Primo(i));

    std::vector<Primo>::iterator it;
    for (int i=2;i<sqrt(num);i++){
        for (it = numeros.begin() + i - 1; it != numeros.end(); it++)
            if (it->getNum() % i == 0){
                it->setNoPrimo();
            }
    }
    cout << "numeros primos: "<< endl;
    for (it = numeros.begin(); it != numeros.end();it++){
        if (it->isPrimo())
            cout << it->getNum() << endl;
    }
    

    return 0;
}