#include<iostream>

class Triangle :public Polygon{
public:
    Triangle(const Point &a, const Point &b, const Point &c);
    virtual double area() const;
};
