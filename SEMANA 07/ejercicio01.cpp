#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
struct libros
{
    string titulo;
    string autor;
    int fecha;
};
int main()
{
    int n;
    cout << "ingrese el numero de libros ";
    cin >> n;
    cin.ignore();
    vector<libros> libro(n);

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el nombre del libro: ";
        getline(cin, libro[i].titulo);

        cout << "ingrese el nombre del autor: ";
        getline(cin, libro[i].autor);

        cout << "ingrese la fecha de publicacion: ";
        cin >> libro[i].fecha;
        cin.ignore();
     
    }

    cout << "los libros son: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "titulo del libro: " << libro[i].titulo << endl;

        cout << "autor: " << libro[i].autor << endl;

        cout << "publicado: " << libro[i].fecha << endl;

        cout << "\n";
    }
    return 0;
}