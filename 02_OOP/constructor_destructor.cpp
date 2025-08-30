/**********************************************************************************/
/* This program demonstrates the concept of Constructors and Destructors in C++  */
/**********************************************************************************/

#include <iostream>           // Include the iostream library for input/output operations
#include <string>             // Include the string library for using string data type

// Define a class named 'Car'
class Car {
    private:                    // Access specifier (private members are not accessible from outside the class)
        std::string brand;      // Brand of the car
        int year;               // Year of manufacture
    public:                     // Access specifier (public members are accessible from outside the class)
        std::string model;      // Model of the car

        // Constructor (special member function that is called when an object is created)
        Car(std::string b, std::string m, int y) {
            brand = b;          // Initialize brand
            model = m;         // Initialize model
            year = y;          // Initialize year
            std::cout << "Car " << brand << " " << model << " (" << year << ") is created." << std::endl;
        }

        // Destructor (special member function that is called when an object is destroyed)
        ~Car() {
            std::cout << "Car " << brand << " " << model << " (" << year << ") is destroyed." << std::endl;
        }

        // Method (member function) to display car details
        void displayInfo() {
            std::cout << "Car Brand: " << brand << std::endl;       // Display the brand of the car
            std::cout << "Car Model: " << model << std::endl;       // Display the model of the car
            std::cout << "Car Year: " << year << std::endl;         // Display the year of manufacture
            std::cout << "------------------------" << std::endl;   // Separator for better readability
        }
};

int main() {

    std::cout << " === Constructors and Destructors in C++ ===" << std::endl;

    // Create an object of the Car class (this will call the constructor)
    Car car1("Honda", "Accord", 2016);

    // Display the details of car1 using the displayInfo method
    car1.displayInfo();

    // Create another object of the Car class (this will call the constructor)
    Car car2("Toyota", "Corolla", 2025);

    // Display the details of car2 using the displayInfo method
    car2.displayInfo();

    return 0;   // When main function ends, destructors for car1 and car2 will be called automatically
}
