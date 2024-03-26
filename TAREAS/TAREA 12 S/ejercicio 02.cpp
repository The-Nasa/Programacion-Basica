/*Polimorfismo con Herencia

Amplía la jerarquía de clases de la Tarea 1 para incorporar polimorfismo.
 Define una función virtual en la clase base y sobrescríbela en al menos una de
  las clases derivadas. Luego, crea un arreglo de punteros a la clase base y 
  utiliza el polimorfismo para realizar operaciones específicas en cada tipo de vehículo.*/
#include <iostream>
using namespace std;
class Vehiculo
{
private:
    string marca, modelo;
    int anio;

public:
    Vehiculo(string _marca, string _modelo, int _anio) : marca(_marca), modelo(_modelo), anio(_anio) {}
    virtual void mostrarDatos() 
    {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Anio: " << anio << endl;
    }
};
class Automovil : public Vehiculo
{
private:
    float precio;

public:
    Automovil(string _marca, string _modelo, int _anio, int _precio) : Vehiculo(_marca, _modelo, _anio), precio(_precio) {}
    void mostrarDatos() override
    {
        cout << "----AUTOMOVIL----" << endl;
        Vehiculo::mostrarDatos();
        cout << "Precio: $" << precio << endl;
        cout << endl;
    }
};
class Motocicleta : public Vehiculo
{
private:
    string tipo;

public:
    Motocicleta(string _marca, string _modelo, int _anio, string _tipo) : Vehiculo(_marca, _modelo, _anio), tipo(_tipo) {}
    void mostrarDatos() override
    {
        cout << "----MOTOCICLETA----" << endl;
        Vehiculo::mostrarDatos();
        cout << "Tipo: " << tipo << endl;
        cout << endl;
    }
};
int main()
{
    Vehiculo *vehiculos[] = {new Automovil("Toyota", "Yaris", 2023, 17290), new Motocicleta("Honda", "CBR600RR", 2021, "Deportiva")};
    for (auto vehiculo : vehiculos)
    {
        vehiculo->mostrarDatos();
    }
    return 0;
}