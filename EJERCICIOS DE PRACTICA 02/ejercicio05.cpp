#include <iostream>
#include <cmath>
using namespace std;
double respusta(double r)
{
    double x;
  x = pow(r, 2) * M_PI;
    return x;
}
double datos ()
{
    double r;
    cout <<"\n ingrese el radio; ";
    cin >> r;
    return r;
}
void mostrar (double respuesta)
{
 
cout <<"el area del circulo  es: "<<respuesta;
}



int main()
{
    int radio;
    radio= datos ();
    double respuesta;
    respuesta = area(radio);
    mostrar(respuesta);


    return 0;
}