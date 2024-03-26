#include <iostream>
using namespace std;
class Abuelo{
    private:
    string nombre1, nombre2;
    int edad1, edad2;
    public:
    Abuelo(string _nombre1,int _edad1,string _nombre2,int _edad2):nombre1(_nombre1),edad1(_edad1),nombre2(_nombre2),edad2(_edad2){}
    virtual void mostrar(){
        cout <<"----ABUELOS-----"<<endl;
        cout <<"Nombre: "<<nombre1<<"  Edad: "<<edad1<<endl;
        cout <<"Nombre: "<<nombre2<<"  Edad: "<<edad2<<endl;
        cout <<endl;
    }
};
class Padre:public Abuelo{
    private:
    string name1,name2;
    int age1,age2;
    public:
    Padre(string _nombre1,int _edad1,string _nombre2,int _edad2,string _name1,int _age1,string _name2,int _age2)
    :Abuelo(_nombre1,_edad1,_nombre2,_edad2),name1(_name1),age1(_age1),name2(_name2),age2(_age2){}
    void mostrar ()override{
        Abuelo::mostrar();
        cout <<"----PADRES----"<<endl;
        cout  <<"Nombre: "<<name1<<"  Edad: "<<age1<<endl;
        cout  <<"Nombre: "<<name2<<"  Edad: "<<age2<<endl;
        cout <<endl;

    }  
};
class  HijoS:public Padre {
    private :
    string nHijo1, nHijo2,nHijo3;
    int eHijo1,eHijo2,eHijo3;
    public:
    HijoS(string _nombre1,int _edad1,string _nombre2,int _edad2,string _name1,int _age1,string _name2,int _age2,
    string _nHijo1,int _eHijo1,string _nHijo2,int _eHijo2,string _nHijo3,int _eHijo3):Padre(_nombre1,_edad1,_nombre2,_edad2,
    _name1, _age1, _name2, _age2),nHijo1(_nHijo1),eHijo1(_eHijo1),nHijo2(_nHijo2),eHijo2(_eHijo2),nHijo3(_nHijo3),eHijo3(_eHijo3){}
    void mostrar()override{
        Padre::mostrar();
        cout <<"----HIJOS----"<<endl;
        cout  <<"Nombre: "<<nHijo1<<"  Edad: "<<eHijo1<<endl;
        cout  <<"Nombre: "<<nHijo2<<"  Edad: "<<eHijo2<<endl;
        cout  <<"Nombre: "<<nHijo3<<"  Edad: "<<eHijo3<<endl;

    }
};

int main (){
    HijoS H( "Donato",86,"Feliza",76,"xxxx",45,"Hermelinda",48,"Yerson",26,"Orlandin",23,"Meselemias",20);
    H.mostrar ();
    

    return 0;
}