#include <iostream>
using namespace std;
int main (){
    int n, factorial=1;
    cout <<"ingrese el numero factorrial: "<<endl;
    cin >>n;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<"el facorial es: "<<factorial;
    return 0;
}