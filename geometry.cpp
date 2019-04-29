#include"geometry.h"
#include"point_geometry.h"

PointArray::PointArray(){ //definimos el constructos sin parametros
    size=0; //tamaño 0
    points=new Point[0]; //creamos un arreglo de tamaño 0
}

PointArray::PointArray(const Point ptsToCopy[], const int toCopySize){ //definimos el segundo constructor
    size=toCopySize; //la variable "size" toma el valor de toCopySize
    points=new Point[toCopySize]; //creamos un arreglo del tamaño dado
    for(int i=0;i<toCopySize;++i){ //creamos un bucle para recorrer el arreglo
        points[i]=ptsToCopy[i]; //asignando el valor en su respectiva posicion
    }
}

PointArray::PointArray(const PointArray &other){ //definimos el tercer constructor
    size=other.size;
    points=new Point[size]; //creamos un arreglo del tamaño dado
    for(int i=0;i<size;i++){ //creamos un bucle que recorra el arreglo
        points[i]=other.points[i]; //asigna el valor en su respectiva posicion
    }
}

PointArray::~PointArray(){ //definimos el destructor
    delete[] points; //eliminamos los valores del arreglo
}

void PointArray::resize(int newSize){ //definimos la funcion "resize"
    Point *pts=new Point[newSize]; //creamos un puntero con el tamaño indicado
    int minSize = (newSize>size ? size : newSize);
    for(int i =0; i<minSize; i++)
        pts[i]=points[i];
    delete[] points;
    size=newSize;
    points=pts;
}

void PointArray::clear(){ //definimos la funcion "clear"
    resize(0); //limpia la matriz hasta llegar a 0
}

void PointArray::push_back(const Point &p){ //definimos la funcion"push_back"
    resize(size+1); //que agregara elementos al arreglo por el final
    points[size-1]=p;
}

void PointArray::insert(const int pos, const Point &p){ //definimos ña funcion "insert"
    resize(size+1); //que agregara elementos en una posicion indicada
    for(int i =size-1;i>pos;i--){
        points[i]=points[i-1];
    }
    points[pos]=p;
}

void PointArray::remove(const int pos){ //definimos la funcion "remove"
    if(pos>=0 && pos<size){ //eliminara el elemento de una posicion en especifico
        for(int i=pos;i<size-2;i++){
            points[i]=points[i+1];
        }
        resize(size-1);
    }
}

Point *PointArray::get(const int pos){
    return pos >=0 && pos<size ? points + pos : NULL;
}

const Point *PointArray::get(const int pos) const{
    return por >=0 && pos < size ? points +pos : NULL;
}
