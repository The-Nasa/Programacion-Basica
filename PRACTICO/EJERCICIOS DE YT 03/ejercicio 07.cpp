#include <iostream>
#include <iostream>
#include <vector>
using namespace std;
class Persona {
    private:
    string nombre ;
    int edad ;
    string trabajo;
    public:
    Persona (string _nombre, int _edad,string _trabajo):nombre(_nombre),edad(_edad),trabajo(_trabajo){}
    void Presentar(){
        cout <<"----- DATOS DE LA PERSONA -----"<<endl;
        cout <<"INGRESE EL NOMBRE: "<< nombre << endl;
        cout <<"INGRESE SU EDAD: "<<edad<<endl;
        cout <<"INGRESE SU TRABAJO: "<<trabajo<<endl;
    }
};

class Mostrar_info{
    private:
    Persona &personas;
    public:
    Mostrar_info(Persona &_personas):personas(_personas){}
    void display(){
        personas.Presentar();
    }
};

int main (){
    Persona p1("jose");
    p1.Presentar();
   

    return 0;
}