// para sumar N numeros
#include <iostream>
using namespace std;
int main()
{
    int n, x, num, prom;
    cout << "ingresse la cantida de valores: " << endl;
    cin >> n;
    while (true)
    {
        if (x == n)
            break;

        cout << "engrese el" << x << "numero: " << endl;
        cin >> num;
        prom = num + prom;
        x++;
    }
    cout << "la suma de total de losnumeroros  es: " << prom << endl;

    return 0;
}