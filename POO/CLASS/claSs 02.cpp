#include <iostream>
using namespace std;
class Mese
{
private:
    string nombre;
    int age;

public:
    Mese();
    Mese(string, int);
    void mostrar();
};
Mese ::Mese(string _nombre, int _age)
{
    nombre = _nombre;
    age = _age;
}
void Mese ::mostrar()
{
    cout << "Mi sombre es " << nombre << " y tengo " << age << " años" << endl;
}
int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    Mese mese1("Mese", 20);
    mese1.mostrar();

    return 0;
}
