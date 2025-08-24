/***************************************************************************************************/
/* This Program is a solution to the exercise: EX002 (within 01_Basics/basicsExercises.md)         */
/* It demonstrates the use of a simple calculations operations performed on two integers provided  */
/***************************************************************************************************/ 

#include <iostream>     // Include the iostream library for input/output operations

int main() {
    // Declare two integer variables to hold user input
    int num1, num2;

    // Prompt the user to enter the first integer
    std::cout << "Enter the first integer: ";
    std::cin >> num1; // Read the first integer from user input
    // Prompt the user to enter the second integer
    std::cout << "Enter the second integer: ";
    std::cin >> num2; // Read the second integer from user input

    // Perform and display the results of various arithmetic operations
    std::cout << "Sum: " << (num1 + num2) << std::endl;          // Output the sum of num1 and num2
    std::cout << "Difference: " << (num1 - num2) << std::endl;   // Output the difference of num1 and num2
    std::cout << "Product: " << (num1 * num2) << std::endl;      // Output the product of num1 and num2
    // Check for division by zero before performing division
    if (num2 != 0) {
        std::cout << "Quotient: " << (num1 / num2) << std::endl; // Output the quotient of num1 and num2
    } else {
        std::cout << "Error: Division by zero is not allowed." << std::endl; // Handle division by zero
    }
    std::cout << "Remainder: " << (num1 % num2) << std::endl;   // Output the remainder of num1 divided by num2

    return 0;
}