// ejercicio5 triangulo circunscrito
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float ladoA, ladoB, ladoC, radio, area,semiperimetro;
    cout<<"ingrese el lado A del tirangulo circunscrito: ";cin>>ladoA;
    cout<<"ingrese el lado B del tirangulo circunscrito: ";cin>>ladoB;
    cout<<"ingrese , adoA lado C el tirangulo circunscrito: ";cin>>ladoC;
    cout<<"ingrese el radio del triangulo circunscrito: ";cin>>radio;

    semiperimetro=(ladoA + ladoB + ladoC)/2;
    area=radio*semiperimetro;
    
    cout << "\n el SEMIPERIMETRO  es : "<<semiperimetro;
    cout << "\n el AREA es : "<<area;
    return 0;
}