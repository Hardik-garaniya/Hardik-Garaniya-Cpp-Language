// 4. Write a C++ program to implement a class called Bank Account that has private member variables for account number 
// and balance. Include member functions to deposit and withdraw money from the account.
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountnumber;
    double balance;

public:
    BankAccount(const string& accNum, double initialBalance) : accountnumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. Your Current Balance Is: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdraw successful. Your Current Balance Is: " << balance << endl;
        } else {
            cout << "Insufficient balance. Cannot withdraw." << endl;
        }
    }
};

int main() {
    string accountNumber;
    double initialBalance, depositAmt, withdrawalAmt;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    cout << "\nAccount Number: " << accountNumber << endl;
    cout << "Initial Balance: " << initialBalance << endl;

    BankAccount account(accountNumber, initialBalance);

    cout << "\nEnter deposit amount: ";
    cin >> depositAmt;
    cout << "\nDeposit Amount: " << depositAmt << endl;
    account.deposit(depositAmt);

    cout << "\nEnter withdrawal amount: ";
    cin >> withdrawalAmt;
    cout << "Attempt to withdraw Amount: " << withdrawalAmt << endl;
    account.withdraw(withdrawalAmt);

    cout << "\nEnter withdrawal amount: ";
    cin >> withdrawalAmt;
    cout << "Attempt to withdraw Amount: " << withdrawalAmt << endl;
    account.withdraw(withdrawalAmt);

    return 0;
}