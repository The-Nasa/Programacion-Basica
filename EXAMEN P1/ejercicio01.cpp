#include <iostream>
using namespace std;
int main()
{
    int i = 10, j = i++, k = --i;
    if (i > 0)
        j++;
    else
        k++;
    if (k == 0)
        i++;
    else if (k > 0)
        k--;
    else
        k++;
    int mult = i * j * k;
    cout << "i * j * k =" << mult << endl;
    cout << "i=" << i << endl;
    cout << "j=" << j << endl;
    cout << "k=" << k << endl;

    return 0;
}