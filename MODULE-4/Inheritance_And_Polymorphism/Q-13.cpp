// 13. Write a program to find the max number from given two numbersusing friend function

#include<iostream>

using namespace std;

class Number{

private:

int num1, num2;

public:

Number(int n1, int n2){

    num1 = n1;
    num2 = n2;

}

friend int Maxnum(Number n);



};

int Maxnum(Number n){

    return (n.num1 > n.num2) ? n.num1 : n.num2;
}


int main(){

 int a, b;

 cout << "\nEnter Number 1 : " ;
 cin >> a ;

 cout << "Enter Number 2 : " ;
 cin >> b;

 Number num(a, b);

 cout << "\nThe Maximum Number : " << Maxnum(num) << endl;


    return 0;
}

