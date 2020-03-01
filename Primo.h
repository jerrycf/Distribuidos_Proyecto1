#ifndef PRIMO_H_
#define PRIMO_H_

class Primo{
    private: 
        int entero;
        bool primo;
    public: 
        Primo(int num);
        void setNoPrimo();
        int getNum();
        bool isPrimo();
};

#endif