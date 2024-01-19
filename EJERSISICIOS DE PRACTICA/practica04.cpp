// deeerminar si un numero es mayor, menor o iagual a cero
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "digite un numero " ; cin >>numero;
    if (numero > 0)
    {
        cout << numero << " es mayor que cero" << endl;
    }

    else if (numero == 0)
    {
        cout << numero << " es igual a cero" << endl;
    }
    else
    {
        cout << numero << " es menor a cero" << endl;
    }

    return 0;
}
