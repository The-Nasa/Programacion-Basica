#include <iostream>
#include <vector>
using namespace std;
vector<int> vectorDuplicado(vector<int> numeros)
{
    vector<int> numDuplicados;
    for (int numero : numeros)
    {
        bool esDuplicado = false;
        for (int numDuplicado : numDuplicados)
        {
            if (numDuplicado == numero)
            {
                esDuplicado = true;
                break;
            }
        }
        if (!esDuplicado)
        {
            numDuplicados.push_back(numero);
        }
    }
    return numDuplicados;
}
int main()
{
    vector<int> duplicadoNumeros = {1, 1, 3, 4, 1, 5, 2, 6, 7, 7, 8};
    vector<int> vector = vectorDuplicado(duplicadoNumeros);
    cout << "Vector original: ";
    for (int numero : duplicadoNumeros)
    {
        cout << numero << " ";
    }
    cout << "\nVector sin duplicado: ";
    for (int numero : vector)
    {
        cout << numero << " ";
    }

    return 0;
}


