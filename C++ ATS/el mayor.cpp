#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n, mayor = 0;
    cout << "Ingrese el numero de elementos que desea ingresar: ";
    cin >> n;

    int numeros[n];
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Digite un numero: ";
        cin >> numeros[i];

        if (numeros[i] > mayor)
        {
            mayor = numeros[i]; 
        }
    }
    cout<<endl<<;
    cout << "el numero mayor es: " << mayor;
    return 0;
}