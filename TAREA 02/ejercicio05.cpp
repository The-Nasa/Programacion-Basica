// ejercicio5 triangulo
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float base,altura,area, perimetro,catetoA, catetoB;
    cout<<"ingrese el lado 1 del tirangulo: ";cin>>catetoA;
    cout<<"ingrese el lado 2 del tirangulo: ";cin>>catetoB;
    cout<<"ingrese la base del tirangulo: ";cin>>base;
    cout<<"ingrese la altura del triangulo: ";cin>>altura;

    area=(base*altura)/2;
    perimetro=catetoA+catetoB+base;
    
    cout << "\n el area es : "<<area;
    cout << "\n el perimetro es : "<<perimetro;
    return 0;
}