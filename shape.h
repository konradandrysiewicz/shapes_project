#ifndef _SHAPE_H__
#define _SHAPE_H__
#include <iostream>

class Shape
{
public:
    virtual void getArea()=0;
    virtual void loadData()=0;
};

class Square :public Shape
{
    float a;
public:
    Square(float=1);
    ~Square();
    void loadData();
    void getArea();
};

class Rectangle :public Shape
{
    float a;
    float b;
public:
    Rectangle(float=1, float=1);
    ~Rectangle();
    void loadData();
    void getArea();
};

class Triangle :public Shape
{
    float a;
    float h;
public:
    Triangle(float=1, float=1);
    ~Triangle();
    void loadData();
    void getArea();
};

class Circle :public Shape
{
    float r;
public:
    Circle(float=1);
    ~Circle();
    void loadData();
    void getArea();
};

class Trapezium :public Shape
{
    float a;
    float b;
    float h;
public:
    Trapezium(float=1, float=1, float=1);
    ~Trapezium();
    void loadData();
    void getArea();
};

#endif

