/***************************************************************************************************/
/* This Program is a solution to the exercise: EX005 (within 01_Basics/basicsExercises.md)         */
/* It demonstrates the use of a conditionals in C++                                                */
/***************************************************************************************************/ 

#include <iostream> // Include the iostream library for input/output operations
#include <stdexcept> // Include the stdexcept library for exception handling
#include <limits>  // Include the limits library for numeric limits

void checkLoanEligibility(); // Function to check loan eligibility
int getValidatedInput(const std::string& prompt, int minValue); // Function to get validated input
void displayResults(); // Function to display results

// Main function
int main() {
    displayResults(); // Call the function to display results
    return 0; // Return 0 to indicate successful execution
}

// Function definitions
void checkLoanEligibility() {
    int age = getValidatedInput("Enter your age: ", 0); // Get validated age input
    int income = getValidatedInput("Enter your annual income: ", 0); // Get validated income input
    int creditScore = getValidatedInput("Enter your credit score: ", 0); // Get validated credit score input

    bool isEligible = true; // Initialize eligibility flag
    std::string reasons; // String to hold reasons for rejection

    if (age < 18) {
        isEligible = false; // Set eligibility to false if age is less than 18
        reasons += "Age must be at least 18. ";
    }
    if (income < 30000) {
        isEligible = false; // Set eligibility to false if income is less than 30,000
        reasons += "Income must be at least 30,000. ";
    }
    if (creditScore < 650) {
        isEligible = false; // Set eligibility to false if credit score is less than 650
        reasons += "Credit score must be at least 650. ";
    }

    if (isEligible) {
        std::cout << "Loan Approved!" << std::endl; // Print approval message
    } else {
        std::cout << "Loan Rejected! Reasons: " << reasons << std::endl; // Print rejection message with reasons
    }
}

int getValidatedInput(const std::string& prompt, int minValue) {
    int value;
    while (true) {
        std::cout << prompt; // Prompt the user for input
        std::cin >> value; // Read the input value
        if (std::cin.fail() || value < minValue) { // Check for invalid input
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number greater than or equal to " << minValue << "." << std::endl;
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard any extra input
            return value; // Return the validated input value
        }
    }
}

void displayResults() {
    checkLoanEligibility(); // Call the function to check loan eligibility
}

