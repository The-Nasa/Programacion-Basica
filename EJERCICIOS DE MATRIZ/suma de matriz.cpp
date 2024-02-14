#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int matrizA[3][3];
    int matrizB[3][3];
    cout << "ingrese los elementos de la matriz A" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "digite un numero[" << i + 1 << "][" << j + 1 << "] :";
            cin >> matrizA[i][j];
        }
    }
    cout << endl;
    cout << "ingrese los elementos de la matriz B" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "digite un numero[" << i + 1 << "][" << j + 1 << "] :";
            cin >> matrizB[i][j];
        }
    }
    system("cls");
    cout << "matriz A:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "matriz B:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "la suma de la matriz A + B :" << endl;

    int sumar[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumar[i][j] = matrizA[i][j] + matrizB[i][j];
            cout << sumar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}