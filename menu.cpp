#include "menu.h"
#include "gpa.h"
#include "scicalc.h"

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

void Menu::menu()
{
    do
    {
        cout << "\nMenu\n";
        cout << "Beginner projects\n";
        cout << "1: GPA Calculator\n";
        cout << "2: Scientific Calculator\n";
        cout << "0: Quit\n";
        runChoice();
    }while(!menuEnd);
}

void Menu::runChoice()
{
    int o;
    GPACalculator calculator;
    Scicalc scicalc;
    cout << "\nOption: ";
    cin >> o;
    switch(o)
    {
        case 1:
            calculator.runGPA();
            break;
        case 2:
            scicalc.ScicalcRun();
            break;
        case 0:
            menuEnd = true;
            break;
    }
}
