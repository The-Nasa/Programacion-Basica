// ejercicio5 triangulo inscrito
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float ladoA, ladoB, ladoC, radio, area;
    cout<<"ingrese el lado A del tirangulo inscrito: ";cin>>ladoA;
    cout<<"ingrese el lado B del tirangulo inscrito: ";cin>>ladoB;
    cout<<"ingrese , adoA lado C el tirangulo inscrito: ";cin>>ladoC;
    cout<<"ingrese el radio del triangulo inscrito: ";cin>>radio;

    area=(ladoA*ladoB*ladoC)/(4*radio);
    
    cout << "\n el area es : "<<area;
  
    return 0;
}