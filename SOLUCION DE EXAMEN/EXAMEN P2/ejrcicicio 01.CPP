#include<iostream>
using namespace std;
class Persona{
    private:
    string nombre, apellido;
    public:
    Persona(string _nombre, string _apellido):nombre(_nombre), apellido(_apellido){}
    virtual void mostrar(){
        cout <<"Nombre: "<< nombre <<"\nApellido: "<< apellido <<endl;
    }
};
class Estudiante:public  Persona{
    private:
    int nota;
    public:
    Estudiante(string _nombre, string _apellido,int _nota):Persona(_nombre,_apellido) , nota(_nota){}
    void mostrar() override {
        Persona::mostrar();
        cout << "Nota: "<< nota << endl;
    }
};
class  Empleado : public Persona{
    private:
    int sueldo;
    public:
    Empleado(string _nombre, string _apellido,int _sueldo):Persona(_nombre,_apellido) , sueldo(_sueldo){}
    void mostrar()override{
        Persona::mostrar();
        cout << "Sueldo: "<< sueldo << endl;
    }
};
int main (){
    //Paso por valor
    Estudiante est("Juan", "Gonzalez",95);
    Empleado emp("Luis","Rodriguez",6789);
    est.mostrar();
    emp.mostrar();
    
    return 0;
}
