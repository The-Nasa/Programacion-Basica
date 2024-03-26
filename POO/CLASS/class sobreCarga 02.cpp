// sobre carga de constructores

// clase de horas, minutos y segundos 
#include <iostream>
#include <stdlib.h>
using namespace std;
class Tiempo{
    private: //atributos o caractristicas
    int  horas,minutos,segundos;

    public: //metodos o funciones 
    Tiempo(int,int,int);//costructor 1
    Tiempo (int);//constructuctor  2
    void mostrarTiempo1();
    void mostrarTiempo2();
};
//constructor 1
Tiempo::Tiempo(int _horas,int _minutos,int _segundos){
    horas=_horas;
    minutos=_minutos;
    segundos=_segundos;
}
//constructor 2
Tiempo::Tiempo(int tiempoSeg){
    horas=tiempoSeg/3600;//extraer las horas
    tiempoSeg%=3600;
    minutos =tiempoSeg / 60;//extraeer los minutos
    segundos=tiempoSeg%60;//extraer los segundos 
}
void Tiempo::mostrarTiempo1(){
    cout <<"la hora es normal "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}
void Tiempo::mostrarTiempo2(){
    cout <<"la hora de segundos "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}


int main (){
    int s;
    cout  << "ingrese la cantidad de segundos : "; cin >> s;

    Tiempo horaHactual(23,23,45);
    Tiempo porSeg(s);
    horaHactual.mostrarTiempo1();
    porSeg.mostrarTiempo2();

    return 0;

}
