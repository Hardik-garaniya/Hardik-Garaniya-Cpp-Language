 // 3. Write a C++ program to create a class called Car that has private member variables for company,
 // model, and year. Implement member functions to get and set these variables.

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    Car() : company(""), model(""), year(0) {}

    Car(const string& c, const string& m, int y) : company(c), model(m), year(y) {}

    void setCompany(const string& c) {
        company = c;
    }

    void setModel(const string& m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }

    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    void display() {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar;
    string company, model;
    int year;

    cout << "Enter company name: ";
    cin >> company;
    myCar.setCompany(company);

    cout << "Enter model name: ";
    cin >> model;
    myCar.setModel(model);

    cout << "Enter year: ";
    cin >> year;
    myCar.setYear(year);

    cout << "\nCar Details" << endl;
    myCar.display();

    cout << "\nEnter company name: ";
    cin >> company;
    cout << "Enter model name: ";
    cin >> model;
    cout << "Enter year: ";
    cin >> year;

    Car anotherCar(company, model, year);

    cout << "\nAnother Car Details" << endl;
    anotherCar.display();

    return 0;
}