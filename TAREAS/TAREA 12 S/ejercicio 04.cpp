/*4.	Aplicación Práctica de Herencia
Imagina que estás creando un sistema para una biblioteca. 
Diseña una jerarquía de clases que represente diferentes tipos de 
recursos bibliográficos, como libros, revistas y periódicos. Utiliza
la herencia para compartir propiedades comunes y añade propiedades
específicas para cada tipo de recurso. Crea instancias de estas 
clases y demuestra cómo la herencia simplifica la manipulación de 
estos recursos en el sistema de la biblioteca.
*/
#include <iostream>
#include<vector>
using namespace std;
 //Clase padre o superclase
class  RecursoBibliografico {
    private:
    string nombre;
    int anio;
    public:
    RecursoBibliografico(string _nombre,int _anio):nombre(_nombre),anio(_anio){}
    virtual void mostrar(){
        cout << "Titulo: "<< nombre << endl;
        cout << "Publicacion: "<< anio <<endl;
    }
    };
// Clase hija libro
class Libro : public RecursoBibliografico{
    private:
    string autor;
    public:
    Libro(string _nombre,int _anio,string _autor):RecursoBibliografico(_nombre, _anio),autor(_autor){}
    void mostrar ()override{
        cout <<"----DATOS DEL LIBRO---"<<endl;
        RecursoBibliografico::mostrar();
        cout  << "Autor: "<< autor << endl;
        cout <<endl;
    }
};
class Revista:public RecursoBibliografico{
    private:
    string editorial;
    public:
    Revista(string _nombre,int _anio,string _editorial):RecursoBibliografico(_nombre,_anio),editorial(_editorial){}
    void mostrar ()override{
        cout <<"--- DATOS DE LA REVISTA ---"<<endl;
        RecursoBibliografico::mostrar();
        cout  << "Editorial: "<<editorial<<endl;
        cout <<endl;

    }
};
class Periodico:public RecursoBibliografico{
    private:
    string   redactor;
    public:
    Periodico(string _nombre,int _anio,string _redactor):RecursoBibliografico(_nombre,_anio), redactor(_redactor){}
    void mostrar() override{
        cout<<"---DATOS DEL PERIODICO---"<<endl;
        RecursoBibliografico::mostrar();
        cout <<"Redactor: "<<redactor<<endl;
        cout <<endl;

    }

};

int main (){
    vector <RecursoBibliografico*> biblioteca;
    biblioteca.push_back(new Libro("El arte de la guerra",1905,"Carl von Clausewitz"));
    biblioteca.push_back(new Revista("Revista de Filosofia",2003,"Imprenta Nacional"));
    biblioteca.push_back(new Periodico("La Nacion",1865,"Cuadernos de la Nacion"));

    for (auto i : biblioteca) {
        i->mostrar();
    }
    return 0;
}