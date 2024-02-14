#include <iostream>
using namespace std;

int main()
{
    const int totalNumeros = 10;
    int numeros[totalNumeros];
    int suma = 0;
    cout << "Ingresa " << totalNumeros << " numeros enteros:" << endl;
    for (int i = 0; i < totalNumeros; ++i)
    {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }
    double promedio = static_cast<double>(suma) / totalNumeros;

    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

    int mayoresQuePromedio = 0;
    for (int i = 0; i < totalNumeros; ++i)
    {
        if (numeros[i] > promedio)
        {
            mayoresQuePromedio++;
        }
    }
    cout << "Cantidad de numeros mayores que el promedio: " << mayoresQuePromedio << endl;

    return 0;
}