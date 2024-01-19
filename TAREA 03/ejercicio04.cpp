#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return 1; 
    }
    cout << "Secuencia de Collatz para " << n << ": " << n << " ";

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
