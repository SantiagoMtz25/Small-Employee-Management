#include <iostream>
#include "Fecha.h"
#include "Empleado.h"
using namespace std;

// Constructor y destructor
Empleado::Empleado(){
    d_nombreEmp = "";
    d_sueldoEmp = 0;
    d_categoriaEmp = '\0';
    d_cumpleAniosEmp = Fecha();
}

Empleado::Empleado(string nombreEmp, float sueldoEmp, char categoriaEmp, Fecha cumpleAniosEmp){
    d_nombreEmp = nombreEmp;
    d_sueldoEmp = sueldoEmp;
    d_categoriaEmp = categoriaEmp;
    d_cumpleAniosEmp = cumpleAniosEmp;
}

Empleado::~Empleado(){
    //
}

// Setters 
void Empleado::setNombreEmp(string nombreEmp){
    d_nombreEmp = nombreEmp;
}

void Empleado::setSueldoEmp(float sueldo){
    d_sueldoEmp = sueldo; 
}

void Empleado::setCategoriaEmp(char categoria){
    d_categoriaEmp = categoria;
}

void Empleado::setCumpleAniosEmp(Fecha cumple){
    d_cumpleAniosEmp = cumple;
}

// Getters 
string Empleado::getNombreEmp(){
    return d_nombreEmp;
}

float Empleado::getSueldoEmp(){
    return d_sueldoEmp;
}

char Empleado::getCategoriaEmp(){
    return d_categoriaEmp;
}

Fecha Empleado::getCumpleAniosEmp(){
    return d_cumpleAniosEmp;
}

void Empleado::promoverEmp(char nuevaCategoria){
    if (nuevaCategoria < 'A' || nuevaCategoria > 'D'){
        cout << "Categoria invalida" << endl; 
        return; 
    }
    int num_aumentos = 0;
    if (nuevaCategoria > getCategoriaEmp()){
        num_aumentos = nuevaCategoria - getCategoriaEmp();

        setCategoriaEmp(nuevaCategoria);
        setSueldoEmp(getSueldoEmp() * (1 + (num_aumentos * 0.025)));
    } else {
        cout << "No se puede promover a una categoria menor. " << endl; 
    }
    
}