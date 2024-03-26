#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Persona {
private:
    int id;
    string apellidos;
    string nombres;
    string dni;
    string direccion;
public:
    Persona(int _id, string _apellidos, string _nombres, string _dni, string _direccion)
        : id(_id), apellidos(_apellidos), nombres(_nombres), dni(_dni), direccion(_direccion) {}
    void mostrarInformacion(){
        cout << "ID: " << id <<endl;
        cout << "Apellidos: " << apellidos <<endl;
        cout << "Nombres: " << nombres <<endl;
        cout << "DNI: " << dni <<endl;
        cout << "Direccion: " << direccion <<endl; 
    }

};

class Producto {
public:
    int id_producto;
    string descripcion;
    string tipo;
    string fecha;
    int precio;
    int stock;
    Producto(int _id_producto, string _descripcion, string _tipo, string _fecha, int _precio,int _stock)
        : id_producto(_id_producto), descripcion(_descripcion), tipo(_tipo), fecha(_fecha), precio(_precio), stock(_stock) {}

    void mostrarInformacion() {
        cout << "ID Producto: " << id_producto <<endl;
        cout << "Descripcion: " << descripcion <<endl;
        cout << "Tipo: " << tipo <<endl;
        cout << "Fecha: " << fecha <<endl;
        cout << "Precio: " << precio <<endl;
        cout <<"Stock: "<< stock<<endl;
        
    }

    void vender(int cantidad) {
        if (cantidad > stock) {
            cout << "No hay suficiente stock para realizar la venta." << endl;
        } else {
            stock -= cantidad;
            cout << "Venta realizada. \nStock actualizado: " << stock << endl;
        }
    }
};
class Ventas {
public:
    int id_venta;
    int id_producto;
    string fecha;
    int cantidad;

    Ventas(int _id, int _id_producto, string _fecha, int _cantidad)
        : id_venta(_id), id_producto(_id_producto), fecha(_fecha), cantidad(_cantidad) {}

    void mostrarInformacion() const {
        cout << "ID Venta: " << id_venta <<endl;
        cout << "ID Producto: " << id_producto <<endl;
        cout << "Fecha: " << fecha <<endl;
        cout << "Cantidad: " << cantidad <<endl;
        
    }
};
class Vendedor: public Persona{
private:
    int id_vendedor;



/*void agregarProductosAlmacen(vector<Productos>& alm , vector<Ventas> & ventas); 
bool buscarProdctoPorCodigo(vector<Productos>& alm ,int codigo );
void eliminarProductoDelAlmacen(vector<Productos>& alm , int codigo);
void actualizarInformacionDeUnProducto(vector<Productos>& alm , int codigo , string nombre , string tipo , Fecha fecha , double precio , int stock
void actualizarStock(vector<Productos>& alm , int codigo , int stocknuevo);
float calcularUtilidad(vector<Ventas>& ventas);
*/
public:
    Vendedor(int _id, string _apellidos, string _nombres, string _dni, string _direccion, int _id_vendedor)
        : Persona(_id, _apellidos, _nombres, _dni, _direccion), id_vendedor(_id_vendedor) {}
    void mostarInformacion(){
        Persona::mostrarInformacion();
        cout<<"Id vendedor: "<<id_vendedor<<endl;
    }


};

int main(){
    Persona p1(1, "Bailon Flores", "Luis", "72756369", "Av. Tito Jaime");
    p1.mostrarInformacion();
    cout << endl;

    Producto producto(101, "Laptop", "Electronico", "2024-01-12", 1200,80);
    producto.mostrarInformacion();
    producto.vender(5); // Venta de 5 unidades
    cout << endl;
    producto.mostrarInformacion(); // Mostrar información actualizada

    Ventas ven(1001, 101, "2024-01-12", 5);
    ven.mostrarInformacion();
    cout<<endl;

    Vendedor vendedor(2, "Arias Figeredo", "David", "67584312", "Jr. Maria Parado de Bellido", 201);
    vendedor.mostrarInformacion();

    return 0;
}
