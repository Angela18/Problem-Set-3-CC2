#include<iostream>

using namespace std;

class Polygon{ //definimos la clase "Polygon"
protected:
    static int numPolygons;
    PointArray points;
public:
    Polygon(const PointArray &pa); //creamos un constructor que reciba datos por referencia
    Polygon(const Point points[], const int numPoints); //creamos un 2do constructor que reciba un arreglo y su tamaño
    virtual double area()const =0; //creamos la funcion "arrea"
    static int getNumPolygons(){return numPolygons;} //creamos una funcion para obtener la cantidad de poligonos creados
    int getNumSides()const {return points.getSize();} //creamos una funcion que retorne el numero de lados de un poligono
    const PointArray *getPoints()const {return &points;} //creamos una funcion de un punterno no modificable a la matris de poligonos
    ~Polygon(){--numPolygons;} //creamos el destructor
};
