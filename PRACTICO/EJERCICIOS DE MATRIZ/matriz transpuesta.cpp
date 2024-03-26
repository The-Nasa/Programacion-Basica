#include <iostream>
using namespace std;
int main()
{
    int matriz[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "digite un numero[" << i + 1 << "][" << j + 1 << "] :";
            cin >> matriz[i][j];
        }
    }
    cout << "matriz original: " << endl;
    ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "matriz tranpuesta: " << endl;
    ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}