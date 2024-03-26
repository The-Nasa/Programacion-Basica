#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> palabras;

    string palabra;
    cout << "Ingresa palabras una por una "<<endl;
    cout <<"Escribe 'fin' para terminar:"<<endl;

    while (true) {
        cin >> palabra;
        if (palabra == "fin") {
            break;
        }
        palabras.push_back(palabra);
    }

    
    string resultado;
    for (const string& p : palabras) {
        resultado += p + " ";
    }

   
    cout << "La cadena resultante es: " << resultado << endl;

    return 0;
}
