#include <iostream>
using namespace std ;

class Persona {
	private :
	string nombre ;
	int edad;
	public:
	Persona(string _nombre, int _edad):nombre(_nombre),edad(_edad){}
	void mostrar(){
	cout <<"Nombre: "<<nombre<<endl;
	cout <<"Edad: "<<edad<<endl;	
	}
};

int main(){
	string n;
	int e;
	cout<<"ingrese el nombre: ";
    cin <<n<<endl;
	cout<<"ingrese la edad: ";
    cin<<e<<endl;
	
	
	
	return 0;
}