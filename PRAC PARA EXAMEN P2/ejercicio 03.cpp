/*3.	Herencia Múltiple
Crea una situación que requiera el uso de herencia múltiple. 
Diseña una jerarquía de clases donde una clase base tiene al menos dos 
clases derivadas. A continuación, crea una clase que herede de ambas
clases derivadas. Demuestra cómo se heredan las propiedades y métodos de ambas clases.
*/
#include <iostream>
using namespace std;

// Clase principal
class Animal {
private:
    string nombre;
public:
    Animal(string _nombre) : nombre(_nombre) {}
    virtual void mostrar() {
        cout << "Soy un " << nombre << endl;    
    }
    string getNombre() const { return nombre; }
};

// Clase derivada 1
class Mamifero : virtual public Animal {
private:
    string accion;
public:
    Mamifero(string _nombre, string _accion) : Animal(_nombre), accion(_accion) {}
    void mostrar() override {
        Animal::mostrar();
        cout << "Estoy " << accion << endl;  
    }
};

// Clase derivada 2
class Ave : virtual public Animal {
private:
    string color;
public:
    Ave(string _nombre, string _color) : Animal(_nombre), color(_color) {}
    void mostrar() override {
        Animal::mostrar();
        cout << "Me veo bien de color " << color << endl;
    }
};

// Clase que hereda de ambas clases derivadas
class Carnivoro : public Mamifero, public Ave {
private:
    int edad;
public:
    Carnivoro(string _nombre, int _edad, string _accion, string _color) 
    : Animal(_nombre), Mamifero(_nombre, _accion), Ave(_nombre, _color), edad(_edad) {}

    void comer() {
        cout << "Soy un " << getNombre() << ", tengo " << edad << " anios y me gusta comer carne." << endl;
    }

    void mostrar() override {
        Mamifero::mostrar(); 
        Ave::mostrar(); 
        comer(); 
    }
};

int main() {
    Mamifero m1("Gasela","corriendo");
    Ave a1("Pavo real", "negro");
    Carnivoro c1("Leon",5,"jugando", "amarillo");
    
    m1.mostrar();
    cout <<endl;
    a1.mostrar();
    cout<<endl;
    c1.mostrar();

    return 0;
}
