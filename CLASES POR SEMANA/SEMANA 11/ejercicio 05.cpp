
#include <iostream>
using namespace std;
class computadora
{
private:
    string a;
    int b;
    int c;

public:
    computadora(string x, int y, int z) : a(x), b(y), c(z) {}
    computadora(string x, int y) : a(x), b(y), c(0) {}
    computadora(string x) : a(x), b(0), c(0) {}
    computadora() : a(""), b(0), c(0) {}
    void show()
    {
        cout << "Nombre: " << this->a << endl;
        cout << "Memoria: " << this->b << endl;
        cout << "Procesador: " << this->c << endl;
        cout<<endl;
    }
};
int main()
{
    computadora p1("pc", 4, 5);
    computadora p2("pc", 4);
    computadora p3("pc");
    computadora p4;
    p1.show();
    p4.show();
    return 0;
}
