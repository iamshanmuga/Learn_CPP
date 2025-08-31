/**********************************************************************************/
/* This program demonstrates the concept of Encapsulation in C++                  */
/*--------------------------------------------------------------------------------*/
/* Encapsulation = wrapping data + methods together in a class.                   */
/* Access Specifiers:                                                             */
/*	•	private → accessible only inside the class.                               */
/*	•	public → accessible from outside.                                         */
/*	•	protected → accessible by the class + derived (child) classes.            */
/* Getters/Setters → controlled access to private data.                           */
/**********************************************************************************/

#include <iostream>           // Include the iostream library for input/output operations
#include <string>             // Include the string library for using string data type

class BankAccount {
    private:                    // Private members (not accessible from outside the class)
        std::string owner ;     // Name of the account owner
        double balance;         // Balance of the bank account

    public:                     // Public members (accessible from outside the class)
        // Constructor to initialize owner and balance
        BankAccount(std::string accOwner, double initialBalance) {
            owner = accOwner;          // Initialize owner
            if (initialBalance < 0) {  // Ensure initial balance is not negative
                balance = 0;
            } else {
                balance = initialBalance; // Initialize balance
            }
        }
        // Getter for Balance
        double getBalance() {
            return balance;            // Return the current balance
        }
        // Setter for Balance (Deposit money)
        void deposit(double amount) {
            if (amount > 0) {          // Ensure deposit amount is positive
                balance += amount;     // Increase balance by the deposit amount
                std::cout << "Deposited: $" << amount << std::endl;
            } else {
                std::cout << "Deposit amount must be positive!" << std::endl;
            }
        }
        // Setter for Balance (Withdraw money)
        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) { // Ensure withdrawal amount is positive and does not exceed balance
                balance -= amount;                 // Decrease balance by the withdrawal amount
                std::cout << "Withdrew: $" << amount << std::endl;
            } else {
                std::cout << "Invalid withdrawal amount!" << std::endl;         // Error message for invalid withdrawal
            }
        }
        // Method to display account details
        void displayInfo() {
            std::cout << "Account Owner: " << owner << std::endl;       // Display the account owner's name
            std::cout << "Account Balance: $" << balance << std::endl;  // Display the current balance
            std::cout << "------------------------" << std::endl;       // Separator for better readability
        }           
};

int main() {

    std::cout << " === Encapsulation in C++ ===" << std::endl;

    // Create an object of the BankAccount class
    BankAccount account1("Alice", 1000.0);

    // Display the details of account1
    account1.displayInfo();

    // Deposit money into account1
    account1.deposit(500.0);
    account1.displayInfo(); // Display updated details

    // Withdraw money from account1
    account1.withdraw(200.0);
    account1.displayInfo(); // Display updated details

    // Attempt to withdraw more than the balance
    account1.withdraw(2000.0); // Invalid withdrawal
    account1.displayInfo(); // Display details

    return 0;   // End of the program
}