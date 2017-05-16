#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include "menu.h"


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
    char choice;
    choice=getch();
    switch(choice)
    {
    case '1':
        {
        std::cout << "KWADRAT" << std::endl;
        }
    break;

    case '2':
        {
        std::cout << "PROSTOK¥T" << std::endl;
        }
    break;

    case '3':
        {
        std::cout << "TROJKAT" << std::endl;
        }
        break;

    case '4':
        {
        std::cout << "KOLO" << std::endl;
        }
        break;

    case '5':
        {
        std::cout << "TRAPEZ" << std::endl;
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

