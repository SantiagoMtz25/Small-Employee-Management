#include <iostream>
#include "Fecha.h"
#include "Empleado.h"
using namespace std;

int main(){

    Empleado emp1;
    Empleado emp2;

    // Empleado emp1("Fulanito", 10000, 'A', Fecha(1, 1));
    emp1.setNombreEmp("Fulanito");
    emp1.setSueldoEmp(10000);
    emp1.setCategoriaEmp('A');
    emp1.setCumpleAniosEmp(Fecha(1, 1));
    // Empleado emp2("Zutanito", 12000, 'B', Fecha(19, 5));
    emp2.setNombreEmp("Zutanito");
    emp2.setSueldoEmp(12000);
    emp2.setCategoriaEmp('B');
    emp2.setCumpleAniosEmp(Fecha(19, 5));

    // Imprime los datos de los dos empleados 
    cout << "Nombre: " << emp1.getNombreEmp() << " Sueldo: " << emp1.getSueldoEmp() << " Categoria: " << emp1.getCategoriaEmp() << " Cumpleanos: " << emp1.getCumpleAniosEmp().getDia() << "/" << emp1.getCumpleAniosEmp().getMes() << endl; 
    cout << "Nombre: " << emp2.getNombreEmp() << " Sueldo: " << emp2.getSueldoEmp() << " Categoria: " << emp2.getCategoriaEmp() << " Cumpleanos: " << emp2.getCumpleAniosEmp().getDia() << "/" << emp2.getCumpleAniosEmp().getMes() << endl; 

    // Promover a fulanito empleado a categoria D
    emp1.promoverEmp('D');

    // Imprime el nuevo sueldo y categoria de fulanito 
    cout << "Nombre: " << emp1.getNombreEmp() << " Categoria: " << emp1.getCategoriaEmp() << " Sueldo: "<< emp1.getSueldoEmp() << endl; 

    // Fecha de cumpleanos de Zutanito
    cout << emp2.getNombreEmp() << " cumple anos el: " << emp2.getCumpleAniosEmp().getDia() << "/" << emp2.getCumpleAniosEmp().getMes() << endl;

    // Mejor jerarquia 
    if (emp1.getCategoriaEmp() > emp2.getCategoriaEmp()){
        cout << "El empleado " << emp1.getNombreEmp() << " tiene mejor categoria." << endl; 
    } else if (emp1.getCategoriaEmp() < emp2.getCategoriaEmp()){
        cout << "El empleado " << emp2.getNombreEmp() << " tiene mejor categoria." << endl; 
    } else {
        cout << "Ambos tienen la misma categoria. " << endl;
    }

    // Mejor sueldo 
    if (emp1.getSueldoEmp() > emp2.getSueldoEmp()){
       cout << "El empleado " << emp1.getNombreEmp() << " tiene mejor sueldo." << endl; 
    } else if (emp1.getSueldoEmp() < emp2.getSueldoEmp()) {
       cout << "El empleado " << emp2.getNombreEmp() << " tiene mejor sueldo." << endl; 
    } else {
       cout << "Ambos tienen el mismo sueldo. " << endl; 
    }

    return 0; 
}