#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string oracion;
    cout << "Ingrese una oracion: ";
    getline(cin, oracion);

    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;

    for (char caracter : oracion)
    {

        char caracterMinuscula = tolower(caracter);

        switch (caracterMinuscula)
        {
        case 'a':
            contadorA++;
            break;
        case 'e':
            contadorE++;
            break;
        case 'i':
            contadorI++;
            break;
        case 'o':
            contadorO++;
            break;
        case 'u':
            contadorU++;
            break;
        default:
            break;
        }
    }

    cout << "Cantidad de vocales 'a': " << contadorA << endl;
    cout << "Cantidad de vocales 'e': " << contadorE << endl;
    cout << "Cantidad de vocales 'i': " << contadorI << endl;
    cout << "Cantidad de vocales 'o': " << contadorO << endl;
    cout << "Cantidad de vocales 'u': " << contadorU << endl;

    return 0;
}
