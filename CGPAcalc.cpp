#include <iostream>
#include <vector>
using namespace std;


float calculateCGPA(const vector<float>& grades) {
    float totalGradePoints = 0;
    float totalCredits = 0;

    float credits = 1.0;

    for (float grade : grades) {
        totalGradePoints += grade * credits;
        totalCredits += credits;
    }

    return totalGradePoints / totalCredits;
}

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<float> grades(numCourses);


    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grades[i];
    }


    float cgpa = calculateCGPA(grades);

    cout << "CGPA: " << cgpa << endl;

    return 0;
}
