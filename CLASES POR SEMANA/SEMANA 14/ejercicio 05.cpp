#include <iostream>
#include <vector>
using namespace std;

class Estructura {
private:
    float posX, posY, posZ;
    float dimension;

public:
     (float x, float y, float z, float dim) : posX(x), posY(y), posZ(z), dimension(dim) {}
    void dibujar() const {
        cout << "Estructura en (" << posX << ", " << posY << ", " << posZ << ") de dimensión " << dimension << endl;
    }
};

class Modulo {
private:
    float largo, ancho, alto;
    float posX, posY, posZ;

public:
    Modulo(float lg, float an, float al, float x, float y, float z) : largo(lg), ancho(an), alto(al), posX(x), posY(y), posZ(z) {}
    void dibujar() const {
        cout << "Modulo en (" << posX << ", " << posY << ", " << posZ << ") de dimensiones " << largo << "x" << ancho << "x" << alto << endl;
    }
};

class Edificio {
private:
    Estructura estructura;
    Modulo modulo;

public:
    Edificio(float esX, float esY, float esZ, float esDim, float moL, float moA, float moAl, float moX, float moY, float moZ)
        : estructura(esX, esY, esZ, esDim), modulo(moL, moA, moAl, moX, moY, moZ) {}
    void dibujar() const {
        estructura.dibujar();
        modulo.dibujar();
    }
};

class Ciudad {
private:
    vector<Edificio> edificios;

public:
    void agregarEdificio(const Edificio &edif) {
        edificios.push_back(edif);
    }
    void dibujar() const {
        cout << "Dibujando Ciudad:" << endl;
        for (const auto &edif : edificios) {
            edif.dibujar();
        }
    }
};

int main() {
    Edificio edificio(100, 100, 200, 50, 12, 8, 10, 20, 25, 30);

    Ciudad ciudad;
    ciudad.agregarEdificio(edificio);
    ciudad.dibujar();

    return 0;
}
