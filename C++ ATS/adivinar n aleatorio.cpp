#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int numero, dato, contador = 0;
    srand(time(NULL));
    dato = 1 + rand() % (100);

    do
    {
        cout << "ingrese el numero: ";
        cin >> numero;

        if (numero < dato)
        {
            cout << "\ningrese un numero mayor\n";
        }
        if (numero > dato)
        {
            cout << "\ningrese un numero menor\n";
        }
        contador++;
    } while (dato != numero);

    cout << endl;
    cout << "acertaste el numero era " << dato<<endl;
    cout <<"has intentado "<<contador<<" veses";
    return 0;
}