#include<iostream>

using namespace std;

class Point{   //Se crea la clase "Point"
    private:
        int x,y;   //con argumentos privados tipo int
    public:
        Point(int u, int v):x(u),y(v){}    //declaramos un costructor
        int getX(){return x;}  //una funcion "getX" que devolvera el valor de "x"
        int getY(){return y;}  // una funcion "getY" que devolvera el valor de "y"
        void doubleVal(){  //una funcion "doubleVal" que duplica el valor de "x" y "y"
            x *= 2;
            y *= 2;
        }
};

int main(){  //En la funcion principal
    Point myPoint(5,3);  //instanciamos un objeto llamado "myPoint" con valores de 5 y 3
    myPoint.doubleVal();  //al objeto le aplicamos la funcion "doubleVal"
    cout<<myPoint.getX()<<" "<<myPoint.getY()<<"\n";  //imprimimos los valores de "x" y "y" que serian 10 y 6
    return 0;
}
