// 8. Write a program to Mathematic operation like Addition, Subtraction, ultiplication,
//  Division Of two umbenr M using different parameters and Function Overloading 


#include<iostream>

using namespace std;

class Calculator{

public:

int add(int a, int b){

  return a + b;

}

float add(float a, float b){

    return a + b;

}

int subtract(int a, int b){

    return a - b;

}

float subtract(float a, float b){

    return a - b;

}

int multiply(int a, int b){

    return a * b;

}

float multiply(float a, float b){

    return a * b;

}

int divide(int a, int b){

    if(b != 0)
    {
        return a / b;
    }
    else
    {
      cout << "Error: Division by zero!" << endl;
      return 0;
    }
}

float divide(float a, float b){

  if(b != 0)
  {
    return a / b;
  }
  else
  {
      cout << "Error: Division by zero!" << endl;
      return 0;
  }

  }




};

int main(){

 Calculator calc;

 cout << "\nAddition (2 + 2) : " << calc.add(2, 2) << endl;
 cout << "Addition (2.0 + 2.0) : " << calc.add(2.0f, 2.0f) << endl;

 cout << "\nSubtraction (5 - 2) : " << calc.subtract(5, 2) << endl;
 cout << "Subtraction (5.2 - 2.8) : " << calc.subtract(5.2f, 2.8f) << endl;

 cout << "\nMultiplication (22 * 22) : " << calc.multiply(22, 22) << endl;
 cout << "Multiplication (22.2 * 22.2) : " << calc.multiply(22.2f, 22.2f) << endl;

 cout << "\nDivision (50 / 2) : " << calc.divide(50, 2) << endl;
 cout << "Division (50.2 / 2.5) : " << calc.divide(50.2f, 2.5f) << endl;


return 0;

}


