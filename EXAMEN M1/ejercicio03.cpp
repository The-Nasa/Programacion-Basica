#include <iostream>
#include <vector>

using namespace std;

int sumaPorValor(const vector<int>& numeros) {
    int suma = 0;
    for (int num : numeros) {
        suma += num;
    }
    return suma;
}

void sumaPorReferencia(const vector<int>& numeros, int& resultado) {
    resultado = 0;
    for (int num : numeros) {
        resultado += num;
    }
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};

    int resultadoPorValor = sumaPorValor(numeros);
    cout << "La suma (paso por valor) es: " << resultadoPorValor << endl;

    int resultadoPorReferencia;
    sumaPorReferencia(numeros, resultadoPorReferencia);
    cout << "La suma (paso por referencia) es: " << resultadoPorReferencia << endl;

    return 0;
}
