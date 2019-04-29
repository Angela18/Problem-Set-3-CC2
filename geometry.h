#include<iostream>

using namespace std;

class PointArray{ //creamos la clase "PointArray"
    int size; //variable de tipo int
    Point *points; //creamos un puntero "points" de tipo "Point"
    void resize(int size);
public:
    PointArray(); //declaramos un constructor sin parametros
    PointArray(const Point pts[], const int size); //un constructor con dos parametros (un arreglo y un tamaño)
    PointArray(const PointArray &pv); //un constructor con parametro por referencia
    ~PointArray(); //declaramos un destructor

    void clear(); //funcion limpiar sin parametros
    int getSize()const{return size;} //funcion "getSize" con valor constante que retorna el tamaño del array
    void push_back(const Point &p); //funcion "push_back" con un parametros constante por referencia
    void insert(const int pos, const Point &p); //funcion "insert" con dos parametros constantes (int, valor por referencia)
    void remove(const int pos); //funcion "remove" con un parametro constante de tipo int
    Point *get(const int pos);  //creamos un puntero "get" de tipo "Point" con un parametro constante
    const Point *get(const int pos)const;
};
