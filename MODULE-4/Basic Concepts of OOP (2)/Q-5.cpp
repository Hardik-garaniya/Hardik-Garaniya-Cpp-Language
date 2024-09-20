// 5. Write a C++ program to create a class called Rectangle that has private member variables for length and width.
// Implement member functions to calculate the rectangle's area and perimeter.


#include <iostream>

using namespace std;

class Rectangle {

private:
    double length;
    double width;

public:

    Rectangle(double len, double wid) : length(len), width(wid) {}

    double calculateArea() const {
        return length * width;
    }

    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;

    cout << "\nInput the length of the rectangle: ";
    cin >> length;

    cout << "\nInput the width of the rectangle: ";
    cin >> width;

    Rectangle rect(length, width);

    double area = rect.calculateArea();
    cout << "\nArea: " << area << endl;

    double perimeter = rect.calculatePerimeter();
    cout << "\nPerimeter: " << perimeter << endl;

    return 0;
}
