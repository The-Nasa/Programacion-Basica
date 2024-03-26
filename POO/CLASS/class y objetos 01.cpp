#include <iostream>
#include <stdlib.h>
using namespace std;
class Persona{
    private: //atributos o caraceristiacas
    int edad;
    string  nombre;
    public: //metodos 
    Persona (int, string);//constructor
    void leer ();
    void correr ();
};
//inicialisar el constructor y los atrivutos
Persona::Persona(int a_edad,string b_nombre){
    edad=a_edad;
    nombre=b_nombre;
}
void Persona :: leer(){
    cout << "soy "<<nombre<<" y estoy leyendo un libro" <<endl;

    }
void Persona :: correr(){
    cout <<"soy "<<nombre<<" y tengo "<< edad<<"anios"<<endl;
}

int main(){
    Persona p1=Persona(25,"juan");
    Persona p2(20,"meselemias");
    Persona p3(15, "lucas");
    p1.leer();
    p2.correr();
    p3.leer();
    p3.correr();
    system("pause");
    return 0;
}