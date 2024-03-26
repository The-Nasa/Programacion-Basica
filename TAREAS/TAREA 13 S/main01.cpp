#include <iostream>
#include <vector>
#include <string>
#include "tarea.cpp"

using namespace std;
// Main del programa
int main() {
    // Crear personas
    Persona persona1(1001, "Ramos Govea", "Alan", "Av. Lima");
    Persona persona2(1002, "Mendoza Silva", "Juan", "Jr. Huanuco");

    // Crear TipoContacto para las personas
    TipoContacto contacto1(1, "Alanrg@gmail.com", "984 521 753");
    TipoContacto contacto2(2, "Juanms@gmail.com", "962 456 595");

    persona1.agregarTipoContacto(contacto1);
    persona2.agregarTipoContacto(contacto2);

    // Crear Departamento
    Departamento departamento(101, "Ventas");

    // Crear Empleados
   
    Ingeniero ingeniero(2001, 15, departamento, 14);
    Gerente gerente(2002, 20, departamento, 1500);


    // Asignar empleados a personas
    persona1.mostrarInformacion();
    
    ingeniero.mostrarInformacion();
    cout << "Salario final del Ingeniero: " << ingeniero.CalcularSalario() << "\n\n";

    persona2.mostrarInformacion();
    cout <<endl;
  
    // Cambiar el bono del gerente
    gerente.bono = 2500;
    gerente.mostrarInformacion();

    cout << "Nuevo salario final del Gerente: " << gerente.CalcularSalario() << "\n";
   
   ////

   
    return 0;
}