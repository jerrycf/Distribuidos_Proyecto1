#ifndef FRACCION_H_
#define FRACCION_H_

class Fraccion{
    private:
        int numerador;
        int denominador;
    public:
        Fraccion();
        float division();
        void minimizar();
        void imprimir();
        void setNumerador(int num);
        void setDenominador(int den);
};

#endif