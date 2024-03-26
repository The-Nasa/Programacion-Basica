#include <fstream>
#include <iostream>

int main() {
    std::ofstream archivo("ejemplo.txt"); // Crea o abre el archivo "ejemplo.txt" para escritura
    
    if (archivo.is_open()) {
        archivo << "Hola, mundo!\n"; // Escribe en el archivo
        archivo << "Estoy aprendiendo C++.\n";
        archivo.close(); // Cierra el archivo
    } else {
        std::cout << "No se pudo abrir el archivo para escritura.\n";
    }

    return 0;
}

