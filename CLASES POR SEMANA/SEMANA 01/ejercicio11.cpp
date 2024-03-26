// mostra y seleccionar munero impares de un rango
// de 20 numeros #include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{

    srand(time(NULL));
    int max = 10, min = 1;
    int v[20];
    for (size_t i = 0; i < 20; i++)
    {
        v[i] = rand() % (max - min + 1) + min;
    }

    return 0;
}