#include <iostream>
#include <string>
using namespace std;

// Clase base Fruta
class Fruta {
protected:
    string nombre;
public:
    Fruta(string);
    virtual void mostrar();
};

Fruta::Fruta(string _nombre) {
    nombre = _nombre;
}

void Fruta::mostrar() {
    cout << "Nombre: " << nombre << endl;
}

class Citrico : public Fruta {
private:
    string color;
    float cantidad;
public:
    Citrico(string, string, float);
    void mostrar() override;
};

Citrico::Citrico(string _nombre, string _color, float _cantidad) : Fruta(_nombre) {
    color = _color;
    cantidad = _cantidad;
}

void Citrico::mostrar() {
    Fruta::mostrar();
    cout << "Color: " << color << endl;
    cout << "Cantidad: " << cantidad << endl;
}

int main() {
    Citrico c1("Limon", "Amarillo", 3);
    c1.mostrar();

    return 0;
}
