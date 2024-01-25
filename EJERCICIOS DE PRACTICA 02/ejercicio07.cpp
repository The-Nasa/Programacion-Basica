#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int matriz[3][3];
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