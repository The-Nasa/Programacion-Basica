// ejercicio2 rectangulo
#include <iostream>
#include <cmath>
using namespace std;
int main (){

    float base,altura, area, perimetro;
    cout<<"ingrese la base del rectangulo: ";cin>>base;
    cout<<"ingrese la altura del rectangulo: ";cin>>altura;

    area=base*altura;
    perimetro=2*(base + altura);
    
    float diagonal=sqrt(pow(base,2)+ pow(altura,2));

    cout << "\n el area es : "<<area;
    cout << "\n el perimetro es : "<<perimetro;
    cout << "\n la diagonal es : "<< diagonal;
    return 0;
}
