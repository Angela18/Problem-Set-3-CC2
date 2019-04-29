#include<iostream>

using namespace std;

class Point{  //Creamos la clase "Point"
    private:
        int x,y;  //posee argumentos privados de tipo int
    public:
        Point(int u, int v): x(u), y(v) {}  //declaramos un constructor con parametros int
        int getX(){return x;}  //funcion "getX" que devuelve el valor de "x"
        int getY(){return y;} //funcion "getY" que devuelve el valor de "y"
        void setX(int newX) {x = newX;}  //funcion "setX" que asignara un nuevo valor a "x"
};

int main(){  //En la funcion principal
    Point p(5,3); //instanciamos un objeto llamado "p" con valores 5 y 3
    p.setX(9001); //llamaos a la funcion "setX" y le pasamos como parametro el valor 9001
    cout<<p.getX()<<' '<<p.getY(); //imprimimos los valores de "x" y "y" respectivamente
    return 0;                      // deveria imprimir 9001 y 3
}
