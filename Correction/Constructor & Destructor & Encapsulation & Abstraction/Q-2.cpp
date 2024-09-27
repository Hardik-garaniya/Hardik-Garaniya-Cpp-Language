 // 2. Write a program of Addition, Subtraction, Division, Multiplication using constructor


#include<iostream>

using namespace std;

class Calculator{

private:

float num1;
float num2;

public:
Calculator(float a, float b) : num1(a), num2(b){

    
}

float add(){

    return num1 + num2;
}

float subtract(){

    return num1 - num2;

}

float multiply(){

  return num1 * num2;

}

float divide() {
        if (num2 != 0) {
            cout << "Division: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
    }


};

int main(){

 int a, b;

 cout <<"Enter first number : " << endl;
 cin  >> a;

 cout <<"Enter second number : " << endl;
 cin  >> b;

Calculator calc(a, b);

cout << "\nAddition : " << calc.add() << endl;
cout << "Subtraction : " << calc.subtract() << endl;
cout << "Multiplication : " << calc.multiply() << endl;
calc.divide();

return 0;

};

