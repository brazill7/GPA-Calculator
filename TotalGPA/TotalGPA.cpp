#include "TotalGPA.h"

GPA::GPA(SchoolClass SchoolClasses[], int numClasses) : SchoolClasses(SchoolClasses), numClasses(numClasses) {}

int GPA::totalCredits() {
    int total = 0;
    for (int i = 0; i < numClasses; ++i) {
        total += SchoolClasses[i].getCredit();
    }
    return total;
}

double GPA::totalGPA() {
    double totalGrade = 0;
    for (int i = 0; i < numClasses; ++i) {
        totalGrade += SchoolClasses[i].getGPA();
    }
    return totalGrade;
}

double GPA::finalGPA() {
    if (totalCredits() == 0) {
        return 0.0; //dont divide by 0
    }
    return totalGPA() / totalCredits();
}
