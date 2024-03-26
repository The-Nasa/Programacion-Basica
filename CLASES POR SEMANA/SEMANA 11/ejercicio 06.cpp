#include <iostream>
using namespace std;
class punto{
    private:
    int x,y;
    public:
    punto(int a,int b):x(a),y(b){}
    void show(){
        cout<<"X: "<<this->x<<" Y:"<<this->y<<endl;
    }
    void set_x(int a){
        this->x=a;
    }
    void set_y(int b){
        this->y=b;
    }
};
void modificarValor(punto x){
    x.set_x(100);
    x.set_y(200);
}
void modificarReferencia(punto& x){
    x.set_x(100);
    x.set_y(200);
}
int main(){
    punto p(5,10);
    p.show();
    modificarReferencia(p);
    p.show();
    return 0;
}
