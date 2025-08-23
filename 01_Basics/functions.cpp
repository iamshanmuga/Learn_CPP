/************************************************************************************************/
/* This program demonstrates the declaration and initialization of different functions in C++   */
/************************************************************************************************/

#include <iostream>             // Include the iostream library for input/output operations

// Function prototype (declarations)
int add(int a, int b);          // Function to add two integers
float multiply(float x, float y); // Function to multiply two floats
void greet(std::string name);   // Function to greet a user with their name
void displayMessage();          // Function to display a message


// Main function
int main() {
    // Call the add function and print the result
    int sum = add(5, 10);
    std::cout << "Sum: " << sum << std::endl;

    // Call the multiply function and print the result
    float product = multiply(2.5f, 4.0f);
    std::cout << "Product: " << product << std::endl;

    // Call the greet function
    greet("Alpha Dog");

    // Call the displayMessage function
    displayMessage();

    return 0; // Return 0 to indicate successful execution
}

// Function definitions
int add(int a, int b) {
    return a + b; // Return the sum of two integers
}

float multiply(float x, float y) {
    return x * y; // Return the product of two floats
}

void greet(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl; // Print a greeting message
}

void displayMessage() {
    std::cout << "This is a simple function demonstration in C++." << std::endl; // Print a message
}

