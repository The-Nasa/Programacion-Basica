#include <iostream>
using namespace std;

class Ave {
public:
    virtual void volar() = 0; 
    virtual void comer() = 0; 
    virtual void caminar() = 0;
    virtual ~Ave(){} 
};

class Aguila : public Ave {
public:
    void volar() override { cout << "Estoy volando a gran velocidad." << endl; }
    void comer() override { cout << "Estoy comiendo carne." << endl; } 
    void caminar() override { cout << "Estoy caminando en la montana." << endl; }

  ;
};

class Pinguino : public Ave {
public:
    void volar() override { cout << "No puedo volar, soy un pinguino." << endl; }
    void comer() override { cout << "Estoy comiendo pescado." << endl; }
    void caminar() override { cout << "Estoy caminando sobre el hielo." << endl; }
};

class Avestruz : public Ave {
private:
    int altura;
public:
    Avestruz(int h) : altura{h} {}
    void volar() override { cout << "No puedo volar, soy un avestruz." << endl; }
    void comer() override { cout << "Estoy comiendo hierba." << endl; }
    void caminar() override { cout << "Estoy caminando en la sabana." << endl; }
    void mostrarAltura() { cout << "La altura del avestruz es de " << altura << " metros." << endl; }
};

int main() {
   
    Ave* ave1 = new Aguila();
    cout << "----DATOS DEL AGUILA----"<<endl;
    ave1->volar();
    ave1->comer();
    ave1->caminar();
    delete ave1;
    cout <<endl;

    Ave* ave2 = new Pinguino();
    cout << "----DATOS DEL PINGUINO----"<<endl;
    ave2->volar(); 
    ave2->comer();
    ave2->caminar();
    delete ave2;
    cout <<endl;


    Avestruz* avestruz = new Avestruz(5);
    cout << "----DATOS DEL AVESTRUZ----"<<endl;
    avestruz->volar(); 
    avestruz->comer();
    avestruz->caminar();
    avestruz->mostrarAltura();
    delete avestruz;

    return 0;
}
