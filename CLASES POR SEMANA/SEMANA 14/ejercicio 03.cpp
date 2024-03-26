#include <iostream>
#include <vector>
using namespace std;

class TipoContacto {
public:
    int id;
    string correo;
    string telefono;

    // Constructor
    TipoContacto(int id, string correo, string telefono) : id(id), correo(correo), telefono(telefono) {}
};

class Departamento {
public:
    int codigo_dep;
    string nombre_dep;

    // Constructor
    Departamento(int codigo_dep, string nombre_dep)
        : codigo_dep(codigo_dep), nombre_dep(nombre_dep) {}
};

class Persona {
public:
    int identificador;
    string apellidos;
    string nombres;
    string direccion;
    vector<TipoContacto> tipoContacto; // Vector de TipoContacto

    // Constructor
    Persona(int identificador, string apellidos, string nombres, string direccion)
        : identificador(identificador), apellidos(apellidos), nombres(nombres), direccion(direccion) {}

    // Método para agregar contacto
    void agregarContacto(TipoContacto contacto) {
        tipoContacto.push_back(contacto);
    }

    // Método para mostrar la información de la persona
    void mostrarInfo() {
        cout << "Identificador: " << identificador << endl;
        cout << "Nombres: " << nombres << endl;
        cout << "Apellidos: " << apellidos << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Contactos: " << endl;
        for(auto& contacto : tipoContacto) {
            cout << "ID: " << contacto.id << ", Correo: " << contacto.correo << ", Telefono: " << contacto.telefono << endl;
        }
    }
};
class Empleado : public Persona {
public:
    int codigo;
    double costo_hh;
    Departamento departamento;
    double salario;

    // Constructor
    Empleado(int identificador, string apellidos, string nombres, string direccion,
             int codigo, double costo_hh, Departamento departamento)
        : Persona(identificador, apellidos, nombres, direccion), codigo(codigo), costo_hh(costo_hh), departamento(departamento) {}

    // Método para calcular el salario
    double calcular_salario(double horas_trabajadas) {
        salario = horas_trabajadas * costo_hh;
        return salario;
    }
};

class Gerente : public Empleado {
public:
    double bono;

    // Constructor
    Gerente(int identificador, string apellidos, string nombres, string direccion,
            int codigo, double costo_hh, Departamento departamento, double bono)
        : Empleado(identificador, apellidos, nombres, direccion, codigo, costo_hh, departamento), bono(bono) {}

    // Sobrescritura del método para calcular el salario
    double calcular_salario(double horas_trabajadas) override {
        salario = Empleado::calcular_salario(horas_trabajadas) + bono;
        return salario;
    }
};

class Ingeniero : public Empleado {
public:
    double horas_extras;
    double tarifa_horas_extras;

    // Constructor
    Ingeniero(int identificador, string apellidos, string nombres, string direccion,
              int codigo, double costo_hh, Departamento departamento, double tarifa_horas_extras)
        : Empleado(identificador, apellidos, nombres, direccion, codigo, costo_hh, departamento), tarifa_horas_extras(tarifa_horas_extras), horas_extras(0) {}

    // Sobrescritura del método para calcular el salario
    double calcular_salario(double horas_trabajadas) override {
        double salario_base = Empleado::calcular_salario(horas_trabajadas);
        double pago_horas_extras = horas_extras * tarifa_horas_extras;
        salario = salario_base + pago_horas_extras;
        return salario;
    }

    // Método para establecer las horas extras trabajadas
    void establecer_horas_extras(double horas) {
        horas_extras = horas;
    }
};






int main() {
    // Creando contactos
    TipoContacto contacto1(1, "correo1@example.com", "123456789");
    TipoContacto contacto2(2, "correo2@example.com", "987654321");

    // Creando una persona y agregando contactos
    Persona persona1(1, "Doe", "John", "123 Main St");
    persona1.agregarContacto(contacto1);
    persona1.agregarContacto(contacto2);

    // Mostrando información de la persona
    persona1.mostrarInfo();


    // Creando un departamento
    Departamento depto(1, "Departamento de TI");

    // Creando un empleado
    Empleado empleado(1, "Doe", "John", "123 Main St", 1001, 10.0, depto);

    // Calculando el salario para 40 horas trabajadas
    double salario = empleado.calcular_salario(40);
    cout << "El salario es: " << salario << endl;


 
    // Creando un departamento
    Departamento deptoTI(1, "Departamento de TI");

    // Creando un gerente
    Gerente gerente(1, "Smith", "John", "123 Main St", 1001, 50.0, deptoTI, 5000.0);
    double salarioGerente = gerente.calcular_salario(40); // Suponiendo 40 horas de trabajo base
    cout << "Salario del Gerente: " << salarioGerente << endl;

    // Creando un ingeniero
    Ingeniero ingeniero(2, "Doe", "Jane", "456 Elm St", 1002, 30.0, deptoTI, 45.0);
    ingeniero.establecer_horas_extras(10); // Suponiendo 10 horas extras
    double salarioIngeniero = ingeniero.calcular_salario(40); // Suponiendo 40 horas de trabajo base
    cout << "Salario del Ingeniero: " << salarioIngeniero << endl;

    return 0;
}

