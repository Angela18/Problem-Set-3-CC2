#include<iostream>

using namespace std;

class Point{ //creamos una clase "Point"
    int x,y; //dos variables de tipo int
    public:
        Point(int xx=0, int yy=0){x=xx, y=yy;} //declaramos un constructor inicializado en 0
        int getX() {return x;} //funcion "getX" retorna "x"
        int getY() {return y;} //funcion "getY" retorna "y"
        void setX(int xx){x=xx;} //funcion "setX" le asigna un nuevo valor a "x"
        void setY(int yy){y=yy;} //funcion "setY" le asigna un nuevo valor a "y"
};

int main(){ //En la funcion principal
    Point p(5,3); //instanciamos un objeto "p" con valores 5 y 3
    p.setX(4); //cambiamos el valor actual de "x" por 4
    p.setY(10); //cambiamos el valor actual de "y" por 10
    cout<<p.getX()<<" "<<p.getY(); //imprimimos los valores actualizados de "x" y "y"
    return 0;
}
