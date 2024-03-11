#include "gpa.h"
#include <iostream>

using namespace std;

void GPACalculator::runGPA() 
{
    bool GPAend = false;
    int numCourses;
    int *weights;
    int *grades;
    double finalWeight = 0.0;
    int sumWeights = 0;
    char a;

    do {
        cout << "Welcome to the GPA calculator\n";
        cout << "Input the number of courses: ";
        cin >> numCourses;

        weights = new int[numCourses];
        grades = new int[numCourses];

        for(int i = 0; i < numCourses; i++) {
            string name;
            int w;
            char g;

            cout << "\nCourse name: ";
            cin >> ws;
            getline(cin, name);

            cout << "Weight of class (1-5): ";
            cin >> w;
            weights[i] = w;

            cout << "Grade (A-F no +/-): ";
            cin >> g;
            switch(g) {
                case 'A':
                    grades[i] = 4;
                    break;
                case 'B':
                    grades[i] = 3;
                    break;
                case 'C':
                    grades[i] = 2;
                    break;
                case 'D':
                    grades[i] = 1;
                    break;
                default:
                    grades[i] = 0;
                    break;
            }
        }

        calculateGPA(numCourses, weights, grades, finalWeight, sumWeights);

        cout << "Your weighted GPA is " << finalWeight << "\n";
        cout << "Calculate again? (y/n): ";
        cin >> a;
        if (a == 'n') {
            GPAend = true;
        }

        delete[] weights;
        delete[] grades;
    } while (!GPAend);
}

void GPACalculator::calculateGPA(int numCourses, int *weights, int *grades, double &finalWeight, int &sumWeights) {
    
    for(int j = 0; j < numCourses; j++) {
        finalWeight += static_cast<double>(weights[j] * grades[j]);
        sumWeights += weights[j];
    }

    finalWeight /= sumWeights;
}
