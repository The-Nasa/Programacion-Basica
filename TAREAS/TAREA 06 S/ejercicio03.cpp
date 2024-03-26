#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   
    vector<char> caracteres;


    string oracion;
    cout << "Ingresa una oracion: ";
    getline(cin, oracion);  

    for (char c : oracion) {
        caracteres.push_back(c);
    }

   
    char caracter;
    cout << "Ingresa un caracter para contar: ";
    cin >> caracter;

 
    int contador = count(caracteres.begin(), caracteres.end(), caracter);

    cout << "El caracter '" << caracter << "' aparece " << contador << " veces en la oracion." << endl;

    return 0;
}
