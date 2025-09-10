#include <iostream>     // for input/output
#include <vector>       // for dynamic arrays
#include <memory>       // for smart pointers
using namespace std;    // for standard library

// ===== Base Class: Person =====
class Person {      
protected:
    string name;    // person's name
    int id;         // person's ID

public:
    Person(string n, int i) : name(n), id(i) {}     // constructor
    virtual ~Person() {}                            // virtual destructor

    string getName() const { return name; }         // get name
    int getId() const { return id; }                // get ID

    virtual string getRole() const {                // get role (to be overridden)
        return "Generic Person";            
    }
};

// ===== Derived Classes =====
class Student : public Person {             
private:
    string course;                  // course enrolled  
public:
    Student(string n, int i, string c) : Person(n, i), course(c) {} // constructor
    string getRole() const override {                               // override getRole
        return "Student (" + course + ")";
    }
};

class Teacher : public Person {
private:
    string subject;         // subject taught
public:
    Teacher(string n, int i, string s) : Person(n, i), subject(s) {}    // constructor
    string getRole() const override {                                   // override getRole
        return "Teacher (" + subject + ")";
    }
};

// ===== Book Class =====
class Book {
private:
    string title;       // book title
    string author;      // book author
    bool isBorrowed;    // borrowing status
    int borrowedById;   // ID of the member who borrowed the book

public:
    Book(string t, string a) : title(t), author(a), isBorrowed(false), borrowedById(-1) {}  // constructor

    string getTitle() const { return title; }               // get title
    string getAuthor() const { return author; }             // get author
    bool getStatus() const { return isBorrowed; }           // get borrowing status
    int getBorrowedById() const { return borrowedById; }    // get ID of borrower

    void borrowBook(int memberId) {
        if (!isBorrowed) {
            isBorrowed = true;    
            borrowedById = memberId;
            cout << "Book \"" << title << "\" borrowed successfully!\n";
        } else {
            cout << "Book \"" << title << "\" is already borrowed.\n";
        }
    }

    void returnBook(int memberId) {
        if (isBorrowed && borrowedById == memberId) {
            isBorrowed = false;
            borrowedById = -1;
            cout << "Book \"" << title << "\" returned successfully!\n";
        } else {
            cout << "Cannot return book \"" << title << "\" (not borrowed by this member).\n";
        }
    }

    void displayInfo() const {
        cout << "Title: " << title << ", Author: " << author
             << ", Status: " << (isBorrowed ? "Borrowed" : "Available") << endl;
    }
};

// ===== Library Class =====
class Library {
private:
    vector<unique_ptr<Book>> books;
    vector<unique_ptr<Person>> members;

public:
    void addBook(string title, string author) {
        books.push_back(make_unique<Book>(title, author));
        cout << "Book added successfully!\n";
    }

    void addMember(unique_ptr<Person> member) {
        members.push_back(std::move(member));
        cout << "Member added successfully!\n";
    }

    void showBooks() const {
        cout << "\n--- Library Books ---\n";
        for (const auto &book : books) {
            book->displayInfo();
        }
    }

    void showMembers() const {
        cout << "\n--- Library Members ---\n";
        for (const auto &member : members) {
            cout << "ID: " << member->getId()
                 << ", Name: " << member->getName()
                 << ", Role: " << member->getRole() << endl;
        }
    }

    Book* findBook(const string& title) {
        for (auto &book : books) {
            if (book->getTitle() == title) {
                return book.get();
            }
        }
        return nullptr;
    }

    Person* findMember(int id) {
        for (auto &member : members) {
            if (member->getId() == id) {
                return member.get();
            }
        }
        return nullptr;
    }

    void borrowBook(const string& title, int memberId) {
        Book* book = findBook(title);
        Person* member = findMember(memberId);

        if (book && member) {
            book->borrowBook(memberId);
        } else {
            cout << "Borrowing failed: Invalid book or member.\n";
        }
    }

    void returnBook(const string& title, int memberId) {
        Book* book = findBook(title);
        Person* member = findMember(memberId);

        if (book && member) {
            book->returnBook(memberId);
        } else {
            cout << "Returning failed: Invalid book or member.\n";
        }
    }
};

// ===== Main Program (Interactive Menu) =====
int main() {
    Library lib;
    int choice;

    do {
        cout << "\n=== Library Management Menu ===\n";
        cout << "1. Add Book\n";
        cout << "2. Add Member (Student)\n";
        cout << "3. Add Member (Teacher)\n";
        cout << "4. Show All Books\n";
        cout << "5. Show All Members\n";
        cout << "6. Borrow Book\n";
        cout << "7. Return Book\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); // clear input buffer

        if (choice == 1) {
            string title, author;
            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            lib.addBook(title, author);
        }
        else if (choice == 2) {
            string name, course;
            int id;
            cout << "Enter student name: ";
            getline(cin, name);
            cout << "Enter student ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter course: ";
            getline(cin, course);
            lib.addMember(make_unique<Student>(name, id, course));
        }
        else if (choice == 3) {
            string name, subject;
            int id;
            cout << "Enter teacher name: ";
            getline(cin, name);
            cout << "Enter teacher ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter subject: ";
            getline(cin, subject);
            lib.addMember(make_unique<Teacher>(name, id, subject));
        }
        else if (choice == 4) {
            lib.showBooks();
        }
        else if (choice == 5) {
            lib.showMembers();
        }
        else if (choice == 6) {
            string title;
            int id;
            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter member ID: ";
            cin >> id;
            cin.ignore();
            lib.borrowBook(title, id);
        }
        else if (choice == 7) {
            string title;
            int id;
            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter member ID: ";
            cin >> id;
            cin.ignore();
            lib.returnBook(title, id);
        }
        else if (choice == 0) {
            cout << "Exiting Library Tool. Goodbye!\n";
        }
        else {
            cout << "Invalid choice, try again.\n";
        }

    } while (choice != 0);

    return 0;
}