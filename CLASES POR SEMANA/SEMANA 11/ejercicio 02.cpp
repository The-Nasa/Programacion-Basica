#include <iostream>
using namespace std;
class pila
{
private:
    int sp;
    int datos[10];

public:
    pila();
    void push(int);
    void pop();
    void mostrarelementos();
};
pila::pila() { sp = 0; }
void pila::push(int x)
{
    if (sp < 10)
    {
        datos[sp] = x;
        ++sp;
    }
    else
        cout << "Pila llena" << endl;
}
void pila::pop()
{
    if (sp > 0)
        sp--;
    else
        cout << "Pila vacia" << endl;
}
void pila::mostrarelementos()
{
    for (int i = 0; i < sp; i++)
        cout << datos[i] << " ";
    cout<<endl;
}
int main()
{
    pila p;
    int cont = 0, i = 0;
    for (; true;)
    {
        if (cont == 10)
            break;
        else if (i % 2 == 0)
        {
            p.push(i);
            cont++;
        }
        i++;
    }
    p.mostrarelementos();
    p.pop();//18
    p.pop();//16
    p.mostrarelementos();
    return 0;
}