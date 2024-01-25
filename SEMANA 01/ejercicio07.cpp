// para sumar 7 numeros
#include <iostream>
using namespace std;
int main()
{
   int contador =0;
   double suma = 0;
   double numero =0;
   while (contador<7)
   {
    cout <<"engrese en numero"<< contador +1<<":";
    cin>>numero,
    suma +=numero;
    contador ++;

   }
   cout <<"la suma de los 7 numeroros  es: " <<suma<<endl;

    return 0;
}