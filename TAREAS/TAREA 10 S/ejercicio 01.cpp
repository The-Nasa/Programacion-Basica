#include <iostream>
using namespace std;
class Persona {
    private ://atributos 
    string nombre;
    int  edad;
    public://metodos
    Persona(string,int);
     void mostrarpersona();
};
//constructor de la clase padre  o persona
Persona::Persona(string _nombre,int _edad) {
    nombre=_nombre;
    edad=_edad;
}
void  Persona::mostrarpersona() {
    cout <<"nombre: "<<nombre<<endl;
    cout <<"Edad: "<<edad<<endl;
    }
class Estudiante :public Persona{
    private :
    float Nota;
    public :
    Estudiante(string,int,float);
    void MostrarEstudiante();
};
//constructor de la clase hija
Estudiante::Estudiante(string _nombre,int _edad,float _Nota):Persona(_nombre,_edad){
    Nota=_Nota;

}
void Estudiante::MostrarEstudiante(){
    mostrarpersona();
    cout << "Nota: "<<Nota<<endl;
}
int main(){
    Estudiante e1("Mese",20,15);
    e1.MostrarEstudiante();

    return 0;
}