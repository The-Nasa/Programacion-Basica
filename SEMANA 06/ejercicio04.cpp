#include <iostream>
using namespace std;

void SaludoDia()
{
}

//3 parametros
int Dia(int x, int y, int z)
{
    int respt;
    respt += x + y + z;
    return respt;
}
char Unir (char a, char b){
    char resp;
    resp=a+b;
    return resp;

}
void despedida (string name){
    cout << "adios compañero: "<<name;
}


int main(void)
{
    return 0;
}