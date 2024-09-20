// 1. WAP to create simple calculator using class

#include <iostream>

using namespace std;

class Calculator {
public:
    double add(double a, double b) {

        return a + b;

    }

    double subtract(double a, double b) {

        return a - b;

    }

    double multiply(double a, double b) {

        return a * b;

    }


    double divide(double a, double b) {

        if (b == 0) {

            cout << "Error: Division by zero is not allowed." << endl;

            return 0; 

        }

        return a / b;

    }
};

int main() {
    Calculator calc;
    int choice;
    double num1, num2;

    cout << "Select operation:" << endl;
    cout << "\n1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cout << "\nEnter choice (1/2/3/4): ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "\nEnter second number: ";
        cin >> num2;
    }

    switch (choice) {

        case 1:
            cout << "\nResult: " << calc.add(num1, num2) << endl;
            break;

        case 2:
            cout << "\nResult: " << calc.subtract(num1, num2) << endl;
            break;

        case 3:
            cout << "\nResult: " << calc.multiply(num1, num2) << endl;
            break;

        case 4:
            cout << "\nResult: " << calc.divide(num1, num2) << endl;
            break;

        default:
            cout << "\nInvalid choice! Please enter a number between 1 and 4." << endl;
      }

    return 0;
}
