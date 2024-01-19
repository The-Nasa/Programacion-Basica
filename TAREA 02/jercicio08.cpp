#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;

    // Llenar el vector (puedes modificar esto según tus necesidades)
    numeros = {5, 12, 8, 25, 3, 17, 10};

    // Inicializar una variable para almacenar el mayor elemento
    int mayorElemento = numeros[0];

    // Encontrar el mayor elemento usando un bucle for y break
    for (int i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayorElemento) {
            mayorElemento = numeros[i];
            // Salir del bucle tan pronto como se encuentra el mayor elemento
            break;
        }
    }

    // Mostrar el resultado
    cout << "El mayor elemento en el vector es: " << mayorElemento << endl;

    return 0;
}
