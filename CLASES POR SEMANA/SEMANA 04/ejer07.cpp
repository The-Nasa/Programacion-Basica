#include <iostream>
using namespace std;
int main()
{
    int N, x, num, prom;
    cout << "Ingrese la cantidad de valores: " << endl;
    cin >> N;
    x = 0;
    prom = 0;
    while (true)
    {
        if (x == N)
            break;
        cout << "Ingrese el " << x << " numero: " << endl;
        cin >> num;
        prom = num + prom;
        x++;
    }
    cout << "la suma total es: " << prom << endl;
    return 0;
}