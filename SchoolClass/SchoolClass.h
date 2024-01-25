#pragma once

class SchoolClass {
private:
    int credit;
    double grade;
    double gpa;

public:
    SchoolClass(int credit, double grade);
    int setCredit(int new_credit);
    double setGrade(int new_grade);
    double setGPA();
    double getGPA();
    int getCredit();
};
