//sumar todos los numeros que de el usuario haste que introdusca un cero
#include <iostream>
using namespace std;
int main (){
    float suma =0, numero ;
    do
    {
        cout <<"dime un numero "<<endl;
        cin>>numero;
        suma+=numero;
    } while (numero);
    cout << "los numeros introducidos suman "<<suma<<endl;
    


    return 0;
}