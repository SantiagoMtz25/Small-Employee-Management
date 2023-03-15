#ifndef Fecha_h
#define Fecha_h
#include <string>
using namespace std; 

class Fecha {
    private: 
        int d_dia; 
        int d_mes; 

    public: 
        Fecha();
        Fecha(int dia, int mes);
        ~Fecha();

        void setDia(int dia);
        void setMes(int mes);

        int getDia();
        int getMes();

  

};

#endif