/*******************************************************************************************/
/* This program demonstrates the concept of Inheritance in C++                             */
/*-----------------------------------------------------------------------------------------*/
/* 1. How child classes reuse parent constructors & methods.                               */
/* 2. Single inheritance (Car inherits from Vehicle).                                      */
/* 3. Multilevel inheritance (ElectricCar inherits from Car, which inherits from Vehicle). */
/* 4. Use of protected → accessible in child but not outside.                              */
/*******************************************************************************************/

#include <iostream>           // Include the iostream library for input/output operations
#include <string>             // Include the string library for using string data type

// Base class
class Vehicle {
protected:              
    std::string brand;      // Protected member variable to store the brand of the vehicle
    int year;               // Protected member variable to store the manufacturing year of the vehicle
public:             
    // Constructor to initialize brand and year
    Vehicle(std::string b, int y) {
        brand = b;          // Initialize brand
        year = y;           // Initialize year
    }

    // Method to display vehicle information
    void displayInfo() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};

// Derived class (single inheritance)
class Car : public Vehicle { // Car inherits from Vehicle
private:
    int doors;              // Private member variable to store the number of doors in the car
public:
    // Constructor to initialize brand, year, and doors
    Car(std::string b, int y, int d) : Vehicle(b, y) { // Call base class constructor
        doors = d;          // Initialize doors
    }

    // Method to display car information
    void displayCarInfo() {
        displayInfo();      // Call base class method to display brand and year
        std::cout << "Doors: " << doors << std::endl; // Display number of doors
    }
};

// Derived class (multilevel inheritance)
class ElectricCar : public Car { // ElectricCar inherits from Car
private:
    int batteryCapacity;    // Private member variable to store the battery capacity of the electric car
public:           
    // Constructor to initialize brand, year, doors, and battery capacity
    ElectricCar(std::string b, int y, int d, int bc) : Car(b, y, d) { // Call Car constructor
        batteryCapacity = bc; // Initialize battery capacity
    }

    // Method to display electric car information
    void displayElectricCarInfo() {
        displayCarInfo();   // Call Car method to display car information
        std::cout << "Battery Capacity: " << batteryCapacity << " kWh" << std::endl; // Display battery capacity
    }
};

int main() {
    // Create an instance of Vehicle
    Vehicle myVehicle("Toyota", 2020);
    myVehicle.displayInfo(); // Display vehicle information

    std::cout << "------------------------" << std::endl;

    // Create an instance of Car
    Car myCar("Honda", 2021, 4);
    myCar.displayCarInfo(); // Display car information

    std::cout << "------------------------" << std::endl;

    // Create an instance of ElectricCar
    ElectricCar myElectricCar("Tesla", 2022, 4, 75);
    myElectricCar.displayElectricCarInfo(); // Display electric car information

    return 0; // Indicate that the program ended successfully
}