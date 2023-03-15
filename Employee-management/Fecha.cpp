#include <iostream>
#include "Fecha.h"
using namespace std;

// Constructor y destructor
Fecha::Fecha(){
    d_dia = 0; 
    d_mes = 0; 
}

Fecha::Fecha(int dia, int mes){
    d_dia = dia; 
    d_mes = mes; 
}

Fecha::~Fecha(){
    //
}

// Setters 
void Fecha::setDia(int dia){
    d_dia = dia; 
}

void Fecha::setMes(int mes){
    d_mes = mes; 
}

// Getters
int Fecha::getDia(){
    return d_dia; 
}

int Fecha::getMes(){
    return d_mes;
}

