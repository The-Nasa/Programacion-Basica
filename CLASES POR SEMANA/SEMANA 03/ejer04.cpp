#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    if (false)
        x++;
    x++;
    if (100)
    {
        x++;
    }
    x++;
    x++;
    cout<<x;
}