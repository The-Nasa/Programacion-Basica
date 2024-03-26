#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Contenedor {
private:
    vector<int> enteros;
    vector<string> nombres;

public:
    void agregarEntero() {
        int entero;
        cout << "Ingrese un entero: ";
        cin >> entero;
        enteros.push_back(entero);
    }

    void agregarNombre() {
        string nombre;
        cout << "Ingrese un nombre: ";
        cin >> nombre;
        nombres.push_back(nombre);
    }

    void mostrarElementos() {
        cout << "------Enteros en el contenedor------" << endl;
        for(int entero : enteros) {
            cout << entero << " ";
        }
        cout << endl; 

        cout << "------Nombres en el contenedor-------" << endl;
        for(string nombre : nombres) {
            cout << nombre <<endl;
            cout <<endl;

        }
        cout << endl;
    }
};

int main() {
    Contenedor miContenedor;
    int cantidadEnteros, cantidadNombres;

    cout << "¿Cuántos enteros desea agregar? ";
    cin >> cantidadEnteros;
    for(int i = 0; i < cantidadEnteros; i++) {
        miContenedor.agregarEntero();
    }

    cout << "¿Cuántos nombres desea agregar? ";
    cin >> cantidadNombres;
    cin.ignore(); 
    for(int i = 0; i < cantidadNombres; i++) {
        miContenedor.agregarNombre();
    }

    miContenedor.mostrarElementos();

    return 0;
}
