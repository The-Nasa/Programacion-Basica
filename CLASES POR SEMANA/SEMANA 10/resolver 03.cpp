#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la clase Producto
class Producto {
public:
    int id_producto;
    string descripcion;
    string tipo;
    string fecha;
    double precio;
    int stock;
};

// Definición de la clase Ventas
class Ventas {
public:
    int id_ventas;
    int id_producto;
    string fecha;
    int cantidad;

    // Método para mostrar la información de la venta y del producto vendido
    void mostrarInformacion(const vector<Producto>& productos) {
        cout << "Venta #" << id_ventas << endl;
        cout << "Fecha: " << fecha << endl;
        cout << "Cantidad vendida: " << cantidad << endl;

        // Buscar el producto vendido por su id en el vector de productos
        for (const Producto& producto : productos) {
            if (producto.id_producto == id_producto) {
                cout << "Producto vendido:" << endl;
                cout << "ID: " << producto.id_producto << endl;
                cout << "Descripción: " << producto.descripcion << endl;
                cout << "Tipo: " << producto.tipo << endl;
                cout << "Fecha de ingreso: " << producto.fecha << endl;
                cout << "Precio: " << producto.precio << endl;
                cout << "Stock restante: " << producto.stock - cantidad << endl;
                break;
            }
        }
    }
};

// Definición de la clase Persona
class Persona {
public:
    int id;
    string nombre;
    string apellido;
    string dni;
    string direccion;
};

// Definición de la clase Vendedor, que hereda de Persona
class Vendedor : public Persona {
public:
    int id_vendedor;
    vector<Ventas> ventas;
};

int main() {
    // Ejemplo de uso
    Producto producto1 = {1, "Producto 1", "Tipo 1", "01/03/2024", 10.5, 50};
    Producto producto2 = {2, "Producto 2", "Tipo 2", "02/03/2024", 20.75, 100};

    vector<Producto> productos = {producto1, producto2};

    Ventas venta1 = {1, 1, "03/03/2024", 5};
    venta1.mostrarInformacion(productos);

    return 0;
}
