#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> palabras;
    string palabra;

    int n;
    cout << "Ingrese la cantidad de palabras: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese una palabra: ";
        cin >> palabra;
        palabras.push_back(palabra);
    }

    // Concatenar todas las palabras en una única cadena
    string resultado;
    for (const string& p : palabras) {
        resultado += p + " ";
    }

    cout << "La cadena resultante es: " << resultado << endl;

    return 0;
}
