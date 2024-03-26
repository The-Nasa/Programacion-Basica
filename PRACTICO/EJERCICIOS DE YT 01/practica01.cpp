#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float num1, num2, resultado;
    int opcion;
    cout<<"ingrese el primer numero : ";cin>>num1;
    cout<<"ingrese el segundo numero : ";cin>>num2;
    cout << "\n 1. suma: ";
    cout << "\n 2. resta : ";
    cout << "\n 3. multiplicacion: ";
    cout << "\n 4. divicion: ";
    cout << "Ingrese el número de la opción: ";
    cin >> opcion;
    

    switch (opcion){
        case 1:
             resultado=num1 + num2;
             coout<<"la suma es: "<<resultado<< endl;
             break;
       case 2:
            resultado=num1 - num2;
            coout<<"la resta es: "<<resultado<< endl;
            break;
       case 3:
            resultado=num1 * num2;
            coout<<"la multiplicacion es: "<<resultado<< endl;
            break;
       case 4:
           if (num2 != 0) {
                resultado = num1 / num2;
                cout << "La división es: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }  
            break;
        default:
            cout << "Opción no válida." << endl;
            break;            
    }
  
    return 0;
}