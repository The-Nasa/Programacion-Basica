#include <iostream>
#include <stdlib.h>

using namespace std;
void clearScreen() {
    // Utiliza la función system para limpiar la pantalla
    system("cls"); // En Windows
}


class Perro{ 

private: // atributos o caraceristiacas
    string nombre, raza;

public:                    // metodos o comportamientos
    Perro(string, string); // constructor
    ~Perro();              // destructor de objetos
    void mostrardatos();
    void jugar();
};
// constructor
Perro::Perro(string _nombre, string _raza) // constructor de la clase perro
{
    nombre = _nombre;
    raza = _raza;
}
// destructor
Perro::~Perro()
{
}

void Perro::mostrardatos() // muestra los datos del perro en pantalla
{
    cout << "Nombre: " << nombre << endl;
    cout << "Raza: " << raza << endl;
}
void Perro::jugar(){
    cout<<"el perro "<<nombre<<" esta jugando"<<endl;
    cout<<endl; 
}

int main()
{
    string n, r;
    cout << "Ingrese el nombre del perro: ";
    cin >> n;
    cout << "Ingrese la raza del perro: ";
    cin >> r;
    clearScreen();

    Perro p1(n,r);
    Perro p2( "Buddy", "Labrador");

    p1.mostrardatos();
    p1.jugar();

    p2.mostrardatos();
    p2.jugar();
    p2.~Perro();//DESTRUYENDO EL OBJETO

    return 0;
}