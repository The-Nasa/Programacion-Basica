#include <iostream>
using namespace std;
int main()
{
    int numero;
    int suma = 0;
        cout <<"digite cero para salir "<<endl;
    do
    {
        cout << "Ingresa un numero : "; cin >> numero;

        suma += numero;
    } while (numero != 0);

    cout << "La suma total de los numeros ingresados es: " << suma << endl;

    return 0;
}
