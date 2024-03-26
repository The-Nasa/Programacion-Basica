#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
public:
    Persona(string _nombre) : nombre(_nombre) {}
    virtual void consultar(){};
    virtual void mostrar() {}
};

void Persona::consultar() {
    cout << "Nombre: " << nombre << endl;
}

class Administrativo : public Persona {
private:
    int edad;
    string area;
public:
    Administrativo(string _nombre, int _edad, string _area)
        : Persona(_nombre), edad(_edad), area(_area) {}
    void consultar() override;
};

void Administrativo::consultar() {
    Persona::consultar();
    cout << "Edad: " << edad << endl;
    cout << "Area: " << area << endl;
}

int main() {
    Administrativo admin("Juan", 30, "Recursos Humanos");
    admin.consultar();
    return 0;
}
