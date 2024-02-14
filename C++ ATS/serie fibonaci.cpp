// sucecion  de fivonasi
#include <iostream>
using namespace std;
int main()
{

	int a = 0, b = 1, c = 1, n;
	cout << "ingrese el numero de elementos: ";
	cin >> n;
	cout<<"1 " ;
	for (int i = 1; i < n; i++)
	{
		c=a+b;
		a = b;
		cout <<c << " ";
		b = c;
	}

	return 0;
}
