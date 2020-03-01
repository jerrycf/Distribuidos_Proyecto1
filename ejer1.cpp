#include <iostream>

using namespace std;
double babilonico(double x){
    double b = x, h = 0;
    while (b != h){
        b = (h + b) / 2;
        h = x / b;
    }
    return b;
}

int main()
{
    int calcular;
    double raiz;
    
    cout<<"Ingrese el número a calcular su raiz con el "
                << "algoritmo babilónico: ";
    cin >> calcular;
    
    raiz = babilonico(calcular);
    cout << "Raiz aproximada de " << calcular << "es: " << raiz;
    
    return 0;
}
