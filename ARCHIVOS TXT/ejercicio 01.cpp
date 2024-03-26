#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream archivo("ejemplo.txt"); // Abre el archivo "ejemplo.txt" para lectura
    
    if (archivo.is_open()) {
        std::string linea;
        while (getline(archivo, linea)) { // Lee el archivo línea por línea
            std::cout << linea << '\n'; // Imprime la línea leída
        }
        archivo.close(); // Cierra el archivo
    } else {
        std::cout << "No se pudo abrir el archivo para lectura.\n";
    }

    return 0;
}
