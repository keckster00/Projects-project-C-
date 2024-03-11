#ifndef SCIENTIFIC_CALCULATOR_H
#define SCIENTIFIC_CALCULATOR_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Scicalc {
    public:
        string input;
        string equation;
    
        void ScicalcRun();
    
    private:
        bool sciEnd = false;
    
        void help();
        void openCalc();
        void parseInput(string);
        bool contains_any(const string& str, const vector<string>& phrases);
        
    
};

class Ariths {
    public:
        void infixToPostfix(string infixEquation);
    
    private:
        void calculateArith(string postfixEquation);
        int precedence(char c);
        
    
    
};

class Trigs {
    public:
    
    private:
        void calculateTrig(string equation);
    
};

class Logs {
    public:
    
    private:
        void calculateLog(string equation);
    
    
};

#endif