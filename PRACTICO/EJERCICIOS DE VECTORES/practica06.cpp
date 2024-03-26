// calcular el promadio de 8 notas de un alumno
//con array tipo C

#include <iostream>
using namespace std;
int main()
{
    float notas[8];
    float suma = 0;
    for (int i = 0; i < 8; i++)
    {
        cout << "dime la nota " << i + 1 << ":";
        cin >> notas[i];
        suma += notas[i];
    }
    cout << "el promedio de la npota es: " << suma / 8;

    return 0;
}