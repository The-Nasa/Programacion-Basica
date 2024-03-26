//numeros primeros primos
#include <iostream>
using namespace std;
int main() {
    int inicio, fin;
    cout << "Ingrese el numero : ";
    cin >> inicio;



    if ((inicio %2=0) ||(inicio%5=0) ||(inicio%3=0) ) {
        cout << "El no es primo ." << endl;
        return 1;  
    }



    return 0;
}