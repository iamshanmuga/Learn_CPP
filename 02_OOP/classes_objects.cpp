/***************************************************************/
/* This program demonstrates the Classes and Objects in C++    */
/***************************************************************/

#include <iostream>           // Include the iostream library for input/output operations
#include <string>             // Include the string library for using string data type

// Define a class named 'Car'
class Car {
public:                     // Access specifier (public members are accessible from outside the class)
    // Attributes (data members)
    std::string brand;      // Brand of the car
    std::string model;      // Model of the car
    int year;               // Year of manufacture

    // Method (member function) to display car details
    void displayInfo() {
        std::cout << "Car Brand: " << brand << std::endl;       // Display the brand of the car
        std::cout << "Car Model: " << model << std::endl;       // Display the model of the car
        std::cout << "Car Year: " << year << std::endl;         // Display the year of manufacture
        std::cout << "------------------------" << std::endl;   // Separator for better readability
    }
};

int main() {

    std::cout << " === Classes and Objects in C++ ===" << std::endl;

    // Create an object of the Car class
    Car car1;

    // Initialize the attributes of car1
    car1.brand = "Honda";
    car1.model = "Accord";
    car1.year = 2016;

    // Display the details of car1 using the displayInfo method
    car1.displayInfo();

    // Create another object of the Car class
    Car car2;

    // Initialize the attributes of car2
    car2.brand = "Toyota";
    car2.model = "Corolla";
    car2.year = 2025;

    // Display the details of car2 using the displayInfo method
    car2.displayInfo();

    return 0;
}