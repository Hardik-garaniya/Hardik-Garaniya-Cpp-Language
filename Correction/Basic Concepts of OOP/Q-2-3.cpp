// 2. Define a class to represent a bank account. Include the following members:

// 3. Data Member:

// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account

// Member Functions

// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    BankAccount(string name, string accNum, string accType, double initialBalance)
        : depositorName(name), accountNumber(accNum), accountType(accType), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. Your current balance is: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Your current balance is: " << balance << endl;
        } else {
            cout << "Insufficient balance. Cannot withdraw." << endl;
        }
    }

    void display() {
        cout << "\nDepositor Name: " << depositorName << endl;
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "\nAccount Type: " << accountType << endl;
        cout << "\nCurrent Balance: " << balance << endl;
    }
};

int main() {
    string name, accNum, accType;
    double initialBalance;

    cout << "Enter depositor name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    getline(cin, accNum);

    cout << "Enter account type (Savings or Current): ";
    getline(cin, accType);

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(name, accNum, accType, initialBalance);

    account.display();

    double depositAmt, withdrawalAmt;

    cout << "\nEnter deposit amount: ";
    cin >> depositAmt;
    account.deposit(depositAmt);

    cout << "\nEnter withdrawal amount: ";
    cin >> withdrawalAmt;
    account.withdraw(withdrawalAmt);

    account.display();

    return 0;
}