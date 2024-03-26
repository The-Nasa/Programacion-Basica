#include <iostream>
using namespace std;

class Pet {
private:
    string name;
    int edad;
public:
    Pet(string _name, int _edad) : name(_name), edad(_edad) {}

    virtual void mostrar() {
        cout << "Nombre: " << name << "\nEdad: " << edad;
    }
};

class Dog : public Pet {
private:
    string raza;
public:
    Dog(string _name, int _edad, string _raza) : Pet(_name, _edad), raza(_raza) {}

    void mostrar() override {
        Pet::mostrar(); 
        cout << "\nRaza: " << raza;
    }
};

class A : public Dog {
private:
    string fiis;
public:
    A(string _name, int _edad, string _raza, string _fiis) : Dog(_name, _edad, _raza), fiis(_fiis) {}

    void mostrar() override {
        Dog::mostrar(); 
        cout << "\nFIIS: " << fiis << endl;
    }
};

int main() {
    A objA("Blas", 5, "Labrador", "1234");
    objA.mostrar();

    return 0;
}
