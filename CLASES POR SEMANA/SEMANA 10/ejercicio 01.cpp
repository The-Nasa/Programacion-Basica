//calses y dos objetos
#include <iostream>
using namespace std;
class persona{
    public:
    string name;
    int year;
    //constructor  permite crear objetos 
    persona(string n,int y){
        this->name=n;
        this->year=y;
    }
    void mostrar (){
        cout<<"Nombre: "<<this->name<<" Edad: "<<this->year<<endl;
    }
};

int main()
{
   
    persona p1("Juan",20);
    P1.mostrar();
    persona p2("luis");
    p2.mostrar();
  

    return 0;
}
