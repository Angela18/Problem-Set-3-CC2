#include<iostream>

using namespace std;

class Point{ //creamos una clase "Point"
    private:
        int x,y; //metodos privados de tipo int
    public:
        Point(int u, int v):x(u),y(v){} //declaramos un constructor
        int getX(){return x;} //funcion "getX" que retorna "x"
        int getY(){return y;} //funcion "getY" que retorna "y"
};

int main(){ //En la funcion principal
    Point *p=new Point(5,3); //instanciamos un objeto de tipo puntero "p" con valores 5 y 3
    cout<<p->getX()<<' '<<p->getY(); //imprimimos los valores de "x" y "y"
    return 0;
}
