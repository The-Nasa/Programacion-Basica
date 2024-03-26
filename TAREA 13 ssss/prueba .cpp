#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Clase TipoContacto
class TipoContacto {
public:
  int id;
  string correo;
  string telefono;

  TipoContacto(int _id, string _correo, string _telefono)
      : id(_id), correo(_correo), telefono(_telefono) {}

  void mostrarInformacion() const {
    cout << "ID: " << id << "\n";
    cout << "Correo: " << correo << "\n";
    cout << "Telefono: " << telefono << "\n";
  }
};

// Clase Persona
class Persona {
public:
  int identificador;
  string apellidos;
  string nombres;
  string direccion;
  vector<TipoContacto> tiposContacto;

  Persona(int _identificador, string _apellidos, string _nombres,
          string _direccion)
      : identificador(_identificador), apellidos(_apellidos),
        nombres(_nombres), direccion(_direccion) {}

  void agregarTipoContacto(TipoContacto tipoContacto) {
    tiposContacto.push_back(tipoContacto);
  }

  void mostrarInformacion() const {
    cout << "ID: " << identificador << "\n";
    cout << "Apellidos: " << apellidos << "\n";
    cout << "Nombres: " << nombres << "\n";
    cout << "Direccion: " << direccion << "\n";
    cout << "Tipos de Contacto:\n";
    for (const auto& tipo : tiposContacto) {
      tipo.mostrarInformacion();
      cout << "-------------------\n";
    }
  }
};

// Clase Departamento
class Departamento {
public:
  int codigo_dep;
  string nombre_dep;

  Departamento(int _codigo, string _nombre)
      : codigo_dep(_codigo), nombre_dep(_nombre) {}

  void mostrarInformacion() const {
    cout << "Codigo del Departamento: " << codigo_dep << "\n";
    cout << "Nombre del Departamento: " << nombre_dep << "\n";
  }
};

// Clase Empleado
class Empleado {
public:
  int codigo;
  float costo_hh;
  Departamento departamento;
  float salario;

  Empleado(int _codigo, float _costo_hh, Departamento _departamento)
      : codigo(_codigo), costo_hh(_costo_hh), departamento(_departamento),
        salario(0.0) {}

  virtual float CalcularSalario() = 0;

  void mostrarInformacion() const {
    cout << "Codigo del Empleado: " << codigo << "\n";
    cout << "Costo por Hora: " << costo_hh << "\n";
    cout << "Departamento:\n";
    departamento.mostrarInformacion();
    cout << "Salario: " << salario << "\n";
  }
};

// Clase Gerente
class Gerente : public Empleado {
public:
  float bono;

  Gerente(int _codigo, float _costo_hh, Departamento _departamento,
          float _bono)
      : Empleado(_codigo, _costo_hh, _departamento), bono(_bono) {}

  float CalcularSalario() override { return salario = costo_hh * 40 + bono; }

  void mostrarInformacion() const {
    Empleado::mostrarInformacion();
    cout << "Bono: " << bono << "\n";
  }
};

// Clase Ingeniero
class Ingeniero : public Empleado {
public:
  int horas_extra;

  Ingeniero(int _codigo, float _costo_hh, Departamento _departamento,
            int _horas_extra)
      : Empleado(_codigo, _costo_hh, _departamento), horas_extra(_horas_extra) {}

  float CalcularSalario() override {
    return salario = costo_hh * (40 + horas_extra);
  }

  void mostrarInformacion() const {
    Empleado::mostrarInformacion();
    cout << "Horas Extra: " << horas_extra << "\n";
  }
};

// Función para mostrar el menú de opciones
void mostrarMenu() {
  cout << "-------------------------\n";
  cout << "** Menú de opciones **\n";
  cout << "-------------------------\n";
  cout << "1. Agregar un nuevo empleado\n";
  cout << "2.
