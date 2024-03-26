/*costruya una clase llamada rectangulo que tenga
los siguientes atributos: Largo y Ancho
y los siguientes metodos: perimetro() y area()*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo
{
private: // atributos o caracteristicas
    float largo, ancho;

public:  // metodos o funciones
    Rectangulo(float, float); // constructor
    void perimetro();
    void area();
};
Rectangulo::Rectangulo(int lar, int anc)
{ // constructor de la clase
    largo = lar;
    ancho = anc;
}
void Rectangulo :: perimetro(){
    cout<< "El perimetro del rectangulo es: "<<(largo+ancho)*2<<endl;
}
void Rectangulo ::area (){
    cout <<"La Area del rectangulo es: "<<largo*ancho<<endl;
}

int main()
{
    float l, a;
    cout << "Ingrese el largo del rectangulo: ";
    cin >> l;
    cout << "Ingrese el ancho del rectangulo: ";
    cin >> a;
    Rectangulo r1(l, a);  // creamos un objeto de la clase rectangulo con los valores ingresados por el usuario
    r1.perimetro();       // llamamos al metodo para calcular el perimetro
    r1.area();            // llamamos al metodo para calcular el area
    system(“pause”);     // sistema en pausa
    return 0;
}