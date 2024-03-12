#include "scicalc.h"
#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

// any mathematical equation entered using infix notaion
// addition, subtraction, multiplication, and division
// trigonometric and logarithmic functions
// sin sec tan cos csc ctan
// ln log log2 log_b(x)
// class defines data of calculator and various types of functions
//+ - * / %
// classes that handle different exceptions when illegal input or operation in imaginary/singular values

void Scicalc::ScicalcRun()
{
    char a;
    cout << "\nWelcome to the Scientific Calculator!\n";
    cout << "Here you are able to perform simple mathematical computations\nAs well as some more challenging trigonometric and logarithmic functions\n";

    do
    {
        cout << "Enter h for some help with the complex equations of s to start now, or q to quit: ";
        cin >> a;
        switch (a)
        {
        case 'h':
            help();
            break;
        case 's':
            openCalc();
            break;
        default:
            sciEnd = true;
            break;
        }

    } while (!sciEnd);
}

void Scicalc::help()
{
    cout << "\nBasic arithmatic functions:\n";
    cout << "Addition, subtraction, multipliaction, division, modulus\n\n";
    cout << "Trigonometric functions:\n";
    cout << "sin sec tan cos csc ctan\n\n";
    cout << "Logarithmic functions\n";
    cout << "ln log log2 log_b(x)\n\n";
}

void Scicalc::openCalc()
{
    // user types in any equations
    // parse out what kind of equation it is
    // contains ln... or sin...?
    // if not, take infix, convert to postfix, perform
    // if does, determine if logarithmic or Trigonometric
    // perform those calculations

    // need 3 classes
    // arithmatic, log, trig
    // arithmatic, in to post

    cout << "\nEquation: ";
    cin >> ws;
    getline(cin, input);

    parseInput(input);
}

void Scicalc::parseInput(string input)
{
    vector<string> logs;
    logs.push_back("ln");
    logs.push_back("log");
    vector<string> trigs;
    trigs.push_back("sin");
    trigs.push_back("sec");
    trigs.push_back("tan");
    trigs.push_back("cos");
    trigs.push_back("csc");
    trigs.push_back("ctan");

    if (contains_any(input, logs))
    {
        // send to logs
        Logs logars;
        cout << "Send to logs\n";
    }
    else if (contains_any(input, trigs))
    {
        // send to trigs
        Trigs trig;
        cout << "Send to trigs\n";
    }
    else
    {
        regex pattern("[0-9()+\\-*/%\\s]+");
        if (!regex_match(input, pattern))
        {
            cout << "Incorrect input, try again\n";
            return;
        }
        // send to ariths
        cout << "Send to ariths\n";
        Ariths arith;
        arith.infixToPostfix(input);
    }
}

bool Scicalc::contains_any(const string &str, const vector<string> &phrases)
{
    for (const string &phrase : phrases)
    {
        if (str.find(phrase) != string::npos)
        {
            return true;
        }
    }
    return false;
}

void Ariths::infixToPostfix(string infixEquation)
{
    if (infixEquation != "")
    {
        // need operator precedence
        // read through infix to create postfix (stack)
    }
    else
    {
        cout << "Incorrect input, try again\n";
    }
}

int Ariths::precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void Ariths::calculateArith(string postfixEquation)
{

    // run through postfix to calculate (stack)
}