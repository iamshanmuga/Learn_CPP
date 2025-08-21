/***************************************************************************************************/
/* This program demonstrates the declaration and initialization of different variable types in C++ */
/* It also prints the values of these variables along with their reserved sizes in bytes.          */
/***************************************************************************************************/

#include <iostream>             // Include the iostream library for input/output operations
#include <string>               // Include the string library for using string data type

using namespace std;            // Use the standard namespace to avoid prefixing standard library names with 'std::'
                                // This is not a good practice in larger projects, but it's acceptable for small examples

int main(){
    
    // Variable declaration and initialization
    int age = 25;               // Integer variable to store age
    float pi = 3.14f;           // Float variable to store the value of pi
    double gravity = 9.81;      // Double variable to store the value of gravity
    char grade = 'A';           // Character variable to store a grade
    string name = "Alpha Dog";  // String variable to store a name
    bool isPresent = true;      // Boolean variable to indicate presence

    // Print the variables and their size to the console
    cout << "age: " << age << " (Reserved size: " << sizeof(age) << " bytes)" << endl;
    cout << "pi: " << pi << " (Reserved size: " << sizeof(pi) << " bytes)" << endl;
    cout << "gravity: " << gravity << " (Reserved size: " << sizeof(gravity) << " bytes)" << endl;
    cout << "grade: " << grade << " (Reserved size: " << sizeof(grade) << " bytes)" << endl;
    cout << "name: " << name << " (Reserved size: " << sizeof(name) << " bytes)" << endl;
    cout << "isPresent: " << isPresent << " (Reserved size: " << sizeof(isPresent) << " bytes)" << endl;

    return 0; // Return 0 to indicate successful execution
}

// Note:
// To cocompile this code, make sure you are in the correct directory and use the following command:
// g++ -o variables variables.cpp or clang++ -o variables variables.cpp