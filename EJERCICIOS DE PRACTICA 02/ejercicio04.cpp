#include <iostream>
#include <cmath>
using namespace std;
double valores(double r, double y, double z)
{
    double area;
    area = pow(r, 2) * M_PI;
    return area;
}

int main()
{

    cout << "el circolo #1 " << valores(12.2);
    cout << "el circolo #1 " << valores(12.8);

    return 0;
}