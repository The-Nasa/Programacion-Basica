#include <iostream>
using namespace std;
int main ()
{
    int x=10;
    int *p;
    p=&x

    cout<<"valor de X:\t"<<x<<endl;
    cout<<"direccion de X:\t"<<&x<<endl;
    cout<<"P:\t"<<p<<endl;
    cout<<"valor de P:\t"<<*p<<endl;
    *p=20
    cout<<"P:\t"<<p<<endl;
    cout<<"valor de P:\t"<<*p<<endl;
    return 0;
}