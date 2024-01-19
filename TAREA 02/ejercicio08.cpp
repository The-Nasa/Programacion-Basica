// ejercicio5 triangulo, formula de Heron
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float ladoA, ladoB, ladoC, semiperimetro,semip;
    
    cout<<"ingrese el lado A del tirangulo : ";cin>>ladoA;
    cout<<"ingrese el lado B del tirangulo : ";cin>>ladoB;
    cout<<"ingrese el lado C el tirangulo : ";cin>>ladoC;

    semiperimetro=(ladoA + ladoB + ladoC)/2;
    semip=(semiperimetro)*(semiperimetro-ladoA)*(semiperimetro-ladoB)*(semiperimetro-ladoC);
    float area=sqrt(semip);

    cout << "\n el SEMIPERIMETRO  es : "<<semiperimetro;
    cout << "\n el AREA es : "<<area;
    return 0;
}