#include <iostream>
using namespace std;

void Sumar(int a,int b,int c,int d,int e,int &resp){
    resp=a+b+c+d+e;
}
int llenar(){
    int r;
    cout<<"Ingrese un numero: ";
    cin>>r;
    return r;
}
int main(){
    int a,b,c,d,e;
    int resp=0;
    a=llenar();
    b=llenar();
    c=llenar();
    d=llenar();
    e=llenar();
    Sumar(a,b,c,d,e,resp);
    cout<<"La respuesta es: "<<resp;
    return 0;
}