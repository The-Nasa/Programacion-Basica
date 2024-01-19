// cañcular el promedio de una cantida determinada ade numeros
#include <iostream>
using namespace std;
int main()
{
    int cantidad;
    float suma = 0;
    cout << "cuantos numeros quieres sumar ?" << endl;
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "ingrese otro numero" << endl;
        float numero;
        cin >> numero;
        suma += numero;
    }

    cout << " el promedio es " << suma / cantidad;

    return 0;
}