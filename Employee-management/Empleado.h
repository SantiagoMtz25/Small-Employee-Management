#ifndef Empleado_h
#define Empleado_h
#include <iostream>
#include "Fecha.h"
#include <string>
using namespace std;

class Empleado {
    private: 
        string d_nombreEmp;
        float d_sueldoEmp; 
        char d_categoriaEmp;
        Fecha d_cumpleAniosEmp; 

    public: 
        Empleado();
        Empleado(string nombreEmp, float sueldoEmp, char categoriaEmp, Fecha cumpleAniosEmp);
        ~Empleado();

        void setNombreEmp(string);
        void setSueldoEmp(float);
        void setCategoriaEmp(char);
        void setCumpleAniosEmp(Fecha);

        string getNombreEmp();
        float getSueldoEmp();
        char getCategoriaEmp();
        Fecha getCumpleAniosEmp();

        void promoverEmp(char);


};

#endif 