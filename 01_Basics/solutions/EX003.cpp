/***************************************************************************************************/
/* This Program is a solution to the exercise: EX003 (within 01_Basics/basicsExercises.md)         */
/* It demonstrates the use of a simple loop operations performed to print multiplication table     */
/* of a given integer and also print the sum of numbers from 1 to the given integer                */
/***************************************************************************************************/ 

#include <iostream> // for input and output

int main() {
    int N;  // Variable to store the user input
    int sum = 0; // Variable to store the sum
    int count = 1; // Counter for the while loop

    // Ask the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> N;

    // Print the multiplication table using a for loop
    std::cout << "--- Multiplication Table of " << N << " ---\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << N << " * " << i << " = " << N * i << "\n";
    }

    // Calculate the sum of numbers from 1 to N using a while loop
    std::cout << "--- Sum of numbers from 1 to " << N << " ---\n";
    while (count <= N) {
        std::cout << count << (count < N ? " + " : " = "); // Print the current count
        sum += count; // Add the current count to sum
        count++; // Increment the counter
    }
    {
        std::cout << sum << "\n"; // Print the final sum
    }

    return 0; // Indicate that the program ended successfully
}