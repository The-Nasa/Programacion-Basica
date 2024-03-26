#include <iostream>
using namespace std;
class Nombre {
    private:
    string name;
    public:
    Nombre(string  x) :name(x){} // constructor
    virtual void mostrar(){}
};
class apellido:public Nombre{
    private:
    string apell;
    public:
    apellido(string n, string s ):Nombre(n),apell(s){}//constructor de herencia
    void mostrar() override {
         cout << "nombre: "<name <<endl;
         cout << "apellido: "<<apell<<endl;
    }
};

int main() {
    Nombre *n;
    apellido *a;
    n=a=new apellido ("Meselemias", "Tapullima");
    n->mostrar();
    a->mostrar();


    return 0;   
}