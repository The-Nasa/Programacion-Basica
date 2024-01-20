#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<string> textos;
  string palabras;
  while(true)
  {
    cin>>palabras;
    if(palabras=="fin")
    {
    	break;
    }
  textos.push_back(palabras);
  
  }
  string concatenar ;
  for (string palabras : textos)
  {
   	concatenar += palabras;
  }
  cout << palabras;

  return 0;
}
    
          
