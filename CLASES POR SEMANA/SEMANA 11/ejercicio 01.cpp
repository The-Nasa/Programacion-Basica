#include <iostream>
using namespace std;
class  Persona {
    private:
    string nombre;
    int edad;
    public:
    Persona(const string&_nombre, int _edad):nombre(_nombre), edad(_edad){}
    virtual void mostrar();
    };
class Estudiante:  public Persona{
    private :
    float nota;
    string facultad;
    public:
    Estudiante(const string &_nombre,int _edad,float _nota, const string &_facultad) :Persona(_nombre,_edad), nota(_nota), facultad(_facultad) {}
    void mostrar() override;
};
void Persona::mostrar(){
    cout <<"Nombre : "<<nombre<<endl;
    cout <<"Edad : "<<edad<<endl;
}

void Estudiante::mostrar(){
    Persona ::mostrar();
    cout <<"Nota : "<<nota<<endl;
    cout <<"Facultad : "<<facultad<<endl;       

}
int main(){
string  n, f;
int e;
float no;
cout << "Ingrese el Nombre del estudiante : ";
getline (cin ,n);
cin.ignore();
cout << "Ingrese la Edad : ";
cin >>e;
cout << "Ingrese la Nota : ";
cin >>no;
cout << "Ingrese su Facultad : ";
getline (cin ,f);

Estudiante e1 = Estudiante(n,e,no,f);
e1.mostrar();


    return 0;
}