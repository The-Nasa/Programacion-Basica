#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int max;
    cout << "Ingrese 3 numeros: " << endl;
    cin >> a >> b >> c;
    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    cout << "El número mayor es " << max << endl;
    return 0;
}