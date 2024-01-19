// cuantos dias tiene un mes
#include <iostream>
using namespace std;
int main()
{
    int mes;
    cout << "elige le mes por numero; ";
    cin >> mes;
    if (mes > 12 || mes < 1){
        cout << "el numero de mes no exite " << endl;
        cout << "intentelo de nuevo" << endl;
    }
    else{
        switch (mes){
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "el mes tiene 30 dias" << endl;
            break;
        case 2:
            cout << "el mes tiene 28 dias o 29 si es bisiesto" << endl;
            break;
        default:
            cout << "el mes tiene 31 dias";
            break;
        }
    }

    return 0;
}
