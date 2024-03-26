#include <iostream>
#include <string>
using  namespace std;
class Procesador {
private:
    string modelo;
public:
    Procesador(const std::string& mod) : modelo(mod) {}
    void mostrar() const {
    cout << "Procesador: " << modelo << std::endl;
    }
};

class DiscoDuro {
private:
    string capacidad;
public:
    DiscoDuro(const std::string& cap) : capacidad(cap) {}
    void mostrar() const {
    cout << "Disco Duro: " << capacidad << std::endl;
    }
};

class Computadora {
private:
    Procesador cpu; // Composición: Computadora tiene un Procesador
    DiscoDuro hdd;  // Composición: Computadora tiene un DiscoDuro
public:
    Computadora(const Procesador& p, const DiscoDuro& d) : cpu(p), hdd(d) {}

    void mostrarEspecificaciones() const {
        cpu.mostrar();
        hdd.mostrar();
    }
};

int main() {
    Procesador miProcesador("Intel i7");
    DiscoDuro miDiscoDuro("1TB");

    Computadora miComputadora(miProcesador, miDiscoDuro);
    miComputadora.mostrarEspecificaciones();

    return 0;
}
