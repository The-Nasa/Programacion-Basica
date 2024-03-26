#include <iostream>

using namespace std;

int main() {
    int numeroSecreto = 7;
    int intento;

    cout << "Intenta adivinar el número secreto." << endl;

    do {
        cout << "Ingresa un número: ";
        cin >> intento;

        if (intento == numeroSecreto) {
            cout << "¡Felicidades! Adivinaste el número secreto." << endl;
        } else {
            cout << "Intenta de nuevo." << endl;
        }

    } while (intento != numeroSecreto);

    return 0;
}
