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

        }
        else
        {

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

    BankAccount account("Hardik", "SB-2261", "Savings", 2000.0);

    
    account.display();

    
    double depositAmt = 1500;
    cout << "\nDeposit Amount: " << depositAmt << endl;
    account.deposit(depositAmt);

    double withdrawalAmt = 3000;
    cout << "\nAttempt to withdraw Amount: " << withdrawalAmt << endl;
    account.withdraw(withdrawalAmt);

    withdrawalAmt = 1000;
    cout << "\nAttempt to withdraw Amount: " << withdrawalAmt << endl;
    account.withdraw(withdrawalAmt);

    
    account.display();

    return 0;
}
