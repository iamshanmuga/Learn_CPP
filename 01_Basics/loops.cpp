/********************************************************************************************/
/* This program demonstrates various loop constructs in C++.                                */
/* It includes examples of for, while, do-while loops, nested loops and range-based loops   */
/********************************************************************************************/

#include <iostream> // Include the iostream library for input/output operations

int main() {
    std::cout << "==== Loops in C++ ====" << std::endl;

    // For Loop
    std::cout << "For Loop:" << std::endl;
    for (int i = 0 ; i < 5; i++) {                      // Loop from 0 to 4
        std::cout << "Iteration " << i << std::endl;    // Print the current iteration number
    }
    std::cout << std::endl;

    // While Loop
    std::cout << "While Loop:" << std::endl;
    int j = 0;                                          // Initialize counter variable
    while (j < 5) {                                     // Loop while j is less than 5
        std::cout << "Iteration " << j << std::endl;    // Print the current iteration number
        j++;                                            // Increment counter variable
    }
    std::cout << std::endl;

    // Do-While Loop
    std::cout << "Do-While Loop:" << std::endl;
    int k = 0;                                          // Initialize counter variable
    do {
        std::cout << "Iteration " << k << std::endl;    // Print the current iteration number
        k++;                                            // Increment counter variable
    } while (k < 5);                                    // Loop while k is less than 5
    std::cout << std::endl;

    // Nested Loops
    std::cout << "Nested Loops:" << std::endl;
    for (int m = 0; m < 3; m++) {                       // Outer loop
        for (int n = 0; n < 2; n++) {                   // Inner loop
            std::cout << "Outer Loop: " << m << ", Inner Loop: " << n << std::endl; // Print current iteration numbers
        }
    }
    std::cout << std::endl;

    // Range-Based For Loop
    std::cout << "Range-Based For Loop:" << std::endl;
    int arr[] = {1, 2, 3, 4, 5};                       // Declare and initialize an array
    for (int value : arr) {                             // Loop through each element in the array
        std::cout << "Value: " << value << std::endl;   // Print the current value
    }
    std::cout << std::endl;

    // Infinite Loop (for demonstration purposes, use with caution)
    //std::cout << "Infinite Loop (Press Ctrl+C / Cmd+C to stop):" << std::endl;
    //int count = 0;                                      // Initialize counter variable
    //while (true) {                                      // Infinite loop
    //    std::cout << "Count: " << count << std::endl;   // Print the current count
    //    count++;                                         // Increment counter variable
    //    if (count >= 5) break;                          // Break the loop after 5 iterations for safety
    //}

    return 0;                                           // Return 0 to indicate successful execution

}