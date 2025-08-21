/****************************************************************************/
/* This is a simple C++ program that prints "Hello, World!" to the console. */ 
/****************************************************************************/

#include <iostream>                                 // Include the iostream library for input/output operations

int main() {                                        // Main function where the program execution starts
    std::cout << "Hello, World!" << std::endl;      // Print "Hello, World!" to the console
    return 0;                                       // Return 0 to indicate successful execution
}

// To compile and run this program, follow these steps:
// 1. Save the code in a file named helloworld.cpp
// 2. Open a terminal and navigate to the directory where the file is saved
// 3. On Windows: Compile the program using the command: g++ helloworld.cpp -o helloworld
// 4. On Linux/Mac: Compile the program using the command: clang++ helloworld.cpp -o helloworld
// 5. Run the compiled program using the command: ./helloworld
// You should see the output: Hello, World!

// To Commit this code to a Git repository, follow these steps:
// 1. Initialize a new Git repository (if not already done) using the command: git init
// 2. Add the file to the staging area using the command: git add helloworld.cpp
// 3. Commit the changes with a message using the command: git commit -m "Add Hello World program in C++"
// 4. If you have a remote repository, push the changes using the command: git push origin main
// Note: Ensure you have Git installed and configured on your system to perform these operations.