// ejercicio1 cuadrado
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float lado,area, perimetro, diagonal;
    cout<<"ingrese el lado de cuadrado: ";cin>>lado;

    area=lado*lado;
    perimetro=4*lado;
    diagonal=lado*sqrt(2);
    
    cout << "\n el area es : "<<area;
    cout << "\n el perimetro es : "<<perimetro;
    cout << "\n la diagonal es : "<< diagonal;
    return 0;
}
