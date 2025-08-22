/***************************************************************************************************/
/* This program demonstrates the declaration and initialization of different operators in C++      */
/* It also prints the results of various operations using these operators.                         */ 
/***************************************************************************************************/

#include <iostream>            // Include the iostream library for input/output operations

int main() {
    std::cout << "==== Operators in C++ ====" << std::endl;

    int a = 10;                // Declare and initialize an integer variable 'a'
    int b = 3;                 // Declare and initialize an integer variable 'b'

    // Arithmetic Operators
    std::cout << "Arithmetic Operators:" << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl;  // Addition
    std::cout << "a - b = " << (a - b) << std::endl;  // Subtraction
    std::cout << "a * b = " << (a * b) << std::endl;  // Multiplication
    std::cout << "a / b = " << (a / b) << std::endl;  // Division
    std::cout << "a % b = " << (a % b) << std::endl;  // Modulus    
    std::cout << "a++ = " << (a++) << " (Post-increment)" << std::endl; // Post-increment
    std::cout << "++a = " << (++a) << " (Pre-increment)" << std::endl;   // Pre-increment
    std::cout << "a-- = " << (a--) << " (Post-decrement)" << std::endl; // Post-decrement
    std::cout << "--a = " << (--a) << " (Pre-decrement)" << std::endl;   // Pre-decrement
    std::cout << std::endl;

    // Relational Operators
    std::cout << "Relational Operators:" << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;  // Equal to
    std::cout << "a != b: " << (a != b) << std::endl;  // Not equal to
    std::cout << "a > b: " << (a > b) << std::endl;    // Greater than
    std::cout << "a < b: " << (a < b) << std::endl;    // Less than
    std::cout << "a >= b: " << (a >= b) << std::endl;  // Greater than or equal to
    std::cout << "a <= b: " << (a <= b) << std::endl;  // Less than or equal to
    std::cout << std::endl;

    // Logical Operators
    std::cout << "Logical Operators:" << std::endl;
    std::cout << "(a > b) && (b < 5): " << ((a > b) && (b < 5)) << std::endl; // Logical AND
    std::cout << "(a > b) || (b < 5): " << ((a > b) || (b < 5)) << std::endl; // Logical OR
    std::cout << "!(a > b): " << (!(a > b)) << std::endl; // Logical NOT
    std::cout << std::endl;

    // Bitwise Operators
    std::cout << "Bitwise Operators:" << std::endl;
    std::cout << "a & b = " << (a & b) << std::endl;   // Bitwise AND
    std::cout << "a | b = " << (a | b) << std::endl;   // Bitwise OR
    std::cout << "a ^ b = " << (a ^ b) << std::endl;   // Bitwise XOR
    std::cout << "~a = " << (~a) << std::endl;         // Bitwise NOT
    std::cout << "a << 1 = " << (a << 1) << std::endl; // Left shift
    std::cout << "a >> 1 = " << (a >> 1) << std::endl; // Right shift
    std::cout << std::endl;

    // Assignment Operators
    std::cout << "Assignment Operators:" << std::endl;
    int c = 5;                  // Declare and initialize an integer variable 'c'
    std::cout << "c = " << c << std::endl;            // Simple assignment
    c += 2;                   // Add and assign
    std::cout << "c += 2: " << c << std::endl;        // Add and assign
    c -= 1;                   // Subtract and assign
    std::cout << "c -= 1: " << c << std::endl;        // Subtract and assign
    c *= 3;                   // Multiply and assign
    std::cout << "c *= 3: " << c << std::endl;        // Multiply and assign
    c /= 2;                   // Divide and assign
    std::cout << "c /= 2: " << c << std::endl;        // Divide and assign
    c %= 2;                   // Modulus and assign
    std::cout << "c %= 2: " << c << std::endl;        // Modulus and assign
    std::cout << std::endl;

    // Miscellaneous Operators
    std::cout << "Miscellaneous Operators:" << std::endl;
    int x = 5, y = 10;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl; // Size of int type
    std::cout << "Ternary Operator (x < y ? x : y): " << (x < y ? x : y) << std::endl; // Ternary operator
    std::cout << "Comma Operator (x = 1, y = 2): " << (x = 1, y = 2) << std::endl; // Comma operator
    std::cout << "Pointer to x: " << &x << std::endl; // Address of x
    std::cout << "Value at pointer to x: " << *(&x) << std::endl; // Value at address of x
    std::cout << std::endl;

    // Type Casting Operators
    std::cout << "Type Casting Operators:" << std::endl;
    double d = 9.99;            // Declare and initialize a double variable 'd'
    int intValue = static_cast<int>(d); // Convert double to int using static_cast
    std::cout << "Static cast of double to int: " << intValue << std::endl; // Print the converted value
    float floatValue = static_cast<float>(d); // Convert double to float using static_cast
    std::cout << "Static cast of double to float: " << floatValue << std::endl; // Print the converted value
    int anotherInt = 42;        // Declare and initialize another integer variable
    double anotherDouble = static_cast<double>(anotherInt); // Convert int to double using static_cast
    std::cout << "Static cast of int to double: " << anotherDouble << std::endl; // Print the converted value
    std::cout << std::endl;

    // Sizeof & TypeID Operator
    std::cout << "Sizeof Operator:" << std::endl;
    std::cout << "Size of a: " << sizeof(a) << " bytes" << std::endl; // Size of variable 'a'
    std::cout << "typeid(a).name(): " << typeid(a).name() << std::endl; // Type of variable 'a'
    std::cout << std::endl;

    // Ternary Operator
    std::cout << "Ternary Operator:" << std::endl;
    int max = (a > b) ? a : b; // Find the maximum of 'a' and 'b'
    std::cout << "Maximum of a and b: " << max << std::endl; // Print the maximum value
    std::cout << std::endl;

    // Comma Operator
    std::cout << "Comma Operator:" << std::endl;
    int result = (a = 5, b = 10, a + b); // Assign values to 'a' and 'b', then add them
    std::cout << "Result of comma operator: " << result << std::endl; // Print the result of the addition
    std::cout << std::endl;

    // Pointer Operator
    std::cout << "Pointer Operator:" << std::endl;
    int* ptr = &a;                // Declare a pointer and assign it the address of 'a'
    std::cout << "Pointer to a: " << ptr << std::endl; // Print the address stored in the pointer
    std::cout << "Value at pointer to a: " << *ptr << std::endl; // Dereference the pointer to get the value of 'a'
    std::cout << std::endl;

    // Reference Operator
    std::cout << "Reference Operator:" << std::endl;
    int& ref = a;                // Declare a reference to 'a'
    std::cout << "Reference to a: " << ref << std::endl; // Print the value of 'a' through the reference
    ref = 20;                   // Change the value of 'a' through the reference
    std::cout << "Value of a after changing reference: " << a << std::endl; // Print the new value of 'a'
    std::cout << std::endl;

    return 0;                   // Return 0 to indicate successful execution

}