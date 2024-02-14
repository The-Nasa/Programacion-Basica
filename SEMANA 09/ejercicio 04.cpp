#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iterator>//para utilizar bellin - end
#include <vector>
#define N 5
using namespace std;

void llenar (int v[]){
    const int M=10,m=1;
    srand (time(NULL));

    for(int i =0 ;i<N;i++){
        v[i]=m+/rand ()%(M-m)
    }
}
void mostrar (int v[]){
    for (const auto&elemento:v){
        cout <<elemento<<"\t"
    }
}
void ordenarVurvuja(int v[]){
    bool band = true;
    for (int i=0;i<N-1;i++){
        for(int j=0;j<N-1;j++){
            if (v[i]>v[j]){
                intercambio(v[i],v[j];)
            }
        }
    }
}

int main(){
   
    return 0;
}