#include <iostream>

class Numero
{ // Clase base
private:
    int valor;

public:
    Numero(int val) : valor(val) {}

    friend class Calculadora; // Declaración de amistad

    void mostrar() const
    {
        std::cout << "Numero: " << valor << std::endl;
    }
};

class Calculadora
{ // Clase amiga
public:
    int duplicar(const Numero &num) const
    {
        return num.valor * 2;
    }

    int cuadrado(const Numero &num) const
    {
        return num.valor * num.valor;
    }
};

int main()
{
    Numero num(5);
    num.mostrar();

    Calculadora calc;
    std::cout << "Duplicado: " << calc.duplicar(num) << std::endl;
    std::cout << "Cuadrado: " << calc.cuadrado(num) << std::endl;

    return 0;
}
