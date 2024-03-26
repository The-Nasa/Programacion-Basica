#include <iostream>
#include <string>
using namespace std;
class Class
{
private:
    int value1, value2;

public:
    void set_value1(int);
    int get_value1();
    void set_value2(int);
    int get_value2();
};
void Class::set_value1(int x)
{
    this->value1 = x;
}
int Class::get_value1()
{
    return this->value1;
}
void Class::set_value2(int x)
{
    this->value2 = x;
}
int Class::get_value2()
{
    return this->value2;
}
int main()
{
    int resp = 0;
    Class p;
    p.set_value1(5);
    p.set_value2(10);
    resp = p.get_value1() + p.get_value2();
    cout << resp;
    return 0;
}
