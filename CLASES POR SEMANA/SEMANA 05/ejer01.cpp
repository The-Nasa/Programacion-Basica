#include <iostream>
#include <ctime>
#include <vector>

using namespace std;
int main()
{
    vector <int> vect;
    vect.push_back(15);
    vect.push_back(7);
    vect.push_back(6);
    vect.push_back(2);
    vect.push_back(18);
    vect.push_back(14);
    int *p=&vect[0];
    for (size_t i = 0; i < vect.size(); i++)
        cout<<*(p+i)<<" ";    
    return 0; 
}