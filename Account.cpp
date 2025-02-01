#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Account
{
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    Account(int accNum, double bal)
    {
        accountNumber = accNum;
        balance = bal;
    }
    // Setters and Getters
    void setAccountNumber(int accNum) { accountNumber = accNum; }
    int getAccountNumber() { return accountNumber; }

    void setBalance(double bal) { balance = bal; }
    double getBalance() { return balance; }
    // Deposit method
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited " << amount << " LE. New Balance: " << balance << " LE\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw method
    virtual void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn " << amount << " LE. Remaining Balance: " << balance << " LE\n";
        }
        else
        {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    // Virtual destructor for proper cleanup in case of inheritance
    // virtual ~Account() {}
};

// SpecialAccount class inheriting from Account
class SpecialAccount : public Account
{
public:
    // Constructor
    SpecialAccount(int accNum, double initialBalance) : Account(accNum, initialBalance) {}

    // Override withdraw method
    void withdraw(double amount) override
    {
        if (amount > 0 && amount <= getBalance() + 1000)
        { // Allow overdraft up to 1000 LE
            double newBalance = getBalance() - amount;
            setBalance(newBalance);
            cout << "Withdrawn " << amount << " LE (with overdraft if applicable). Remaining Balance: " << getBalance() << " LE\n";
        }
        else
        {
            cout << "Withdrawal exceeds overdraft limit or invalid amount.\n";
        }
    }
};
#endif
// Main function to test the classes
