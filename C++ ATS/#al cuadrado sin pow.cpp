#include <iostream>
using namespace std;
intmain()
{
    int x, y,reultado, suma=0;
    cout << "Enter un numbers: ";
    cin >> x;
    cout << "numero de pontencia: ";
    cin >> y;

    for (int i = 1; i < y; i++)
    {
     
        x = x * x;
        suma=x;
    }
    cout<<suma;
    return 0;
}//falta