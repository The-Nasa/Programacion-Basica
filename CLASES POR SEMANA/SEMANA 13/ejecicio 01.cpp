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
        : id_producto(_id_producto), descripcion(_descripcion), tipo(_tipo), fecha(_fecha), precio(_precio) {}

    void mostrarInformacion() {
        cout << "ID Producto: " << id_producto <<endl;
        cout << "Descripcion: " << descripcion <<endl;
        cout << "Tipo: " << tipo <<endl;
        cout << "Fecha: " << fecha <<endl;
        cout << "Precio: " << precio <<endl;
        cout <<"Estock: "<< stock<<endl;
        
    }
};
class Venta {
public:
    int id_venta;
    int id_producto;
    string fecha;
    int cantidad;

    Venta(int _id, int _id_producto, string _fecha, int _cantidad)
        : id_venta(_id), id_producto(_id_producto), fecha(_fecha), cantidad(_cantidad) {}

    void mostrarInformacion() const {
        cout << "ID Venta: " << id_venta <<endl;
        cout << "ID Producto: " << id_producto <<endl;
        cout << "Fecha: " << fecha <<endl;
        cout << "Stock: " << cantidad <<endl;
        cout <<endl;
    }
};
class Vendedor: public Persona{
    private:
    int id_vendedor;
    vector<Venta> ventas;
    
    public:
    Vendedor(int _id, string _apellidos, string _nombres, string _dni, string _direccion, int _id_vendedor)
        : Persona(_id, _apellidos, _nombres, _dni, _direccion), id_vendedor(_id_vendedor) {}
    void mostarInformacion(){
         Persona::mostrarInformacion();
         cout<<"Id vendedor: "<<id_vendedor<<endl;
    }
    

};

int main(){
    Persona p1(1, "Luis", "Bailon Flores", "72756369", "Av. Tito Jaime");
    p1.mostrarInformacion();

    Producto producto(101, "Laptop", "Electronico", "2024-01-12", 1200,10);
    producto.mostrarInformacion();

    Venta ven(1001, 101, "2024-01-12", 5);
    ven.mostrarInformacion();

    Vendedor vendedor(2, "David", "Arias Figeredo", "67584312", "Jr. Maria Parado de Bellido", 201);
    vendedor.mostrarInformacion();
    
    return 0;
}