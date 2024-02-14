// sucecion  de fivonasi
#include <iostream>
using namespace std;
int main()
{

    int a = 0;
    int b = 1;
    cout << " " << a << " " << b << " " ;

    for (int i = 0; i < 50; i++)
    {
        int suma = a + b;
        a = b;
        cout << suma << " ";
        b = suma;
    }
    
    return 0;
}