#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Persona {
protected:
    int id;
    int dni;
    string nombres;
    string apellidos;
    string direccion;
public:
    Persona(int _id, string _nombre, string _apellido, int _dni, string _direccion)
        : id(_id), nombres(_nombre), apellidos(_apellido), dni(_dni), direccion(_direccion) {}
    void setId(int i) { id = i; }
    int getId() const { return id; }
    void setNombre(string n) { nombres = n; }
    string getNombre() const { return nombres; }
    void setApellido(string a) { apellidos = a; }
    string getApellido() const { return apellidos; }
    int getDni() const { return dni; }
    void setDni(int d) { dni = d; }
    string getDireccion() const { return direccion; }
    void setDireccion(string d) { direccion = d; }
    virtual void mostrarInformacion() const; // Declarar la función como virtual para que se puedan crear objetos de clase hija en una variable de tipo padre.
};

void Persona::mostrarInformacion() const {
    cout << "ID: " << getId() << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Apellido: " << getApellido() << endl;
    cout << "DNI: " << getDni() << endl;
    cout << "Dirección: " << getDireccion() << endl;
}

class Producto {
private:
    int codigo;
    string nombre;
    string tipo;
    string fecha;
    string precio;
    string stock;

public:
    Producto(int _codigo, string _nombre, string _tipo, string _fecha, string _precio, string _stock)
        : codigo(_codigo), nombre(_nombre), tipo(_tipo), fecha(_fecha), precio(_precio), stock(_stock) {}

    int getCodigo() const { return codigo; }
    string getNombre() const { return nombre; }
    string getTipo() const { return tipo; }
    string getFecha() const { return fecha; }
    string getPrecio() const { return precio; }
    string getStock() const { return stock; }

    void setCodigo(int c) { codigo = c; }
    void setNombre(string n) { nombre = n; }
    void setTipo(string t) { tipo = t; }
    void setFecha(string f) { fecha = f; }
    void setPrecio(string p) { precio = p; }
    void setStock(string s) { stock = s; }

    void mostrarProducto() const {
        cout << "Codigo del producto: " << getCodigo() << endl;
        cout << "Nombre del producto: " << getNombre() << endl;
        cout << "Tipo del producto : " << getTipo() << endl;
        cout << "Fecha de vencimiento: " << getFecha() << endl;
        cout << "Precio del producto: " << getPrecio() << endl;
        cout << "Stock disponible: " << getStock() << endl;
    }
};

class Ventas {
private:
    string id_venta;
    string id_producto;
    string fechav;
    int cantidad;
public:
    Ventas(string _id_venta, string _id_producto, string _fechav, int _cantidad)
        : id_venta(_id_venta), id_producto(_id_producto), fechav(_fechav), cantidad(_cantidad) {}
    string getIdVenta() const { return id_venta; }
    string getIdProducto() const { return id_producto; }
    string getFechaVenta() const { return fechav; }
    int getCantidad() const { return cantidad; }

    void setIdVenta(string i) { id_venta = i; }
    void setIdProducto(string p) { id_producto = p; }
    void setFechaVenta(string f) { fechav = f; }
    void setCantidad(int c) { cantidad = c; }

    void mostrarVentas() const {
        cout << "ID Venta: " << getIdVenta() << endl;
        cout << "ID Producto: " << getIdProducto() << endl;
        cout << "Fecha de la venta: " << getFechaVenta() << endl;
        cout << "Cantidad vendida: " << getCantidad() << endl;
    }
};

class Vendedor : public Persona {
private:
    int id_vendedor;
    vector<Ventas> ventas;

public:
    Vendedor(int _id, string _nombre, string _apellido, int _dni, string _direccion, int _id_vendedor)
        : Persona(_id, _nombre, _apellido, _dni, _direccion), id_vendedor(_id_vendedor) {}
    int getIdVendedor() const { return id_vendedor; }
    void setIdVendedor(int i) { id_vendedor = i; }
    void agregarVenta(Ventas v) { ventas.push_back(v); }

   void mostrarVentasDeUnVendedor() {
        cout << "ID Vendedor: " << getIdVendedor() << endl;
        cout << "Ventas realizadas:" << endl;
        for (const auto& venta : ventas) {
            venta.mostrarVentas();
        }
    }

    float ventasEnUnaFecha(string fecha) {
        float total = 0;
        for (const auto& venta : ventas) {
            if (venta.getFechaVenta() == fecha) {
                total += venta.getCantidad();
            }
        }
        return total;
    }

};
[]
void leerUsuarios(vector<Vendedor>& usuarios) {
    int contador = 0;
    while (true) {
        int opcion;
        system("cls");
        cout << "1. Agregar Vendedor" << endl;
        cout << "2. Mostrar Informacion de un Vendedor" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;
        if (opcion == 1) {
            int id;
            string nombre, apellido, direccion;
            int dni;
            cout << "Ingrese ID: "; cin >> id;
            cout << "Ingrese Nombre: "; cin >> nombre;
            cout << "Ingrese Apellido: "; cin >> apellido;
            cout << "Ingrese DNI: "; cin >> dni;
            cout << "Ingrese Dirección: "; cin >> direccion;
            Vendedor nuevoVendedor(id, nombre, apellido, dni, direccion, contador + 1);
            usuarios.push_back(nuevoVendedor);
            contador++;
        }
        else if (opcion == 2) {
            if (usuarios.empty()) {
                cout << "No hay vendedores para mostrar." << endl;
            }
            else {
                int id;
                cout << "Ingrese el ID del vendedor a buscar: ";
                cin >> id;
                bool encontrado = false;
                for (const auto& vendedor : usuarios) {
                    if (vendedor.getId() == id) {
                        vendedor.mostrarInformacion();
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) {
                    cout << "Vendedor no encontrado." << endl;
                }
            }
        }
        else if (opcion == 3) {
            break;
        }
    }
}

int main() {
    vector<Vendedor> usuarios;
    leerUsuarios(usuarios);
    return 0;
}
