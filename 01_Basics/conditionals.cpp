/************************************************************************************************/
/* This program demonstrates the conditional construct and their usage in C++                   */
/* Conditionals covered: if, if else, else if ladder, nested if, switch, and ternary operator.  */
/************************************************************************************************/

#include <iostream>           // Include the iostream library for input/output operations
#include <string>             // Include the string library for using string data type

int main() {
    std::cout << " === Conditionals in C++ ===" << std::endl;

    int age;  // Variable to store age

    std::cout << "Enter your age: ";  // Prompt user for input
    std::cin >> age;  // Input age from user

    // Example of if statement
    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;  // Output if age is 18 or older
    }

    // Example of if-else statement
    if (age < 18) {
        std::cout << "You are a minor." << std::endl;
    }
    else {
        std::cout << "You are an adult." << std::endl;  // Output if age is 18 or older
    }

    // Example of else-if ladder
    if (age < 13) {
        std::cout << "You are a child." << std::endl; // Output if age is less than 13
    }
    else if (age < 18) {
        std::cout << "You are a teenager." << std::endl; // Output if age is between 13 and 17
    }
    else if (age < 65) {
        std::cout << "You are an adult." << std::endl; // Output if age is between 18 and 64
    }
    else {
        std::cout << "You are a senior citizen." << std::endl; // Output if age is 65 or older
    }

    // Example of nested if statement
    if (age >= 18) {
        std::cout << "You can vote." << std::endl; // Output if age is 18 or older
        if (age >= 21) {
            std::cout << "You can also drink alcohol." << std::endl; // Output if age is 21 or older
        }
    } 
    else {
        std::cout << "You cannot vote." << std::endl; // Output if age is less
    }

    // Example of switch statement
    int day;
    std::cout << "1: Monday, 2: Tuesday, 3: Wednesday, 4: Thursday, 5: Friday, 6: Saturday, 7: Sunday" << std::endl;
    std::cout << "Enter a number (1-7) for the day of the week: "; // Prompt user for input
    std::cin >> day; // Input day from user

    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl; // Output for Monday
            break;                              // Break statement to exit the switch case
        case 2:
            std::cout << "Tuesday" << std::endl; // Output for Tuesday
            break;
        case 3:
            std::cout << "Wednesday" << std::endl; // Output for Wednesday
            break;
        case 4:
            std::cout << "Thursday" << std::endl; // Output for Thursday
            break;
        case 5:
            std::cout << "Friday" << std::endl; // Output for Friday
            break;
        case 6:
            std::cout << "Saturday" << std::endl; // Output for Saturday
            break;
        case 7:
            std::cout << "Sunday" << std::endl; // Output for Sunday
            break;
        default:
            std::cout << "Invalid day number." << std::endl; // Output if input is not between 1 and 7
    }

    // Example of ternary operator
    int number;
    std::cout << "Enter a number: "; // Prompt user for input
    std::cin >> number; // Input number from user
    std::string result = (number % 2 == 0) ? "Even" : "Odd"; // Ternary operator to check if number is even or odd
    std::cout << "The number is " << result << "." << std::endl; // Output the result

    return 0; // Return 0 to indicate successful execution of the program
}