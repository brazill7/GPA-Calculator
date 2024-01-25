#include <iostream>

void handleInputError(std::string errorMessage = "Invalid Input"){
    std::cout << "Error: " << errorMessage << std::endl << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getInt(int min, int max, bool inside, std::string outputMessage = "Please enter an Integer: "){ //MAX AND MIN
    int userInput;
    bool inputValid = false;

    while (!inputValid){
        std::cout << outputMessage;
        if (std::cin >> userInput) {
            if (std::cin.peek() != '\n'){
                handleInputError("Float/Double entered, wanted Integer");
            }else{
                if((inside && userInput >= min && userInput <= max) ||
                (!inside && (userInput < min || userInput > max))){
                    inputValid = true;
                    return userInput;
                    break;
                }else{
                    handleInputError("Input not in range");
                    continue;
                }
            }
        } else {
            //check what errored
            if (userInput == INT_MAX || userInput == INT_MIN){
                //out of range int
                handleInputError("Integer entered is not in range from -2147483647 to 2147483647");
            }else{
                //string / char

                handleInputError("String detected, wanted Integer");    
            }
            
        }
    }
    return userInput;
}

double getDouble(double min, double max, bool inside, std::string outputMessage = "Please enter a Double: ") {
    std::string userInputStr;
    bool inputValid = false;

    while (!inputValid) {
        std::cout << outputMessage;
        std::cin >> userInputStr;

        try {
            size_t pos;
            double userInput = std::stod(userInputStr, &pos);

            if (pos == userInputStr.length()) {
                if ((inside && userInput >= min && userInput <= max) ||
                    (!inside && (userInput < min || userInput > max))) {
                    inputValid = true;
                    return userInput;
                } else {
                    handleInputError("Input not in range");
                }
            } else {
                handleInputError("Invalid input format");
            }
        } catch (std::invalid_argument&) {
            //handle string input
            for (char &c : userInputStr) { //make the string lowercase
                c = tolower(c);
            }

            //cascading if else because cpp doesnt support string switch statements
            if (userInputStr == "a+" || userInputStr == "a"){
                return 4.0;
            }else if (userInputStr == "a-"){
                return 3.7;
            }else if (userInputStr == "b+"){
                return 3.3;
            }else if (userInputStr == "b"){
                return 3.0;
            }else if (userInputStr == "b-"){
                return 2.7;
            }else if (userInputStr == "c+"){
                return 2.3;
            }else if (userInputStr == "c"){
                return 2.0;
            }else if (userInputStr == "c-"){
                return 1.7;
            }else if (userInputStr == "d+"){
                return 1.3;
            }else if (userInputStr == "d"){
                return 1.0;
            }else if (userInputStr == "d-"){
                return 0.7;
            }else if (userInputStr == "f"){
                return 0.0;
            }else{
                handleInputError("String detected, wanted double"); 
            }
            
        } catch (std::out_of_range&) {
            handleInputError("Double value out of range");
        }
    }
}