#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, string holder, double bal) {
        accountNumber = accNum;
        accountHolder = holder;
        balance = bal;
    }

    // Deposit Function
    void deposit(double amount) {
        balance += amount;
        cout << "\nDeposit: " << amount << endl;
        cout << "New Balance: " << balance << endl;
    }

    // Withdraw Function
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "\nWithdrawal failed: Insufficient funds." << endl;
        } else {
            balance -= amount;
            cout << "\nWithdrawal: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
    }

    // Display Account Details
    void displayAccount() {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    // Creating two BankAccount objects
    BankAccount acc1(101, "John", 5000);
    BankAccount acc2(102, "Mary", 3000);

    // Display first account details
    acc1.displayAccount();

    // Perform deposit
    acc1.deposit(1000);

    // Perform withdrawal
    acc1.withdraw(2000);

    // Display updated account details
    acc1.displayAccount();

    // Display second account details
    acc2.displayAccount();

    return 0;
}