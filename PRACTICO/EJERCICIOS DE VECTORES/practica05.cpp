#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <vector<int>>matriz;
    for (int i = 0; i < 3; ++i)
    {
        vector<int>fila;
        for (int j = 0; j < 3; ++j)
        {
            cout << "dime el numero: "<<endl;
            int num;
            cin>>num;
            fila.push_back(num);
        }
        matriz.push_back(fila);
    }

    return 0;
}