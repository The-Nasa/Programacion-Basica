// para sumar 7 numeros
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, answer;
    char op;
    do
    {
        cout << "write 2  numbers :" << endl;
        cin >> n1 >> n2;
        answer = n1 + n2;
        cout << "the sum of " << n1 << " + " << n2 << " is equal to " << answer;
        cout << " do you wish is to continue? (s/n):";
        cin >> op;
        op = tolower(op);
        

    } while (op == 's');
    cout << "see you soon";

    return 0;
}