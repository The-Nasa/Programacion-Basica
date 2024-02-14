#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
struct alumnos
{
    float nota;
    string nombre;
};
int main()
{
    int n;
    cout << "ingrese la cantidad de alumnos: ";
    cin >> n;
    vector<alumnos> alumno(n);
    cin.ignore();
    float suma = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el nombre del alumno: ";
        getline(cin, alumno[i].nombre);
        cout << "Ingrese la nota del alumno: ";
        cin >> alumno[i].nota;
        cin.ignore();
        cin<<endl;
        suma +=alumno[i].nota ;
    }
    cout << "los alumnos son: " << endl;
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << "el nombre es: " << alumno[i].nombre<<endl;
        cout << "la nota es : " << alumno[i].nota<<endl;
        
    }
    float promedio = suma / n;
    cout << "\n\nEl promedio general de las notas ingresadas es: " << promedio;
    return 0;
}