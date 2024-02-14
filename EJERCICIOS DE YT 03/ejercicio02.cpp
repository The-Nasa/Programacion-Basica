#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct estudiantes
{
    string nombre;
    float nota;
};

int main()
{
    int n;

    cout << "ingrese la cantidad de estudiantes ";
    cin >> n;

    vector<estudiantes> estudiante(n);
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el nombre del estudiante: ";
        getline(cin, estudiante[i].nombre);
        cout << "ingrese la nota ";
        cin >> estudiante[i].nota;

        cout << endl;
    }
    cout << "los alumnos son: " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << "nombre: " << estudiante[i].nombre << endl;

        cout << "nota: " << estudiante[i].nota << endl;
        cin.ignore();
        cout << endl;
    }

    return 0;
}