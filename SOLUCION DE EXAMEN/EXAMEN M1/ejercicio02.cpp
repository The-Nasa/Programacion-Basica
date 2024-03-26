#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
struct frutas
{
    string nombre;
    int cantidad;
};

int main()
{
    int n;
    cout << "ingrese la cantidad de frutas: ";
    cin >> n;
    vector<frutas> fruta(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre de la fruta: ";
        getline(cin, fruta[i].nombre);
        cout << "Cuantos tiene?: ";
        cin >> fruta[i].cantidad;
        cin.ignore();
    }
    system("cls");
    cout<<endl;
    cout<<"las frutas son: \n";
    for (int i=0;i<n;i++){
    
        cout<<"Nombre: "<<fruta[i].nombre<<endl;
        cout<<"cantidad: "<<fruta[i].cantidad<<endl;
        cout<<endl;
    }
    return 0;
}