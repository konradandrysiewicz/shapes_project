#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include "menu.h"
#include "shape.h"
#include "square.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "trapezium.h"


void showMenu()
{
    std::cout << std::endl << "PROGRAM DO OBLICZANIA POLA FIGUR" << std::endl << std::endl;
    std::cout << "MAIN MENU " << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "[1] KWADRAT" << std::endl;
    std::cout << "[2] PROSTOKAT" << std::endl;
    std::cout << "[3] TROJKAT" << std::endl;
    std::cout << "[4] KOLO" << std::endl;
    std::cout << "[5] TRAPEZ" << std::endl;
    std::cout << "[6] WYJSCIE" << std::endl;

}
void choiceMenu()
{
    Shape *wsk;
    char choice;
    choice=getch();
    switch(choice)
    {
    case '1':
        {
        Square sq;
        wsk = &sq;
        wsk -> loadData();
        wsk -> getArea();
        }
    break;

    case '2':
        {
        Rectangle rec;
        wsk = &rec;
        wsk -> loadData();
        wsk -> getArea();
        }
    break;

    case '3':
        {
        Triangle tr;
        wsk = &tr;
        wsk -> loadData();
        wsk -> getArea();
        }
        break;

    case '4':
        {
        Circle cir;
        wsk = &cir;
        wsk -> loadData();
        wsk -> getArea();
        }
        break;

    case '5':
        {
        Trapezium trap;
        wsk = &trap;
        wsk -> loadData();
        wsk -> getArea();
        }
        break;

    case '6':
        {
        exit(0);
        }
        break;

    default:
        {
            std::cout << "Nie ma takiej opcji!" << std::endl;
        }
    }
}

