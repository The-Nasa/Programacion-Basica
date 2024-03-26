#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int max;
    cout << " \n digite los tres numeros";
    cin >> a;
    cin >> b;
    cin >> c;

    max = a;
    if (b > max)
    {
        max = b;
        cout << "el numero mayor es " max;
    }
    else if (c > max & c > b)
    {
        max = c
                  cout
              << "el numero mayor es " max;
    }
    else
    {
        cout << "el numero mayor es " max;
    }

    return 0;
}