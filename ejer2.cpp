#include <iostream>
using namespace std;
const double GRAV = 9.18f;

float calcularAltura(float tiempo){
    float h; 
    h = static_cast<float>((0.5) * GRAV * (tiempo * tiempo));
    return h;
}
int main(){
    float tiempo;
    
    cout<< "Introduzca el tiempo que tarda la pelota en "
        << "tocar el suelo con precisión decimal: ";
    
    cin >> tiempo;
    cout<< "La altura del edificio es: " << calcularAltura(tiempo) << "m.";
    return 0;
}
