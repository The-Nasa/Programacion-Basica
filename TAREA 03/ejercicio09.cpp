#include <iostream>
#include <vector>
using namespace std;
bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inicio, fin;
    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;

    cout << "Ingrese el numero de fin: ";
    cin >> fin;

    if (inicio > fin) {
        cout << "El número de inicio debe ser menor o igual al número de fin." << endl;
        return 1;  
    }

    vector<int> primos;
    for (int numero = inicio; numero <= fin; ++numero) {
        if (!esPrimo(numero)) {

            continue;
        }
        primos.push_back(numero);
    }

    cout << "Numeros primos en el rango [" << inicio << "-" << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
