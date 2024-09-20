// 5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its
// three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>

using namespace std;



class Triangle{

public:

int side1;
int side2;
int side3;

Triangle(int s1, int s2, int s3){

side1 = s1;
side2 = s2;
side3 = s3;

}

void determineType(){

if(side1 == side2 && side2 == side3)
{

 cout << "\nEquilateral Triangle. " << endl;


}
else if(side1 == side2 && side1 == side3)
{

 cout << "\nIsosceles Triangle" << endl;

}
else
{

    cout << "\nScalene Triangle" << endl;

}


}

};

int main(){

int s1, s2, s3;

cout << "Input the lengths of the three sides of the triangle:\n";

cout << "Side 1 : " ;
cin >> s1;

cout << "Side 2 : ";
cin >> s2;

cout << "Side 3 : ";
cin >> s3;


Triangle triangle(s1, s2, s3);

triangle.determineType();

return 0;


}


