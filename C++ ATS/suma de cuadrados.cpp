//calcular la suma de los 10 primeros numeros
#include <iostream>
using namespace std;
int main(){
	int suma=0, cuadrado;
	for (int i=1; i<=10;i++){
		cuadrado =i*i;
		suma +=cuadrado;
	}
	cout <<"la suma de los 10 cuandrados es: "<<suma;
	
	return 0;
}
