//imprimir numeroos dentro de un rango
#include <iostream>
using namespace std;
int main()
{
    int primero, ultimo;
    do
    {
        cout << "dime el primer numero del rango  " ;cin >> primero;
        cout << "dime el ultimo numero del rango  " ;cin >> ultimo;
        if (ultimo <= primero)
            cout << "el rango no es valido, vuelva a introducir los valores  ";

    } while (ultimo <= primero);
    for (int i=primero;i<ultimo+1;i++)
    cout << i <<" ";

    return 0;
}