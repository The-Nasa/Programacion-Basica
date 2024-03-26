#include<iostream>
using namespace std;
// Superclase Persona
class Persona {
private:
    string nombre, apellido;
public:
    Persona(string _nombre, string _apellido) : nombre(_nombre), apellido(_apellido) {}

    virtual void mostrar() {
        cout << "Nombre: " << nombre << "\nApellido: " << apellido << endl;
    }
};
// Clase derivada Estudiante
class Estudiante : public Persona {
private:
    int nota;
public:
    Estudiante(string _nombre, string _apellido, int _nota) : Persona(_nombre, _apellido), nota(_nota) {}
    int getNota() const { return nota; }
    void setNota(int _nota) { nota = _nota; }
    void mostrar() override {
        Persona::mostrar();
        cout << "Nota: " << nota << endl;
        cout<<endl;    
    }
};
// Clase derivada Empleado
class Empleado : public Persona {
private:
    int sueldo;
public:
    Empleado(string _nombre, string _apellido, int _sueldo) : Persona(_nombre, _apellido), sueldo(_sueldo) {}
    int getSueldo() const { return sueldo; }
    void setSueldo(int _sueldo) { sueldo = _sueldo; }
    void mostrar() override {
        Persona::mostrar();
        cout << "Sueldo: " << sueldo << endl;
        cout<<endl;
    }
};

// Función para pasar un valor por valor 
int pasarPorValor(int valor) {
    valor = 100;
    return valor;
}// Cambiamos el valor localmente

// Función para pasar un valor por referencia
void pasarPorReferencia(int& valor) {
    valor = 2500; // Cambiamos el valor original
}
int main() {
    // Crear instancias de las clases derivadas
    Estudiante est("Juan", "Gonzalez", 95);
    Empleado emp("Luis", "Rodriguez", 6789);

    // Mostrar información original 
    cout << "Informacion original:" << endl;
    est.mostrar();
    emp.mostrar();

    cout <<"imformacion modificada:"<<endl;
    // Paso por valor
    cout << "\nPaso por valor:" << endl;
    int nota = est.getNota();
    nota = pasarPorValor(nota);
    est.setNota(nota);
    est.mostrar();

    // Paso por referencia
    cout << "\nPaso por referencia:" << endl;
    int sueldo = emp.getSueldo();
    pasarPorReferencia(sueldo);
    emp.setSueldo(sueldo);
    emp.mostrar();

    return 0;
}
