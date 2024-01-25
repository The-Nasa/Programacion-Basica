#include <iostream>
using namespace std;
int main(){
    //el mayor de tres
     float A,B,C;
    cout<<"ingrese el primer numero: ";cin>>A;
    cout<<"ingrese el segundo numero: ";cin>>B;
    cout<<"ingrese el tercer numero:";cin>>C;
    if (A>B && A>C)
    {
        cout<<"el mayor es; "<<A;
    }else if(B>C)
    cout <<"el mayor es; "<<B;
    else 
    cout<< "el mayor es "<<C;

    return 0;
}
