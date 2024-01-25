#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

struct libros
{
    string titulo;
    string autor;
    int publicacion;
};

int main()
{
    int n;
    cout << "Ingrese el numero de libros: ";
    cin >> n;
    cin.ignore(); // Agrega esta línea para ignorar el carácter de nueva línea

    vector<libros> libro(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el titulo del libro: ";
        getline(cin, libro[i].titulo);

        cout << "Ingrese el nombre del autor: ";
        getline(cin, libro[i].autor);

        cout << "Ingrese la fecha de publicacion: ";
        cin >> libro[i].publicacion;
        cin.ignore(); // Agrega esta línea para ignorar el carácter de nueva línea
        cout << "\n";
    }

    system("cls");
    cout << "Los libros son : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Titulo del libro: " << libro[i].titulo << endl;
        cout << "El autor es: " << libro[i].autor << endl;
        cout << "Fecha de publicacion: " << libro[i].publicacion << endl;
        cout << "\n";
    }

    return 0;
}
