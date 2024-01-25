#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declarar una variable de cadena para almacenar la oración
    string oracion;

    // Solicitar al usuario que ingrese una oración
    cout << "Ingrese una oración: ";
    getline(cin, oracion);

    // Mostrar la oración almacenada
    cout << "La oración ingresada es: " << oracion <<endl;

    return 0;
}
