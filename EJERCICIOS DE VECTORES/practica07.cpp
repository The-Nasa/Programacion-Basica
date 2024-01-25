// calcular el promedio de 8 notas con arrays STL
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<float, 8> notas;
    float suma = 0;
    for (int i = 0; i < 8; i++)
    {

        cout << "engrese la nota " << i + 1 << ":";
        cin >> notas[i];
        suma += notas[i];
    }
    cout << "el promedio es: "<< suma / 8;
}