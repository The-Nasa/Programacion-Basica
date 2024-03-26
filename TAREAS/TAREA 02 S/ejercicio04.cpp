// ejercicio3 trapecio 
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float Bmayor, Bmenor, area,altura;
    cout<<"ingrese la base mayor del rombo: ";cin>>Bmayor;
    cout<<"ingrese la base menor del rombo: ";cin>>Bmenor;
    cout<<"ingrese la altura del rombo: ";cin>>altura;

    area=((Bmayor + Bmenor)*altura)/2;
    
    cout << "\n el area del rombo es : "<<area;

    return 0;
}