#pragma once
#include "../SchoolClass/SchoolClass.cpp"

class GPA {
private:
    SchoolClass* SchoolClasses;
    int numClasses;
public:
    GPA(SchoolClass SchoolClasses[], int numClasses);
    int totalCredits();
    double totalGPA();
    double finalGPA();
};