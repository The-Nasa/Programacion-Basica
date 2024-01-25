//sumar 5 numeros
#include <iostream>
using namespace std;

int Sumar(int a, int b, int c, int d, int e, int &resp){
    resp=a+b+c+d+e;
    return resp;
}
int llenar(){
    int r;
    cout <<"ingrese los numeros ";
    cin>>r;
    return r;


}
int main(){
    int a,b,c,d,e;
    int resp=0,
    a=llenar();
    c=llenar();
    e=llenar();
    d=llenar();
    e=llenar();
    sumar(a,b,c,d,e, resp);
    mostrar(a,b,c,d,e , resp);
    cout <<"la suma es "<<resp;

    return 0;
}