#include <iostream>
#include <ctime>
#include <vector>

using namespace std;
int main()
{
    int i = 4;
    switch (i)
    {
    case 1:
        cout << "Only one?" << endl;
        break;
    case 2:
        cout << "I want more" << endl;
        break;
    case 3:
        cout<<"UNAS";
        break;
    case 4:
        cout << "OK" << endl;
        default:
        cout<<"FIIS";
    }
    return 0;
}