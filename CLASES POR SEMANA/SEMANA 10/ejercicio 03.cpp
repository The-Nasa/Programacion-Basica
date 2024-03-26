// objeto Perro con Name, Edad, Raza
// publico, privado con constructor

// mostrar su nombre y raza

// modificar su raza

// toda la informacion
#include <iostream>
using namespace std;
class Perro
{
private:
    string Name;
    int Edad;
    string Raza;

public:
    void setName(string name) { Name = name; }
    void setEdad(int edad) { Edad = edad; }
    void setRaza(string r) { Raza = r; }

    string getName() const { return Name; }
    int getEdad() const { return Edad; }
    string getRaza() const { return Raza; }
};

void MostrarInformacion(Perro P)
{
    cout << "Nombre del perro :" << P.getName() << endl;
    cout << "Edad del perro :" << P.getEdad() << endl;
    cout << "Raza del perro :" << P.getRaza() << endl
         << endl;
}

void ModificarRaza(Perro &P, string nueva_raza)
{
    P.setRaza(nueva_raza);
}

int main()
{
    Perro Pepe;
    Pepe.setName("Pepe");
    Pepe.setEdad(3);
    Pepe.setRaza("Labrador");
    MostrarInformacion(Pepe);
    ModificarRaza(Pepe, "Chusco");
    MostrarInformacion(Pepe);
    return 0;
}
