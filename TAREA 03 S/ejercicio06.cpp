#include <iostream>
using namespace std;
int main()
{
    int RCorrectas = 0;
    int RIncorrectas = 0;
    cout << "Pregunta 1: En que año piso el homdre laluna por primera ves?" << endl;
    cout << "a) 1968\nb) 1969\nc) 1971" << endl;

    char respuesta1;
    cout << "Tu respuesta: ";
    cin >> respuesta1;

    if (respuesta1 == 'b' || respuesta1 == 'B')
    {
        cout << "Correcto\n" << endl;
        RCorrectas++;
    }
    else
    {
        cout << "Incorrecto. La respuesta correcta es 1969.\n"<< endl;
        RIncorrectas++;
    }

    cout << "Pregunta 2: Cual es la energia obtenida por el viento?" << endl;
    cout << "a) solar \nb) Hidroelectrica\nc) Eolica" << endl;

    char respuesta2;
    cout << "Tu respuesta: ";
    cin >> respuesta2;

    if (respuesta2 == 'c' || respuesta2 == 'C')
    {
        cout << "Correcto\n" << endl;
        RCorrectas++;
    }
    else
    {
        cout << "Incorrecto. La respuesta correcta es Eolica.\n"<< endl;
        RIncorrectas++;
    }

    cout << "En que pais se invento el papel?" << endl;
    cout << "a) China\nb) Grecia\nc) Egipto" << endl;

    char respuesta3;
    cout << "Tu respuesta: ";
    cin >> respuesta3;

    if (respuesta3 == 'a' || respuesta3 == 'A')
    {
        cout << "Correcto\n"<< endl;
        RCorrectas++;
    }
    else
    {
        cout << "Incorrecto. La respuesta correcta es China.\n" << endl;
        RIncorrectas++;
    }

    cout << "Resultados del juego:" << endl;
    cout << "Respuestas correctas: " << RCorrectas << endl;
    cout << "Respuestas incorrectas: " << RIncorrectas << endl;

    return 0;
}
