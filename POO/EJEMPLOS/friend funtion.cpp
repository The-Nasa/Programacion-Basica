#include <iostream>
#include <string>

// Declaración adelantada de la clase Persona
class Persona;

// Declaración de la función amiga
void mostrarNombre(Persona &p);

// Definición de la clase Persona
class Persona {
private:
    std::string nombre;
public:
    Persona(std::string nombre) : nombre(nombre) {}
    // Declaración de la función amiga
    friend void mostrarNombre(Persona &p);
};

// Definición de la función amiga
void mostrarNombre(Persona &p) {
    std::cout << "El nombre es: " << p.nombre << std::endl;
}

int main() {
    Persona persona("Juan");
    mostrarNombre(persona);
    return 0;
}
