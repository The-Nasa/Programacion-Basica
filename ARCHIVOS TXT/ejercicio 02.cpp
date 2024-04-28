#include <fstream>
#include <iostream>
using namespace std;

string ingresarNombre()
{
    string nombre;

    cout << "Ingrese su nombre: " << endl;

    cin >> nombre;

    return nombre;
}
int main()
{
    std::ofstream archivo("ejemplo.txt", ios::app); // Crea o abre el archivo "ejemplo.txt" para escritura

    if (archivo.is_open())
    {
        archivo << ingresarNombre() << endl; // Escribe en el archivo
        archivo << "Estoy aprendiendo C++.\n";
        archivo.close(); // Cierra el archivo
    }
    else
    {
        std::cout << "No se pudo abrir el archivo para escritura.\n";
    }

    return 0;
}
