#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
public:
    Estudiante(string nom) : nombre(nom) {}

    string getNombre() const {
        return nombre;
    }
};

class Curso {
private:
    string nombre;
    vector<Estudiante*> estudiantes;
public:
    Curso(string nom) : nombre(nom) {}

    void inscribirEstudiante(Estudiante* estudiante) {
        estudiantes.push_back(estudiante);
    }

    void listarEstudiantes() const {
        cout << "Curso " << nombre << " tiene los siguientes estudiantes inscritos:" << endl;
        for (const auto& estudiante : estudiantes) {
            cout << estudiante->getNombre() << endl;
        }
    }
};

int main() {
    Estudiante est1("Juan Perez");
    Estudiante est2("Ana Lopez");
    Curso curso1("Programación en C++");

    curso1.inscribirEstudiante(&est1);
    curso1.inscribirEstudiante(&est2);

    curso1.listarEstudiantes();

    return 0;
}
