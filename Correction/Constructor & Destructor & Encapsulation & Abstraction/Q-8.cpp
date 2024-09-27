// 8. Write a C++ program to implement a class called Student that has private variablmemberes for name, class, 
// roll number, and marks. Include member functions to calculate the grade based on the marks and display the
// student's information. Accept address from each student implement using of aggregation
#include <iostream>
#include <string>

using namespace std;

class Address {
private:
    string city;
    string subdistrict;
    string state;

public:
    Address(string c, string sub, string s) : city(c), subdistrict(sub), state(s) {}

    void display() {
        cout << city << ", " << subdistrict << ", " << state << endl;
    }
};

class Student {
private:
    string name;
    string classs;
    int rollnumber;
    float marks;
    Address address;

public:
    Student(string n, string c, int r, float m, Address addr)
        : name(n), classs(c), rollnumber(r), marks(m), address(addr) {}

    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 60) {
            return 'C';
        } else if (marks >= 40) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayStudentInfo() {
        cout << "\nName: " << name << endl;
        cout << "Class: " << classs << endl;
        cout << "Roll Number: " << rollnumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: ";
        address.display();
    }
};

int main() {
    string name, classs, city, subdistrict, state;
    int rollnumber;
    float marks;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter class: ";
    cin >> classs;

    cout << "Enter roll number: ";
    cin >> rollnumber;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter city: ";
    cin >> city;

    cout << "Enter subdistrict: ";
    cin >> subdistrict;

    cout << "Enter state: ";
    cin >> state;

    Address stdaddress(city, subdistrict, state);
    Student student(name, classs, rollnumber, marks, stdaddress);

    student.displayStudentInfo();

    return 0;
}