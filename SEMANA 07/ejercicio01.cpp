#include <iostream>

using namespace std;

int area(int b, int l)
{
    return b * l;
}
int perimetro(int b, int l)
{
    return b + b + l + l;
}
void llenar(int &b, int &l)
{
    cout << "ingrese la base ";
    cin >> b;
    cout << "ingrese la altura";
    cin >> l;
}
void mostrar(int a, int p)
{
    cout << "el area es: " << a<<endl;
    cout << "el perimetro: " << p;
}

int main()
{
    int b, l;
    llenar(b, l);
    int a = area(b, l);
    int p = perimetro(b, l);

    mostrar(a, p);

    return 0;
}