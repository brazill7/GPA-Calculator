#include "SchoolClass.h"
#include <iostream>

SchoolClass::SchoolClass(int credit, double grade) : credit(credit), grade(grade), gpa(0.0) {
    if (grade > 4.0 || grade < 0.0) {
        std::cerr << "Invalid Grade (0.0 - 4.0)";
    }
    setGPA();
}

int SchoolClass::setCredit(int new_credit) {
    credit = new_credit;
    return credit;
}

double SchoolClass::setGrade(int new_grade) {
    grade = new_grade;
    return grade;
}

double SchoolClass::setGPA() {
    gpa = grade * credit;
    return gpa;
}

double SchoolClass::getGPA() {
    return gpa;
}

int SchoolClass::getCredit() {
    return credit;
}
