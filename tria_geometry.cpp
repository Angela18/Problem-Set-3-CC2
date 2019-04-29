#include<iostream>
#include"tria_geometry.h"

using namespace std;

Triangle::Triangle(const Point &a,const Point &b, const Point &c):Polygon(updateConstructorPoints(a,b,c),3){}

double Triangle::area()const{
    int dx01 = points.get(0)->getX()-points.get(1)->getX(),
        dx12 = points.get(1)->getX()-points.get(2)->getX(),
        dx20 = points.get(2)->getX()-points.get(0)->getX();
    int dy01 = points.get(0)->getY()-points.get(1)->getY(),
        dy12 = points.get(1)->getY()-points.get(2)->getY(),
        dy20 = points.get(2)->getY()-points.get(0)->getY();
    double a=std::sqrt(dx01*dx01 + dy01*dy01),
           b=std::sqrt(dx12*dx12 + dy12*dy12),
           c=std::sqrt(dx20*dx20 + dy20*dy20);

    double s=(a+b+c)/2;
    return std::sqrt(s*(s-a)*(s-b)*(s-c));
}

void printAttributes(Polygon *p){
    cout<<"p's area is "<<p->area()".\n";
    cout<<"p's points are:\n";
    const PointArray *pa = p->getPoints();
    for(int i=0;i<pa->getSize();++i){
        cout<<"("<<pa->get(i)->getX()<<","<<pa->get(i)->getY()<<")\n";
    }
}

int main(int argc, char *argv[]){
    cout<<"Ingrese los acordes de rectángulo inferior izquierdo y superior derecho como cuatro enteros separados por espacios: ";
    int llx, lly, urx, ury;
    cin>>llx >> lly >> urx >> ury;
    Point ll(llx, lly), ur(urx,ury);
    Rectangle r(ll,ur);
    printAttributes(&r);

    cout<<"Ingrese las coordenadas del triangulo como seis enteros separados por espacios: ";
    int x1,y1,x2,y2,x3,y3;
    cin>>x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Point a(x1,y1), b(x2,y2), c(x3,y3);
    Triangle t(a,b,c);
    printAttributes(&t);
    return 0;
}
