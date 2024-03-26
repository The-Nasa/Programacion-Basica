// crear una clase con var1 y var2

// mostrar var1 y var2

// mostrar suma
// modificar suma

#include <iostream>
using namespace std;
class casa
{
private:
    int var1;
    int var2;

public:
casa(int x, int y):var1(x), var2(y) {}  // constructor de la clase
    int 
    int set_var(int a, int b)
    {
        var1 = a;
        var2 = b;
    }
    void show_vars()
    {
        cout << "Var1= " << var1 << endl;
        cout << "Var2= " << var2 << endl;
    }

    int getSuma() { return var1 + var2; }
};

int main()
{
   
}
