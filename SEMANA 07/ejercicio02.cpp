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
    cout << "ingrese el numero de libros: " ;
    cin >> n;
    cin.ignore();
    vector<libros> libro(n);
    for (int i = 0; i < n; i++)
    {
        cout << "ingreese el titulo del libro: ";
        getline(cin, libro[i].titulo);

        cout << "ingrese el nombre del autor: ";
        getline(cin, libro[i].autor);

        cout << "ingrese la fecha de publicaion: ";
        cin >> libro[i].publicacion;
        cin.ignore();

        cout << "\n";
    }
    system("cls");
    cout <<"los libros son:"<<endl;
    for(int i=0;i<n; i++){
        cout<<"titulo: "<<libro[i].titulo<< endl;
        cout<<"autor: "<<libro[i].autor<< endl;
        cout<<"punlicaion: "<<libro[i].publicacion<< endl;
        cout << "\n";

    }
    return 0;
}