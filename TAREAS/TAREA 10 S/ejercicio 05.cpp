#include <iostream>
#include <string>
using namespace std;

// Clase base Colores
class Colores {
protected:
    string marca;
public:
    Colores(string);
    virtual void mostrar();
};

Colores::Colores(string _marca) {
    marca = _marca;
}

void Colores::mostrar() {
    cout << "Marca: " << marca << endl;
}

// Clase derivada Producto
class Producto : public Colores {
private:
    float precio;
    int cantidad;
public:
    Producto(string, float, int);
    void mostrar() override;
};

Producto::Producto(string _marca, float _precio, int _cantidad) : Colores(_marca) {
    precio = _precio;
    cantidad = _cantidad;
}

void Producto::mostrar() {
    Colores::mostrar();
    cout << "Precio: $" << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
}

int main() {
    Producto p1("Artesco", 5, 10);
    p1.mostrar();

    return 0;
}
