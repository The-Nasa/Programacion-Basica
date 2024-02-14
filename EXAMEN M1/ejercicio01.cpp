#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> letras;
    char letra;

    cout << "Ingresa su nombre. 0 para salir: ";
    while (cin >> letra && letra != '0')
    {
        letras.push_back(letra);
    }

    int vocales = 0, consonantes = 0;
    size_t i = 0;
    while (i < letras.size())
    {
        char letra_actual = tolower(letras[i]);

        if (isalpha(letra_actual))
        {
            if (letra_actual == 'a' || letra_actual == 'e' || letra_actual == 'i' || letra_actual == 'o' || letra_actual == 'u')
            {
                vocales++;
            }
            else
            {
                consonantes++;
            }
        }

        i++;
    }

    cout << "Numero de vocales: " << vocales << endl;
    cout << "Numero de consonantes: " << consonantes << endl;

    return 0;
}
