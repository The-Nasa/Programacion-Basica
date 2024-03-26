#include <iostream>
using namespace std;

void porvalor(int a,int b){
    a=a*2;
    b=b*2;
}
void porreferencia(int &a,int &b){
    a*=2;
    b*=2;
}
void mostrar(int a,int b){
    cout<<"\nEl valor de \''a\'' es:"<<a<<"\t";
    cout<<"y el valor de\''b\''"<<b;
}
int main(){
    int a=5;
    int b=10;

    swi
    porvalor(a,b);
    mostrar(a,b);
    porreferencia(a,b);
    mostrar(a,b);
    return 0;
}