/*******************************************************************************************/
/* This program demonstrates the concept of Polymorphism in C++                            */
/*-----------------------------------------------------------------------------------------*/
/* There are two main types:                                                               */                       
/*	1.	Compile-Time Polymorphism (Static Binding)                                         */
/*	    •	Achieved by function overloading (same name, different parameters).            */
/*	    •	Achieved by operator overloading.                                              */
/*	2.	Run-Time Polymorphism (Dynamic Binding)                                            */
/*	    •	Achieved by function overriding using virtual functions.                       */
/*	    •	Requires inheritance.                                                          */
/*	    •	Decided at runtime, not at compile-time.                                       */ 
/*******************************************************************************************/

#include <iostream>           // Include the iostream library for input/output operations
#include <string>             // Include the string library for using string data type

// Compile Time Polymorphism: Function Overloading
class Math {
    public:
        // Function to add two integers
        int add(int a, int b) {
            return a + b;
        }

        // Overloaded function to add three integers
        int add(int a, int b, int c) {
            return a + b + c;
        }

        // Overloaded function to add two doubles
        double add(double a, double b) {
            return a + b;
        }
};

// Run Time Polymorphism: Overriding with Virtual Functions
class Animal {
    public:
        // Virtual function to make sound
        virtual void makeSound() {
            std::cout << "Some generic animal sound" << std::endl;
        }
};

class Dog : public Animal {
    public:
        // Override makeSound function for Dog
        void makeSound() override {
            std::cout << "Woof" << std::endl;
        }
};

class Cat : public Animal {
    public:
        // Override makeSound function for Cat
        void makeSound() override {
            std::cout << "Meow" << std::endl;
        }
};

int main() {
    // Demonstrate Compile Time Polymorphism
    Math m;
    std::cout << "Sum of 2 and 3: " << m.add(2, 3) << std::endl;               // Calls add(int, int)
    std::cout << "Sum of 2, 3 and 4: " << m.add(2, 3, 4) << std::endl;         // Calls add(int, int, int)
    std::cout << "Sum of 2.5 and 3.5: " << m.add(2.5, 3.5) << std::endl;       // Calls add(double, double)

    // Demonstrate Run Time Polymorphism
    Animal* animal1 = new Dog(); // Base class pointer to derived class object
    Animal* animal2 = new Cat(); // Base class pointer to derived class object

    animal1->makeSound(); // Calls Dog's makeSound
    animal2->makeSound(); // Calls Cat's makeSound

    // Clean up
    delete animal1;
    delete animal2;



    return 0;
}