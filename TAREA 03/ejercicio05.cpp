#include <iostream>
#include <string>
using namespace std;

string cifrarCesar(const string& mensaje, int clave) {
    string mensajeCifrado = "";

    for (char caracter : mensaje) {
        if (isalpha(caracter)) {
            char base = isupper(caracter) ? 'A' : 'a';
            mensajeCifrado += static_cast<char>((caracter - base + clave) % 26 + base);
        } else {
            mensajeCifrado += caracter;
        }
    }
    return mensajeCifrado;
}

int main() {
    string mensaje;
    int clave;
    cout << "Ingrese  la palabra a sifrar: ";
    getline(cin, mensaje);

    cout << "Ingrese la clave del cifrado Cesar (un numero entero): ";
    cin >> clave;

    string mensajeCifrado = cifrarCesar(mensaje, clave);
    cout << "\nMensaje cifrado: " << mensajeCifrado << endl;

    return 0; 
}
