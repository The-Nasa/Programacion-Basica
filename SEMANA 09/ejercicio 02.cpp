#include <iostream>
using namespace std;
void funcion(int a = 1, int b = 8, int c = 5)
{

    cout << a << "\t" << b << "\t" << c;
}

int main()
{

    funcion(10);
    return 0;
}
