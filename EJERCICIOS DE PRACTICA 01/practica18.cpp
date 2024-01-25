#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Configuración de la semilla para números aleatorios
    srand(static_cast<unsigned int>(time(0)));

    int numeroSecreto = rand() % 10 + 1;  // Generar un número aleatorio entre 1 y 10
    int intentoUsuario;
    int intentosRealizados = 0;

    cout << "¡Bienvenido al juego de adivinanza!" << endl;

    do {
        // Solicitar al usuario ingresar un intento
        cout << "Intenta adivinar el número (entre 1 y 10): ";
        cin >> intentoUsuario;

        // Incrementar el contador de intentos
        intentosRealizados++;

        // Verificar si el intento es correcto
        if (intentoUsuario == numeroSecreto) {
            cout << "¡Felicidades! Adivinaste el número en " << intentosRealizados << " intentos." << endl;
        } else {
            cout << "Incorrecto. Intenta de nuevo." << endl;
        }

    } while (intentoUsuario != numeroSecreto);

    return 0;
}

