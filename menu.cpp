#include "menu.h"
#include "gpa.h"

#include <iostream>
using namespace std;

void Menu::menu()
{
    do
    {
        cout << "\nMenu\n";
        cout << "1: GPA Calculator\n";
        cout << "0: Quit\n";
        runChoice();
    }while(!menuEnd);
}

void Menu::runChoice()
{
    int o;
    GPACalculator calculator;
    cout << "\nOption: ";
    cin >> o;
    switch(o)
    {
        case 1:
            calculator.runGPA();
            break;
        default:
            menuEnd = true;
            break;
    }
}