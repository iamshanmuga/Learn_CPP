/***************************************************************************************************/
/* This Program is a solution to the exercise: EX004 (within 01_Basics/basicsExercises.md)         */
/* It demonstrates the use of a simple functions to print a sum, max value and factorials          */
/***************************************************************************************************/ 

#include <iostream> // Include the iostream library for input/output operations
#include <limits>  // Include the limits library for numeric limits
#include <stdexcept> // Include the stdexcept library for exception handling

// Function prototypes (declarations)
int add(int a, int b); // Function to add two integers
double add(double a, double b); // Function to add two doubles
int max(int a, int b); // Function to find maximum of two integers
double max(double a, double b); // Function to find maximum of two doubles
unsigned long long factorial(int n); // Function to calculate factorial of an integer
double factorial(double n); // Function to calculate factorial of a double
void displayResults(); // Function to display results

// Main function
int main() {
    displayResults(); // Call the function to display results
    return 0; // Return 0 to indicate successful execution
}

// Function definitions
int add(int a, int b) {
    return a + b; // Return the sum of two integers
}

double add(double a, double b) {
    return a + b; // Return the sum of two doubles
}

int max(int a, int b) {
    return (a > b) ? a : b; // Return the maximum of two integers
}

double max(double a, double b) {
    return (a > b) ? a : b; // Return the maximum of two doubles
}

unsigned long long factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers."); // Throw an exception for negative input
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i; // Multiply result by each integer up to n
    }
    return result; // Return the factorial of n
}

double factorial(double n) {
    if (n < 0 || n != static_cast<int>(n)) {
        throw std::invalid_argument("Factorial is only defined for non-negative integers.");    // Throw an exception for negative or non-integer input
    }
    return static_cast<double>(factorial(static_cast<int>(n))); // Call the integer factorial function
}

void displayResults() {
    // Demonstrate add function
    int intSum = add(5, 10);
    double doubleSum = add(5.5, 10.2);
    std::cout << "Integer Sum: " << intSum << std::endl;
    std::cout << "Double Sum: " << doubleSum << std::endl;

    // Demonstrate max function
    int intMax = max(5, 10);
    double doubleMax = max(5.5, 10.2);
    std::cout << "Integer Max: " << intMax << std::endl;
    std::cout << "Double Max: " << doubleMax << std::endl;

    // Demonstrate factorial function
    try {   // Use try-catch block to handle potential exceptions
        unsigned long long intFactorial = factorial(5);
        double doubleFactorial = factorial(5.0);
        std::cout << "Integer Factorial of 5: " << intFactorial << std::endl;
        std::cout << "Double Factorial of 5.0: " << doubleFactorial << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl; // Print error message if exception occurs
                                            // e.what() returns the explanatory string of the exception
                                            // std::cerr is used to output error messages
    }
}