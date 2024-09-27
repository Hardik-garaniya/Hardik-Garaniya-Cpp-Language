// 2. Write a C++ Program to find Area of Rectangle using inheritance
#include <iostream>

using namespace std;

class Shape {
public:
    int height;
    int width;

    void setHeight(int h) {
        height = h;
    }

    void setWidth(int w) {
        width = w;
    }
};

class Rectangle : public Shape {
public:
    int getArea() {
        return (height * width);
    }
};

int main() {
    Rectangle rectangle;
    int height, width;

    cout << "Enter height: ";
    cin >> height;
    rectangle.setHeight(height);

    cout << "Enter width: ";
    cin >> width;
    rectangle.setWidth(width);

    cout << "\nTotal area: " << rectangle.getArea() << endl;

    return 0;
}