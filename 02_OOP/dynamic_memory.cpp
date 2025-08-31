/**********************************************************************************/
/* This program demonstrates the concept of Dynamic Memory in C++                 */
/* ------------------------------------------------------------------------------ */
/* What you'll learn:                                                             */
/* ------------------                                                             */
/* 1. Why Destructors are critical --> They prevent memory leaks                  */
/* 2. Dynamic Allocation (new) and Manual Cleanup (delete)                        */
/* 3. Scope-based cleanup --> Destructors run when objects go out of scope        */
/**********************************************************************************/

#include <iostream>         // Include the iostream library for input/output operations
#include <string>           // Include the string library for using string data type

class student {
private:                    // Access specifier (private members are not accessible from outside the class)
    std::string* name;      // Name of the student (* indicates a pointer, dynamically allocated)
    int* age;               // Age of the student (* indicates a pointer, dynamically allocated)

public:                     // Access specifier (public members are accessible from outside the class)
    // Parameterized Constructor
    student(std::string n, int a) {
        std::cout << "Contructor: Allocating memory..." << std::endl;
        name = new std::string(n);  // Dynamic memory allocation
        age = new int(a);           // Dynamic memory allocation
    }

    // Destructor
    ~student() {
        std::cout << "Destructor: Releasing memory for " << *name << std::endl;
        delete name;            // Free dynamically allocated memory
        delete age;             // Free dynamically allocated memory
    }

    // Method to display student details
    void displayInfo() {
        std::cout << "Student Name: " << *name << std::endl;  // Dereference pointer to get value
        std::cout << "Student Age: " << *age << std::endl;    // Dereference pointer to get value
        std::cout << "------------------------" << std::endl; // Separator for better readability
    }
};

// Function to demonstrate dynamic memory allocation and cleanup
int main () {
    std::cout << " === Dynamic Memory Allocation with Constructor & Destructor ===\n\n";
    student s1("Alice", 20); // Object s1 created on stack
    s1.displayInfo();

    {
        student s2("Bob", 22); // Object s2 created on stack within a new scope
        s2.displayInfo();
    } // s2 goes out of scope here, and its destructor is called automatically
    std::cout << "Back to main scope.\n";
}