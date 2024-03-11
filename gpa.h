#ifndef GPA_CALCULATOR_H
#define GPA_CALCULATOR_H

#include <string>

class GPACalculator {
    public:
        void runGPA();

    private:
        void calculateGPA(int numCourses, int *weights, int *grades, double &finalWeight, int &sumWeights);
};

#endif // GPA_CALCULATOR_H
