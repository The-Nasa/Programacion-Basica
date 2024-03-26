// clases 
#include <iostream>
#include <stdlib.h>
using namespace std;
class Persona{
    private:
    string nombre;
    int  edad;
    public:
    Persona(string _nombre,int _edad):nombre(_nombre),edad(_edad){}
    void  mostrar();//metodo que muestra los atributos de la persona .
};
void Persona::mostrar(){
    cout<<"Nombre : "<<nombre<<endl;    
    cout<<"Edad : "<<edad<<endl;                
}

class Estudiante :public Persona {    
    private:
        string carrera;
    public:        
        Estudiante (string _nombre ,int _edad,string _carrera) :Persona(_nombre,_edad),carrera(_carrera){}    
        void mostrarc();//muestra los atributos de la persona y de estudiante.
        
};

void Estudiante ::mostrarc() {
    Persona::mostrar();
    cout << "Carrera : "<<carrera<< endl ;    
}
int main(){
    string n,c;
    int e;
    cout <<"ingrese su nombre :";
    getline(cin,n);
    cout <<"Ingrese su edad : ";
    cin>>e;
    cin.ignore();
    cout <<"Ingrese su carrera : ";
    getline(cin, c);

    system("cls");
    Estudiante est=Estudiante(n,e,c);
    est.mostrarc();
    return 0;
}