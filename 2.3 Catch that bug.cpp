#include<iostream>

using namespace std;

class Point{  //Creamos la clase "Point"
    private:
        int x,y;  //tiene argumentos privados de tipo int
    public:
        Point(int u, int v): x(u), y(v){} //declaramos un constructor
        int getX(){return x;} //funcion "getX" que retorna "x"
        int getY(){return y;} //funcion "getY" que retorna "y"
};

int main(){ //En la funcion principal
    Point p(5,3); //instanciamos un objeto "p" con valores 5 y 3
    cout<<p.getX()<<" "<<p.getY()<<"\n"; //imprimimos los valores de "x" y "y" respectivamente
    return 0;
}
