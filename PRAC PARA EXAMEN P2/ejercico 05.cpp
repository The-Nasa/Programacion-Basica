#include <iostream>
using namespace std;

// Declaración anticipada de la clase Amiga
class Amiga;

// Clase principal
class MiClase {
private:
    int numeroPrivado = 5;

    // Declaración de la función amiga
    friend void funcionAmiga(MiClase&);
    
    // Declaración de la clase amiga
    friend class Amiga;

public:
    void mostrarNumero() {
        cout << "Número privado: " << numeroPrivado << endl;
    }
};

// Definición de la función amiga
void funcionAmiga(MiClase& objeto) {
    cout << "Desde función amiga: " << objeto.numeroPrivado << endl;
}

// Clase amiga
class Amiga {
public:
    void mostrarNumeroAmigo(MiClase& objeto) {
        cout << "Desde clase amiga: " << objeto.numeroPrivado << endl;
    }
};

int main() {
    MiClase objeto;
    objeto.mostrarNumero(); // Imprime: Número privado: 5
    funcionAmiga(objeto);   // Imprime: Desde función amiga: 5
    
    Amiga amigo;
    amigo.mostrarNumeroAmigo(objeto); // Imprime: Desde clase amiga: 5
    
    return 0;
}
