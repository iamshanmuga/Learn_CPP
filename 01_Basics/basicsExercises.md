# 📘 C++ Practice Exercises  

This document contains **real-world style exercise tickets** to practice the fundamentals of C++.  
Each exercise is written like a **User Story / Bug Report** to simulate actual development tasks.  

---

## 📝 Exercise 1 - Variables & Data types 
**User Story**:  
As a **developer**, I want to build a small program that asks the user for their **name, age, height, and GPA**, so that I can store different types of data and print them back neatly.  

**Acceptance Criteria**:  
- Use `string`, `int`, `float` (or `double`), and `char`.  
- Ask the user to input each value.  
- Print them back in a single formatted sentence. 

---

## 📝 Exercise 2 – Operators  
**Bug Report**:  
📄 *"The calculator program currently only adds numbers. Users want subtraction, multiplication, division, and modulus support."*  

**Steps to Fix / Implement**:  
- Create a program that takes **two integers** as input.  
- Perform **all 5 operations**: `+ - * / %`.  
- Print each result clearly.  
- Handle **division by zero** safely (show an error message instead of crashing).  

---

## 📝 Exercise 3 – Loops  
**User Story**:  
As a **math teacher**, I want a program that generates a **multiplication table** for a number, so that students can practice.  

**Acceptance Criteria**:  
- Ask the user to enter an integer.  
- Use a `for` loop to print the multiplication table (1 to 10).  
- Use a `while` loop to calculate the **sum of numbers from 1 to N**.  
- Example: Input = `5` → Output = Table of 5, Sum = 15.  

---

## 📝 Exercise 4 – Functions  
**Feature Request**:  
📄 *"Our program is getting too big. Refactor the math utilities into functions."*  

**Acceptance Criteria**:  
- Write **separate functions** for:  
1. Add two numbers.  
2. Find maximum of two numbers.  
3. Calculate factorial of a number.  
- Use `int` and `double` versions (function overloading).  
- Call these functions from `main()` and display results.  

---

## 📝 Exercise 5 – Conditionals  
**User Story**:  
As a **bank system**, I want to determine if a user is eligible for a **loan**, so that I can give quick approvals.  

**Acceptance Criteria**:  
- Ask for: `age`, `annual income`, and `credit score`.  
- Conditions:  
- Must be ≥ 18 years old.  
- Income ≥ 30,000.  
- Credit score ≥ 650.  
- Use `if/else if/else` to check eligibility.  
- Print `"Approved"` or `"Rejected"` with reasons.  

---

✅ These exercises together will cover:  
- **Variables & Data Types** → storing multiple kinds of input.  
- **Operators** → arithmetic practice.  
- **Loops** → iteration patterns.  
- **Functions** → modular coding.  
- **Conditionals** → decision-making logic.