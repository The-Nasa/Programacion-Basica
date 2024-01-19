#include <iostream>
#include <cmath>
using namespace std;
int main (void){
    int  i,j;   
    cin>>i;
    j=i;
    if (i>=9){

    
      i+=9-i;
      j/=i;
      cout<<j;
      }  

 
 
    return 0;
}