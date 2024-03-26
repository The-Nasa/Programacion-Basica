#include <iostream>
#include <string>
using namespace std;

// Clase base Persona
class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}

    void mostrarDatos() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

// Clase derivada Estudiante
class Estudiante : public Persona {
private:
    int codigoEstudiante;

public:
    Estudiante(string nombre, int edad, int codigoEstudiante)
        : Persona(nombre, edad), codigoEstudiante(codigoEstudiante) {}

    void mostrarDatos() const {
        Persona::mostrarDatos(); // Llama al método mostrarDatos de la clase base
        cout << "Código de Estudiante: " << codigoEstudiante << endl;
    }
};

int main() {
    Persona persona("Juan", 25);
    persona.mostrarDatos();

    Estudiante estudiante("Ana", 20, 12345);
    estudiante.mostrarDatos();

    return 0;
}
