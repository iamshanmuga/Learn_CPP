/*******************************************************************************************/
/* This program demonstrates the concept of Polymorphism in C++                            */
/*-----------------------------------------------------------------------------------------*/
/* 1.	Abstract classes act as blueprints (cannot be instantiated).                       */
/*	2.	Pure virtual functions (= 0) enforce mandatory overriding.                         */
/*	3.	Polymorphism via base class pointers — lets us treat different shapes uniformly.   */
/*	4.	Virtual destructors ensure proper cleanup when deleting derived objects.           */
/*******************************************************************************************/

#include <iostream>           // Include the iostream library for input/output operations
#include <string>             // Include the string library for using string data type

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Non-pure virtual function (optional to override)
    virtual void area() {
        std::cout << "Generic Shape has no specific area." << std::endl;
    }

    virtual ~Shape() {}  // virtual destructor (best practice)
};

// Derived Class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    void draw() override {
        std::cout << "Drawing a Circle" << std::endl;
    }

    void area() override {
        std::cout << "Circle Area: " << 3.14159 * radius * radius << std::endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() override {
        std::cout << "Drawing a Rectangle" << std::endl;
    }

    void area() override {
        std::cout << "Rectangle Area: " << width * height << std::endl;
    }
};

int main() {
    std::cout << "=== Run-Time Polymorphism with Abstract Classes ===\n\n";

    // Shape s;  // ❌ ERROR: Cannot instantiate abstract class

    Shape* shape1 = new Circle(5.0);            // Base class pointer to derived class object
    Shape* shape2 = new Rectangle(4.0, 6.0);    // Base class pointer to derived class object

    shape1->draw();
    shape1->area();

    std::cout << std::endl;

    shape2->draw();
    shape2->area();

    delete shape1;
    delete shape2;

    return 0;
}
