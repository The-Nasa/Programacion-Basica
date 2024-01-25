// calcular el promedio de 8 notas vector
#include <iostream>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float> notas;
    float suma = 0;
    for (int i = 0; i < 8; i++)
    {
     
        cout << "ingrese la nota " << i + 1 << ":";
         float nota = 0;
        cin >> nota;
        notas.push_back(nota);

        suma += notas[i];
    }
    cout << "el promedio es: " << suma / 8;
    return 0;   
}