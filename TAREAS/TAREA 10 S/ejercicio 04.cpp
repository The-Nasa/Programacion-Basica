#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string nombre;
public:
    Animal(const string& _nombre) : nombre(_nombre) {}
    virtual void mostrar();
};

class Perro : public Animal {
private:
    string raza;
    int edad;
public:
    Perro(const string& _nombre, const string& _raza, int _edad) : Animal(_nombre), raza(_raza), edad(_edad) {}
    void mostrar() override;
};

void Animal::mostrar() {
    cout << "Animal: " << nombre << endl;
}

void Perro::mostrar() {
    Animal::mostrar();
    cout << "Raza: " << raza << endl;
    cout << "Edad: " << edad <<" anios" <<endl;
}

int main() {
    Perro miPerro("Bobby", "Labrador", 10);
    miPerro.mostrar();

    return 0;
}
