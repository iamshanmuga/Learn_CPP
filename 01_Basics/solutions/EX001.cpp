/*******************************************************************************************/
/* This Program is a solution to the exercise: EX001 (within 01_Basics/basicsExercises.md) */
/* It demonstrates the use of different data types in C++ and how to take user input.      */
/*******************************************************************************************/

#include <iostream> // Library for input and output

int main () {
    // Decare Variables
    std::string name;
    int age;
    float height;
    double gpa;
    char grade;

    // Ask for user input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);   // Using getline to allow for spaces in names
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your height (in cms): ";
    std::cin >> height;
    std::cout << "Enter your GPA: ";
    std::cin >> gpa;
    std::cout << "Enter your grade (A, B, C, etc.): ";
    std::cin >> grade;

    // Print the formatted output
    std::cout << "Hello " << name << "! You are " << age << " years old, "
              << "your height is " << height << " cm, your GPA is " << gpa 
              << ", and your grade is '" << grade << "'." << std::endl;

    return 0;
}