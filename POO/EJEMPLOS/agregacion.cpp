#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Jugador {
private:
    string nombre;
public:
    Jugador(string nombre) : nombre(nombre) {}

    string getNombre() const {
        return nombre;
    }
};

class Equipo {
private:
    string nombre;
    vector<Jugador*> jugadores; // Agregación: El equipo contiene jugadores
public:
    Equipo(string nombre) : nombre(nombre) {}

    void agregarJugador(Jugador* jugador) {
        jugadores.push_back(jugador);
    }

    void mostrarJugadores() const {
        cout << "Equipo " << nombre << " tiene los siguientes jugadores:" << endl;
        for (const auto& jugador : jugadores) {
            cout << jugador->getNombre() << endl;
        } 
    }
};

int main() {
    Jugador jugador1("Juan");
    Jugador jugador2("Ana");
    Jugador jugador3("Luis");

    Equipo equipo("Los Cóndores");

    equipo.agregarJugador(&jugador1);
    equipo.agregarJugador(&jugador2);
    equipo.agregarJugador(&jugador3);

    equipo.mostrarJugadores();

    // Los objetos jugador1, jugador2 y jugador3 pueden seguir existiendo independientemente del equipo
    return 0;
}
