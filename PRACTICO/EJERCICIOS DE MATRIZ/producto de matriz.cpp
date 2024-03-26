#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

    int matrizA[3][3];
    int matrizB[3][3];

    cout << "ingrese los valores de  la  matriz A" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "digite un numero[" << i + 1 << "][" << j + 1 << "] :";
            cin >> matrizA[i][j];
        }
    }
    cout << "ingrese los valores de  la matriz B" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "digite un numero[" << i + 1 << "][" << j + 1 << "] :";
            cin >> matrizB[i][j];
        }
    }
    // producto
    int producto[3][3];
    // Inicializar la matriz de producto en cero
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            producto[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                producto[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    system("cls");
    cout << " matriz A" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }
    cout << " matriz B" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "matriz Producto= MatrizA x MatrizB" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << producto[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}