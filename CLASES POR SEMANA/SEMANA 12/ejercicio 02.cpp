#include<iostream>
using namespace std;
class super{
    private:
    int x;
    public:
    void set_x(int a){
        this->x=a;
    }
    int get_x(){
        return this->x;
    }
};
class sub:private super{

};
class sub2:sub{
    public:
    void mostrar(){

    }
};
int main(){
    sub r;
    //r;
    sub2 p;
    p.
}
