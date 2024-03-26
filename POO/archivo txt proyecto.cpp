#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FileManager {
private:
    string filename;

public:
    FileManager(const string& filename) : filename(filename) {}

    bool guardarDatos(const string& datos) {
        ofstream archivoSalida(filename, ios::app);
        if (!archivoSalida.is_open()) {
            cerr << "No se pudo abrir el archivo." << endl;
            return false;
        }

        archivoSalida << datos << endl;
        archivoSalida.close();

        cout << "Datos guardados correctamente en el archivo." << endl;
        return true;
    }
};

int main() {
    string datos;
    cout << "Introduce la información que quieres almacenar en el archivo: ";
    getline(cin, datos);

    FileManager fileManager("datos.txt");
    fileManager.guardarDatos(datos);

    return 0;
}
