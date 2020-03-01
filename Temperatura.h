#ifndef TEMPERATURA_H_
#define TEMPERATURA_H_

class Temperatura{
    private: 
        double grados;
    public: 
        Temperatura();
        Temperatura(double temp);
        void setTempKelvin(double temp);
        void setTempFahrenheit(double temp);
        void setTempCelsius(double temp);
        double getTemp();
};

#endif