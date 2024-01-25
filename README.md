## Academic GPA Calculator

This project aims to provide a comprehensive solution for calculating a student's GPA (Grade Point Average) based on inputted credit hours and grades for their classes. The GPA Calculator simplifies the process of GPA calculation by offering a command-line interface for inputting class information and obtaining the total GPA.

### Components

#### Main Program (`main()` function)

- Acts as the entry point of the program.
- Initializes a vector to store instances of the `SchoolClass` class.
- Iterates through a loop to input class information and calculates the total GPA.

#### GPA Class (`GPA.h` and `GPA.cpp`)

- Responsible for calculating the total GPA.
- Contains methods to calculate total credits, total GPA, and final GPA based on class information.

#### SchoolClass Class (`SchoolClass.h` and `SchoolClass.cpp`)

- Represents an individual class with attributes such as credit hours, grade, and GPA.
- Provides methods to set and get class attributes.

#### Input Handling (`handle_fetch_input.cpp`)

- Contains functions to handle user input validation for integers and doubles.
- Converts letter grades to their corresponding GPA values.
