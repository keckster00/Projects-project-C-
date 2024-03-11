#include <iostream>
using namespace std;

int main()
{
    bool end = false;
    int numCourses;
    int *weights;
    int *grades;
    double finalWeight = 0.0;
    int sumWeights = 0;
    int n, w;
    char g, a;

    do
    {
        cout << "Welcome to the GPA calculator\n";
        cout << "Input the number of courses: ";
        cin >> n;
        numCourses = n;
        weights = new int[n];
        grades = new int[n];

        for (int i = 0; i < numCourses; i++)
        {
            cout << "\nCourse name: ";
            cin >> ws;
            getline(cin, name);
            cout << "Weight of class(1-5): ";
            cin >> w;
            weights[i] = w;
            cout << "Grade (A-F no +/-): ";
            cin >> g;
            switch (g)
            {
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
        for (int j = 0; j < numCourses; j++)
        {
            finalWeight += static_cast<double>(weights[j] * grades[j]);
            sumWeights += weights[j];
        }

        finalWeight /= sumWeights;

        cout << "Your weighted GPA is " << finalWeight << "\n";
        cout << "Calculate again? (y/n): ";
        cin >> a;
        if (a == 'n')
        {
            end = true;
        }

        delete[] weights;
        delete[] grades;

    } while (!end);
}
