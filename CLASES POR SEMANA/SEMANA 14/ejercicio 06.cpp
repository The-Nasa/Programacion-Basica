#include <iostream>
using namespace std;

class Techo {
private:
    int x, y, z;
    int base;
public:
    Techo(int _x, int _y, int _z, int _base) : x(_x), y(_y), z(_z), base(_base) {}
    ~Techo() {}
    void dibuja() {
        cout << "Dibujando Techo en " << x << ", " << y << ", " << z << "  con base " << base << endl;
    }
    void setPosicion(int _x, int _y, int _z) {
        x = _x;
        y = _y;
        z = _z;
    }
};

class Bloque {
private:
    int base, altura;
    int x, y, z;
public:
    Bloque(int _base, int _altura, int _x, int _y, int _z) : base(_base), altura(_altura), x(_x), y(_y), z(_z) {}
    ~Bloque(){}
    void dibuja(){
        cout<<"Dibujando Bloque en "<<x<<", "<<y<<", "<<z<<" con base "<<base<<" y altura "<<altura<<endl;
    }
    void setPosicion(int _x, int _y, int _z){
        x = _x;
        y = _y;
        z = _z;
    }
    void setBase(int _base){
        base = _base;
    }
    int getAltura() {
        return altura;
    }
    void setAltura(int _altura){
        altura = _altura;
    }
};
class Casa {
private:
    Techo techo;
    Bloque bloque;
public:
    Casa(int _x,int _y,int _z,int _baseTecho,int _baseBloque,int _altura)
        : techo(_x, _y, _z, _baseTecho), bloque(_baseBloque, _altura, _x, _y, _z) {} 
    ~Casa(){}
    void setPosicion(int _x, int _y, int _z){
        techo.setPosicion(_x, _y, _z);
        bloque.setPosicion(_x, _y, _z);
    }
    void dibuja() {
        techo.dibuja();
        bloque.dibuja();
    }
};
class Urbanizacion{
public:
    Urbanizacion(){}
    ~Urbanizacion(){}
    void dibuja(){
        cout<<"Dibujando Urbanizacion"<<endl;
    }
};
int main(){
    Casa miCasa(30, 30, 30, 10, 20, 5);
    miCasa.setPosicion(5, 5, 5);
    miCasa.dibuja();

    Urbanizacion urbanizacion;
    urbanizacion.dibuja();

    return 0;
}
/* CREAR UNA MATRIS QUE EL USUARIO PUEDA INGREARAR 
VER SI EL CASILLERO ESTA VACIO  PARA GUARDAR EL ELEMENTO
DONDE QIERERES UN¿BICAR EL LOTE al fianl que muestra laurbanizacion con sus respectivos dueños
si esta bacio mostrar lote libre 
- solo crear un¿rbanisacion y casas

- tarea de los 5 pricipios solid 
*/
/* MESELEMIAS TAPULLIMA SERNA A*/
MESELEMIAS TAPULLIMA SERNA 