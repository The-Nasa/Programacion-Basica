//metodos y constructores con setters y getters 
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class Punto{
    private://atributos
    int x,y;
    public://metodos
    Punto();
    void setPunto(int,int);
    int getPuntoX();
    int getPuntoy();


};
//constructr 1
Punto::Punto(){

}
//establesemoas valores alas vaariables
void Punto::setPunto(int _x,int _y){
    x=_x;
    y=_y;
    }
int Punto ::getPuntoX(){return x;}
int Punto ::getPuntoy(){return y;}


int main()
{   Punto Punto1;
    cout<<"Ingrese la coordenada X del punto:"<<endl;
    int x=0;
    cin>>x;
    cout<<"Ingrese la coordenada Y del punto:"<<endl;
    int y=0;
    cin>>y;
    Punto1.setPunto(x,y);
    cout<<"La coordenada X de el punto es: "<<Punto1.getPuntoX()<<endl;
    cout<<"La coordenada Y de el punto es: "<<Punto1.getPuntoy()<<endl;
    

    Punto1.setPunto(15,10);
    cout<<"La coordenada X es: " << Punto1.getPuntoX() << endl;
    cout<<"La coordenada Y es: " << Punto1.getPuntoy() <<endl;

    return 0;
}