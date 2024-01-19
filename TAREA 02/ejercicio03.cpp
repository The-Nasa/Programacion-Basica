// ejercicio3 rombo 
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float Dmayor, Dmenor, area, lado , perimetro;
    cout<<"ingrese la diagonal mayor del rombo: ";cin>>Dmayor;
    cout<<"ingrese la diagonal menor del rombo: ";cin>>Dmenor;

    area=(Dmayor*Dmenor)/2;
    lado=sqrt(pow((Dmayor/2),2)+(pow((Dmenor/2),2)));
    perimetro=4*lado;

    cout << "\n el area es : "<<area;
    cout << "\n el lado es : "<<lado;
    cout << "\n el perimetro es : "<<perimetro;
    return 0;
}