#include <iostream>
using namespace std;
int main()
{
    int counter = 0;
    while (true)
    {        
        if (counter == 9)
            break;
        cout << "hello" << endl;
        ++counter;
    }
    return 0;
}