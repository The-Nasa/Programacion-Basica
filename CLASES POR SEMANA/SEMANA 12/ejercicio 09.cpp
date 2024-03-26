#include <iostream>
using namespace std;

class Abuelo {
protected:
    string nombre1, nombre2;
    int edad1, edad2;
public:
    Abuelo(string _nombre1, int _edad1, string _nombre2, int _edad2)
        : nombre1(_nombre1), edad1(_edad1), nombre2(_nombre2), edad2(_edad2) {}

    virtual void mostrar() {
        cout << "----ABUELOS-----" << endl;
        cout << "Nombre: " << nombre1 << "  Edad: " << edad1 << endl;
        cout << "Nombre: " << nombre2 << "  Edad: " << edad2 << endl;
        cout << endl;
    }
};

class Padre : public Abuelo {
protected:
    string name1, name2;
    int age1, age2;
public:
    Padre(string _nombre1, int _edad1, string _nombre2, int _edad2, string _name1, int _age1, string _name2, int _age2)
        : Abuelo(_nombre1, _edad1, _nombre2, _edad2), name1(_name1), age1(_age1), name2(_name2), age2(_age2) {}

    void mostrar() override {
        Abuelo::mostrar();
        cout << "----PADRES----" << endl;
        cout << "Nombre: " << name1 << "  Edad: " << age1 << endl;
        cout << "Nombre: " << name2 << "  Edad: " << age2 << endl;
        cout << endl;
    }
};

class HijoS : public Padre {
protected:
    string nHijos[3];
    int eHijos[3];
public:
    HijoS(string _nombre1, int _edad1, string _nombre2, int _edad2, string _name1, int _age1, string _name2, int _age2,
        string _nHijo1, int _eHijo1, string _nHijo2, int _eHijo2, string _nHijo3, int _eHijo3)
        : Padre(_nombre1, _edad1, _nombre2, _edad2, _name1, _age1, _name2, _age2) {
            nHijos[0] = _nHijo1; eHijos[0] = _eHijo1;
            nHijos[1] = _nHijo2; eHijos[1] = _eHijo2;
            nHijos[2] = _nHijo3; eHijos[2] = _eHijo3;
    }

    void mostrar() override {
        Padre::mostrar();
        cout << "----HIJOS----" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "Nombre: " << nHijos[i] << "  Edad: " << eHijos[i] << endl;
        }
    }
};

int main() {
    HijoS H("Donato", 86, "Feliza", 76, "xxxx", 45, "Hermelinda", 48, "Yerson", 26, "Orlandin", 23, "Meselemias", 20);
    H.mostrar();

    return 0;
}
