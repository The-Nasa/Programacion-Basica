#include <iostream>

using namespace std;
//V: Velocidad  Tiempo: Tiempo
//d=v*t--> Hallar distancia

int distancia(int v,int t){
    int r=v*t;
    return r;
}
int llenar(){
    int r;
    cout<<"Ingrese un numero: ";
    cin>>r;
    return r;
}
void mostrar(int x,int y,int z){
    cout<<"La distancia es: "<<x<<" * "<<y<<" = "<<z;
}
int main(){
    int v,t,d;
    v=llenar();
    t=llenar();
    d=distancia(v,t);
    mostrar(v,t,d);
}