//  4. Write a C++ program to implement a class called Circle that has private member variables for radius.
//  Include member functions to calculate the circle's area and circumference.

#include<iostream>

#include<cmath>

double PI = 3.14;

using namespace std;



class circle {

private:

double radius;

public:

circle(double rad) : radius(rad) {}

double calculateArea(){

return PI * pow(radius, 2); 

}

double calculateCircumference(){

return 2 * PI * radius; 

}


};

int main(){

double radius;

cout << "Input the radius of the circle : ";
cin >> radius;
circle circle(radius);


double area = circle.calculateArea();
cout << "Area : " << area << endl;

  double circumference = circle.calculateCircumference();
  cout << "circumference :" << circumference  << endl ;



}