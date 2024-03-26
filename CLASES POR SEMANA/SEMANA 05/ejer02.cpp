#include <iostream>
#include <ctime>
#include <vector>

using namespace std;
int main()
{
    int x=15;
    int *p;
    p=&x;
    cout<<"Direccion:"<<p<<endl;
    cout<<"Valor:"<<*p<<endl;
    return 0;
}