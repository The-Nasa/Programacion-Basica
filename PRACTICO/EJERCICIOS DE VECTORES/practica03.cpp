#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main()
{
    array<array<int,3>,3>matriz;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "dime el numero: ";
            cin >> matriz[i][j];
        }
    }

    return 0;
}