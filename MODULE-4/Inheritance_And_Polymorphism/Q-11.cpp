// 11. Write a program to calculate the area of circle, rectangle and triangleusing Function Overloading

// Rectangle: Area * breadth
// Triangle: ½ *Area*
// breadthCircle: Pi * Area
// *Area



#include <iostream>
using namespace std;

double area(double radius) {

    const double PI = 3.14;
    return PI * radius * radius;

}

double area(double length, double breadth) {

    return length * breadth;

}

double area(double base, double height, bool isTriangle) {

    return 0.5 * base * height;

}

int main() {
    
    double radius, length, breadth, base, height;

    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    cout << "\nEnter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << area(length, breadth) << endl;

    cout << "\nEnter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height, true) << endl;

    return 0;
}
