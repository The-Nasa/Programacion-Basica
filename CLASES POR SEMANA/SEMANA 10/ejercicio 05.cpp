#include <iostream>
using namespace std;
class Soldado{
    private:
    string name;
    int nivel;
    public:
    Soldado(string n):name(n),nivel(100){}
    void disparo(){ 
        if()

        nivel -=10;
    }
    void informacion(){
        cout <<"tipo de soldado:\t"<<this->name;
        cout<<"\nNivel de vida:\t"<<this->nivel<<endl;

    }



};


int main(){

    Soldado t1("Terran");
    Soldado t2("Terran");
    Soldado t3("Terran");
    Soldado t4("Terran");
    Soldado t5("Terran");
    Soldado t6("Terran");

    t1.informacion();
    t1.disparo();
    t1.disparo();
    t1.disparo();
    t1.disparo();


    return 0;
}
