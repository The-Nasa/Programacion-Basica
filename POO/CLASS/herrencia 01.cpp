//solo pueden heredar de uno de ellos
#include <iostream>
#include <string>
using namespace std;

// Clase base
class Animal {
private:
    string nombre;
    string tipo;
    int edad;
    int peso;

public:
    Animal(string _nombre, string _tipo, int _edad, int _peso) : nombre(_nombre), tipo(_tipo), edad(_edad), peso(_peso) {}

    void comer() {
        cout << "El animal esta comiendo." << endl;
    }

    void dormir() {
        cout << "El animal esta durmiendo." << endl;
    }

    // Métodos para acceder a los miembros privados
    string getNombre() const { return nombre; }
    string getTipo() const { return tipo; }
    int getEdad() const { return edad; }
    int getPeso() const { return peso; }
};

// Clase derivada
class Mamifero : public Animal {
private:
    string pelaje;

public:
    Mamifero(string _nombre, string _tipo, int _edad, int _peso, string _pelaje) : Animal(_nombre, _tipo, _edad, _peso), pelaje(_pelaje) {}

    void amamantar() {
        cout << "El mamifero esta amamantando a sus crias." << endl;
    }

    // Método para acceder al miembro privado
    string getPelaje() const { return pelaje; }
};

int main() {
    Mamifero gato("Michi", "Felino", 2, 5, "Corto");

    cout << "Nombre: " << gato.getNombre() << endl;
    cout << "Tipo: " << gato.getTipo() << endl;
    cout << "Edad: " << gato.getEdad() << " anios" << endl;
    cout << "Peso: " << gato.getPeso() << " kg" << endl;
    cout << "Pelaje: " << gato.getPelaje() << endl;

    gato.comer();
    gato.dormir();
    gato.amamantar();

    return 0;
}
/*mi nombre es meselemias tapillima serna 
un este dia tan hermoso , un dia co hoy mi madre fallecio 
un 16-02-2024 en el cual yo la extraño mucho y no puedo dejarla atras 
de si mismo te kiero mucho mamita feliza*/


