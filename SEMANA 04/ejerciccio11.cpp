

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int maximo = 100, minimo = 1;
    int v[20];
    int sum = 0;
    for (size_t i = 0; i < 20; i++)
        v[i]=rand() % (maximo - minimo + 1) + minimo;
    for (size_t i = 0; i < 20; i++)
    {
        if (v[i] % 2 == 0)
            continue;
        sum += v[i];
        cout << v[i] << "\t";
    }
    cout << "la suma es: " << sum;

    return 0;
}
