// contar los digitos de un numero
#include <iostream>
using namespace std;
int main()
{
    int numero, digitos = 0;
    cout << "digite el numero " << endl;
    cin >> numero;

    while (numero > 0)
    {
        numero /= 10;
        digitos++;
    }
    cout << "el numero tirne " << digitos << " digitos " << endl;

    return 0;
}