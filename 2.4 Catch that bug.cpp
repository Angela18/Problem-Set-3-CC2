#include<iostream>

using namespace std;

class Point{  //Creamos la clase "Point"
    private:
        int x,y;  //tiene argumentos privados de tipo int
    public:
        Point(int u, int v): x(u), y(v){} //declaramos un constructor
        int getX(){return x;} //funcion "getX" que retorna "x"
        void setX(int newX); //definimos la funcion "setX"
};

void Point::setX(int newX){x=newX;} //funcion "setX" que dara un nuevo valor a "x"

int main(){ //En la funcion principal
    Point p(5,3); //instanciamos un objeto "p" con valores 5 y 3
    p.setX(0); //llamamos a la funcion "setX" con el valor de 0
    cout<<p.getX()<<" "<<"\n"; //imprimimos el valor de "x"
    return 0;
}
