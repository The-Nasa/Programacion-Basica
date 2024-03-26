/* 1.	Creación de una Jerarquía de Clases
Diseña una jerarquía de clases que represente vehículos. Incluye una clase base "Vehiculo"
y al menos dos clases derivadas que representen tipos específicos de vehículos
(por ejemplo, "Automovil" y "Motocicleta"). Añade propiedades y métodos relevantes
a cada clase. Luego, crea instancias de cada clase y demuestra la herencia.*/
#include <iostream>
using namespace std;
class Vehiculo
{
private:
    string marca, modelo;
    int anio;
    public:
    Vehiculo(string _marca, string _modelo, int _anio) : marca(_marca), modelo(_modelo), anio(_anio) {}
    void mostrarDatos()
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
    Automovil(string _marca, string _modelo, int _anio,int _precio):Vehiculo(_marca,_modelo,_anio),precio(_precio){}
    void mostrarAutomovil(){
        Vehiculo::mostrarDatos();
        cout<<"Precio: $"<<precio<<endl;
        cout << endl;
    }
};
class Motocicleta: public Vehiculo{
    private :
    string tipo;
    public:
    Motocicleta(string _marca, string _modelo,int _anio,string _tipo):Vehiculo(_marca,_modelo,_anio),tipo(_tipo){}
    void mostrarMotocicleta(){
        Vehiculo::mostrarDatos();
        cout<<"Tipo: "<<tipo<<endl;
        cout << endl;

    }
} ;
int
main()
{   cout<<"----AUTOMOVIL----"<<endl;
    Automovil auto1("Toyota","Yaris",2023,17290);
    auto1.mostrarAutomovil();
    cout<<"----MOTOCICLETA----"<<endl;
    Motocicleta moto1("Honda", "CBR600RR", 2021, "Deportiva");
    moto1.mostrarMotocicleta();

    return 0;
}