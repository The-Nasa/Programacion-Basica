class database{
    public:
    void guarda(){

    }
    void borrar(){

    }
    void mostrar(){

    }
}
class Oracle:public database{
    private:
    string cadena;
    int puerto;
    public:
    Oracle(string c,int p):cadena(c),puerto(p){}
    void temporales(){

    }
}
class Mysql:public database{
    private:
    string cadena;
    int puerto;
    public:
    Mysql(string c,int p):cadena(c),puerto(p){}
}
class Postgre:public database{
    private:
    string cadena;
    int puerto;
    public:
    Postgre(string c,int p):cadena(c),puerto(p){}
}
void main(){
    database *p=new Oracle("",1521);
    database *r=new Mysql("",3306);
    database *m=new postgre("",5432);
}