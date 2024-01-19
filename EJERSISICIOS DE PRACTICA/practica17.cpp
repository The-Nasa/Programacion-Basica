#include <iostream>
#include <vector>
#include <algorithm> // Para la función sort

int main() {
    // Solicitar al usuario la cantidad de elementos del vector
    int n;
    std::cout << "Ingrese la cantidad de elementos del vector: ";
    std::cin >> n;

    // Declarar el vector para almacenar los números
    std::vector<int> numeros;

    // Solicitar al usuario que ingrese los valores del vector
    std::cout << "Ingrese los valores del vector:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int valor;
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> valor;
        numeros.push_back(valor);
    }

    // Ordenar el vector de manera ascendente
    std::sort(numeros.begin(), numeros.end());

    // Mostrar el vector ordenado
    std::cout << "Vector ordenado de manera ascendente:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << numeros[i] << " ";
    }

    return 0;
}
