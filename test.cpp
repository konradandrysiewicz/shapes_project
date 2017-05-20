#include <iostream>
#include <math.h>
#include "test.h"
#include "shape.h"
#include "square.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "trapezium.h"

void check_square_incorrect()
{
    std::cout << "-------------------" << std::endl << "TEST OF INCORRECT DATA SQUARE" << std::endl;
    Square temp(5.5);
    if(30.25 != temp.getArea())
         std::cout << "Test failed" << std::endl;
    else
        std::cout <<"Test passed" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void check_square_correct()
{
    std::cout << "-------------------" << std::endl << "TEST OF CORRECT DATA SQUARE" << std::endl;
    Square temp(5.5);
    if(30.25 == temp.getArea())
         std::cout << "Test passed" << std::endl;
    else
        std::cout <<"Test failed" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void check_rectangle_incorrect()
{
    std::cout << "-------------------" << std::endl << "TEST OF INCORRECT DATA RECTANGLE" << std::endl;
    Rectangle temp(2,5);
    if(6 == temp.getArea())
         std::cout << "Test failed" << std::endl;
    else
        std::cout <<"Test passed" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void check_rectangle_correct()
{
    std::cout << "-------------------" << std::endl << "TEST OF CORRECT DATA RECTANGLE" << std::endl;
    Rectangle temp(2.5,3);
    if(7.5 == temp.getArea())
         std::cout << "Test passed" << std::endl;
    else
        std::cout <<"Test failed" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void check_triangle_incorrect()
{
    std::cout << "-------------------" << std::endl << "TEST OF INCORRECT DATA TRIANGLE" << std::endl;
    Triangle temp(4.5,2);
    if(4.5 != temp.getArea())
         std::cout << "Test failed" << std::endl;
    else
        std::cout <<"Test passed" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void check_triangle_correct()
{
    std::cout << "-------------------" << std::endl << "TEST OF CORRECT DATA TRIANGLE" << std::endl;
    Triangle temp(3,5);
    if(7.5 == temp.getArea())
         std::cout << "Test passed" << std::endl;
    else
        std::cout <<"Test failed" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void check_circle_incorrect()
{
    std::cout << "-------------------" << std::endl << "TEST OF INCORRECT DATA CIRCLE" << std::endl;
    Circle temp(2.0);
    if(temp.getArea() < 12.56 || temp.getArea() > 12.57)
         std::cout << "Test failed" << std::endl;
    else
        std::cout <<"Test passed" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void check_circle_correct()
{
    std::cout << "-------------------" << std::endl << "TEST OF CORRECT DATA CIRCLE" << std::endl;
    Circle temp(2.0);
    if(temp.getArea() >= 12.56 && temp.getArea() <= 12.57)
         std::cout << "Test passed" << std::endl;
    else
        std::cout <<"Test failed" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void check_trapezium_incorrect()
{
    std::cout << "-------------------" << std::endl << "TEST OF INCORRECT DATA TRAPEZIUM" << std::endl;
    Trapezium temp(20,5,10);
    if(125 != temp.getArea())
         std::cout << "Test failed" << std::endl;
    else
        std::cout <<"Test passed" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void check_trapezium_correct()
{
    std::cout << "-------------------" << std::endl << "TEST OF CORRECT DATA TRAPEZIUM" << std::endl;
    Trapezium temp(10.5,9.5,2);
    if(20 == temp.getArea())
         std::cout << "Test passed" << std::endl;
    else
        std::cout <<"Test failed" << std::endl;
    std::cout << "-------------------" << std::endl;
}
