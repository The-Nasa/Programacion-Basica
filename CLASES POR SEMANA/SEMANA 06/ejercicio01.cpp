#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
int main (){
    //OBTENER LA FECHA DEL SISTEMA
    time_t tiempoActual = time(0);
    tm *fecha = localtime(&tiempeActual);
    int dia = fecha->tm_mday<< "-";
    int es =fecha->tm_mon + 1;
    int anio =fecha->tm_year + 2004;
    if(fecha!=)



    return 0;

}