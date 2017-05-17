#include <iostream>
#include <math.h>
#include "shape.h"

//////------------------------ KWADRAT -------------------------------------------

Square::Square(float aa)
{
    a=aa;
}

void Square::loadData()
{
    std::cout << "Podaj dlugosc boku: ";
    std::cin >> a;
    while(std::cin.get() != '\n' || a <= 0)
    {
        std::cout << "Nieprawidlowe dane !!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie dlugosc boku: ";
        std::cin >> a;
    }
}

void Square::getArea()
{
    std::cout << "Pole kwadratu wynosi: " << a*a << std::endl;
}


Square::~Square()
{
    //------
}

//---------------------------------------------------------------------------------
//////------------------------ PROSTOKAT ------------------------------------------

Rectangle::Rectangle(float aa, float bb)
{
    a=aa;
    b=bb;
}

void Rectangle::loadData()
{
    std::cout << "Podaj dlugosc boku a: ";
    std::cin >> a;
    while(std::cin.get() != '\n' || a <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie dlugosc boku a: ";
        std::cin >> a;
    }
    std::cout << "Podaj dlugosc boku b: ";
    std::cin >> b;
    while(std::cin.get() != '\n' || b <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie dlugosc boku b: ";
        std::cin >> b;
    }

}

void Rectangle::getArea()
{
    std::cout << "Pole prostokata wynosi: " << a*b << std::endl;
}


Rectangle::~Rectangle()
{
    //------
}

//---------------------------------------------------------------------------------
//////------------------------ TROJKAT --------------------------------------------

Triangle::Triangle(float aa, float hh)
{
    a=aa;
    h=hh;
}

void Triangle::loadData()
{
    std::cout << "Podaj dlugosc boku a: ";
    std::cin >> a;
    while(std::cin.get() != '\n' || a <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie dlugosc boku a: ";
        std::cin >> a;
    }
    std::cout << "Podaj wyokosc: ";
    std::cin >> h;
    while(std::cin.get() != '\n' || h <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie wyokosc: ";
        std::cin >> h;
    }

}

void Triangle::getArea()
{
    std::cout << "Pole trojkata wynosi: " << ((0.5) * a  * h) << std::endl;
}


Triangle::~Triangle()
{
    //------
}

//---------------------------------------------------------------------------------
//////------------------------ KOLO -----------------------------------------------

Circle::Circle(float rr)
{
    r=rr;
}

void Circle::loadData()
{
    std::cout << "Podaj dlugosc promien kola: ";
    std::cin >> r;
    while(std::cin.get() != '\n' || r <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie promien kola: ";
        std::cin >> r;
    }
}

void Circle::getArea()
{
    std::cout << "Pole kola wynosi: " << M_PI * r * r << std::endl;
}


Circle::~Circle()
{
    //------
}

//---------------------------------------------------------------------------------
//////------------------------ TRAPEZ ---------------------------------------------

Trapezium::Trapezium(float aa, float bb, float hh)
{
    a=aa;
    b=bb;
    h=hh;
}

void Trapezium::loadData()
{
    std::cout << "Podaj dlugosc boku a: ";
    std::cin >> a;
    while(std::cin.get() != '\n' || a <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie dlugosc boku a: ";
        std::cin >> a;
    }

    std::cout << "Podaj dlugosc boku b: ";
    std::cin >> b;
    while(std::cin.get() != '\n' || b <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie dlugosc boku b: ";
        std::cin >> b;
    }

    std::cout << "Podaj dlugosc wysokosc: ";
    std::cin >> h;
    while(std::cin.get() != '\n' || h <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie wysokosc: ";
        std::cin >> h;
    }
}

void Trapezium::getArea()
{
    std::cout << "Pole trapezu wynosi " << ((a+b)*0.5)*h << std::endl;
}


Trapezium::~Trapezium()
{
    //------
}

//---------------------------------------------------------------------------------
