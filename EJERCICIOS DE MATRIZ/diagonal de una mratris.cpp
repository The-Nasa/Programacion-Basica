#include <iostream>
using namespace std;
int main()
{
    int numeros[10][10], filas, columnas;
    cout << "ingrese el numero de filas: ";
    cin >> filas;
    cout << "ingrese el numero de columnas: ";
    cin >> columnas;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Ingrese un valor para la posicion [" << i + 1 << "][" << j + 1 << "] :";
            cin >> numeros[i][j];
        }
    }
    cout << "la diagonal de la matris es:  \n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (i == j)
            {
                cout << numeros[i][j];
            }
            else
            {

                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}