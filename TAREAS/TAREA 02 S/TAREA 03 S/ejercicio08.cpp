#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numeros;

    cout << "Ingrese los elementos del vector ";
    cout << "y LISTO para finalizar:" << endl;
    while (true)
    {
        char listo, LISTO;
        int elemento;
        cout << "Elemento: ";
        cin >> elemento;

        if (elemento == listo || elemento == LISTO)
        {
            break;
        }

        numeros.push_back(elemento);
    }

    int mayor = numeros[0];

    for (size_t i = 1; i < numeros.size(); ++i)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
            break;
        }
    }

    cout << "El mayor elemento del vector es: " << mayor << endl;

    return 0;
}