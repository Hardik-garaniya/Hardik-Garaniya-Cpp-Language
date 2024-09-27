// 1. Write a programto find the multiplication values and the cubic values usinginline function

#include <iostream>

using namespace std;

class Hardik {
public:
    double multiplication(double v1, double v2) {
        return (v1 * v2);
    }

    double cube(double y) {
        return (y * y * y);
    }
};

int main() {
  
    Hardik hh;

    double v1, v2;

    cout << "Enter 1st value: ";
    cin >> v1;

    cout << "Enter 2nd value: ";
    cin >> v2;

    cout << "\nMultiplication value is: " << hh.multiplication(v1, v2) << endl;
    cout << "\nCube of " << v1 << " is: " << hh.cube(v1) << endl;
    cout << "Cube of " << v2 << " is: " << hh.cube(v2) << endl;

    return 0;
}