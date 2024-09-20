
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

        }
        else
        {
           
            cout << "Insufficient balance. Cannot withdraw." << endl;
             
        }
         
    }
     
};

int main() {
    string hh = "sb - 2261";
    double OpeningBalance = 2000;
    double depositAmt;
    double withdrawalAmt;

    cout << "\nAccount Number: " << hh << endl;
    cout << "Initial Balance: " << OpeningBalance << endl;

    BankAccount account(hh, OpeningBalance); 

    depositAmt = 2000;
    cout << "\nDeposit Amount: " << depositAmt << endl;
    account.deposit(depositAmt);

    withdrawalAmt = 4000;
    cout << "Attempt to withdraw Amount: " << withdrawalAmt << endl;
    account.withdraw(withdrawalAmt);

    withdrawalAmt = 1800;
    cout << "Attempt to withdraw Amount: " << withdrawalAmt << endl;
    account.withdraw(withdrawalAmt);

    return 0;
}
