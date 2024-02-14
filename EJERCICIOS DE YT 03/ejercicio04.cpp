#include <iostream>
#include <vector>
#include <string>
#include<cstdlib>
using namespace std;
struct personas
{
    string nombre;
    float edad;
};
int main()
{
    int n;
    cout << "ingrese el numero de persona ";
    cin>> n;
     cin.ignore();
    vector<personas> persona(n);
  

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el nombre: ";
        getline(cin, persona[i].nombre);

        cout << "ingrese la edad: ";
        cin >> persona[i].edad;
        cin.ignore();
        cout << endl;
    }
    system("cls");
    for (int i = 0; i < n; i++)
    {

        cout << "nombre: " << persona[i].nombre << endl;
        cout << "edad: " << persona[i].edad;
        cout << endl;
    }
    return 0;
}
