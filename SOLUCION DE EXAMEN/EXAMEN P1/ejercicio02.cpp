#include <iostream>
using namespace std;
int main()
{
    int i = 8, j = i++, k = --i;
    if (i > 0)
    {
        j++;
        k++;
    }
    else
    {
        k++;
        i++;
    }
    if (k == 0)
    {
        i++;
        j++;
    }
    else
    {
        if (k > 0)
            k--;
        else
            k++;
        i++;
    }
    int mult = i * j * k;
    cout << "i * j * k =" << mult << endl;
    cout << "i=" << i << endl;
    cout << "j=" << j << endl;
    cout << "k=" << k << endl;

    return 0;
}