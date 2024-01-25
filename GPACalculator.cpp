/***************
*Author: Maverick Brazill
*Creation Date: 1-22-24
*Modification Date: 1-24-24
****************/
#include "TotalGPA/TotalGPA.cpp"
#include "handle_fetch_input.cpp"
#include <vector>

int main() {
    std::vector<SchoolClass> classesArray; 
    bool br = false;
    
    do {
        int credit = getInt(0, 4, true, "Enter the credit hours for the class (or enter 0 to finish): ");

        if (credit == 0) {
            br = true;
            break; 
        }
        double grade = getDouble(0.0, 4.0, true, "Enter the GPA for the class: ");

        classesArray.emplace_back(credit, grade);

        std::cout << "Class added!" << std::endl;
 
    } while (!br); //failsafe

    GPA totGPA(classesArray.data(), classesArray.size());

    std::cout << "Total GPA: " << ceil(totGPA.finalGPA() * 100.0) / 100.0 << std::endl;

    return 0;
}