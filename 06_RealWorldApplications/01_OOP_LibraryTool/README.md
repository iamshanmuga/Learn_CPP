# 📚 Library Management Tool (OOP Capstone Project)

## 📝 Overview
This project is the **capstone program for the Object-Oriented Programming (OOP) section**.  
It demonstrates how core OOP concepts in C++ can be applied to build a simple but realistic tool: a **Library Management System**.  

The program allows you to:
- Add books 📖  
- Add members (Students 👩‍🎓 and Teachers 👨‍🏫)  
- View all books and members  
- Borrow and return books  
- Run everything through an interactive menu  

---

## 🎯 OOP Concepts Covered
- **Classes & Objects** → Book, Person, Student, Teacher, Library  
- **Constructors & Destructors** → Initialization and cleanup  
- **Encapsulation** → Book status (`isBorrowed`) and member details kept private  
- **Inheritance** → `Student` and `Teacher` inherit from `Person`  
- **Polymorphism** → `getRole()` behaves differently depending on member type  
- **Dynamic Memory** → Managed using `unique_ptr` for safe object handling  

---

## 🚀 Why This Project?
This project is designed to:
- Provide a **real-world style example** of how OOP fits together  
- Be a **reference point** for learners who have just finished the OOP section  
- Serve as a **foundation** for more advanced concepts later  

---

## 🔮 Future Expansion
When you reach the **Advanced Concepts** section, this project will evolve into **Library Tool v2.0**.  
Advanced concepts will unlock new capabilities, such as:
- **File Handling** → Save/load data to persist library state  
- **STL Containers** → Use maps/sets for efficient lookups  
- **Templates** → Generic data structures for books and members  
- **Smart Pointers (advanced usage)** → Better resource management  
- **Multithreading** → Simulate concurrent book borrowing  

This will highlight the **difference between OOP-only design and advanced C++ programming**.  

---

## ▶️ Running the Program
Compile with any C++ compiler (C++11 or later):

```bash
clang++ library_tool.cpp -o library_tool
./library_tool
```
or
```bash
g++ library_tool.cpp -o library_tool
./library_tool
```