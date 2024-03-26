#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
public:
    Persona(string);
    virtual void mostrar();
};

Persona::Persona(string _nombre) {
    nombre = _nombre;
}

void Persona::mostrar() {
    cout << "Nombre: " << nombre << endl;
}

class Trabajador : public Persona {
private:
    string profesion;
    float sueldo;
public:
    Trabajador(string, string, float);
    void mostrar() override;
};

Trabajador::Trabajador(string _nombre, string _profesion, float _sueldo) : Persona(_nombre) {
    profesion = _profesion;
    sueldo = _sueldo;
}

void Trabajador::mostrar() {
    Persona::mostrar();
    cout << "Profesion: " << profesion << endl;
    cout << "Sueldo: $" << sueldo << endl;
}

int main() {
    Trabajador t1("Juan", "Ingeniero", 5000.0);
    t1.mostrar();

    return 0;
}
