#include <iostream>
using namespace std;

double getHoras(long tiempo){
    double aux = tiempo / 3600.0;
    return aux;
}

double getMinutos(double tiempo){
    double aux = tiempo * 60.0;
    return aux;
}

double getSegundos(double tiempo){
    double aux = tiempo * 60.0;
    return aux;
}

double getMod(double t){
    int entero = (int)t;
    double decimal = t - entero;
    return decimal;
}

void imprimirTiempos(int horas, int minutos, int segundos){
    cout<< horas << " horas " << minutos << " minutos y "
                << segundos << " segundos";
}

int main(){
    long tiempo;
    int horas, minutos, segundos;
    double hrs, mins, segs;
    
    cout<< "Ingrese la cantidad de segundos para calcular "
        << "sus horas, minutos y segundos: ";
    
    cin >> tiempo;
    
    //Se calculan las horas 
    hrs = getHoras(tiempo);
    //Se realiza un cast para devolver las horas en enteros
    horas = (int) hrs;
   
    //Se saca el restante de los decimales para calcular los minutos
    double mod = getMod(hrs);
    
    //Se calculan los minutos
    mins = getMinutos(mod);
    minutos = (int) mins;
    
    //Se repite el proceso para calcular los segundos
    mod = getMod(mins);
    
    //Se calculan los segundos 
    segs = getSegundos(mod);
    segundos = (int) segs;
    
    imprimirTiempos(horas, minutos, segundos);
    
    return 0;
}
