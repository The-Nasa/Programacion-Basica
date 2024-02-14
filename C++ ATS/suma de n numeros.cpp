#include <iostream>
using namespace std;
int main()
{
    int n, suma = 0, suma2;
    cout << "ingrese el numero asta donde quieres que sume ";
    cin >> n;

    suma = (n * (n + 1)) / 2;

    cout << "la suma de los numeros es de: " << suma<<endl;
    // con un for

    for (int i = 1; i <= n; i++)
    {
        suma2 += i;
    }
    cout << "la suma con for es de: " << suma2<<endl;
    return 0;
}