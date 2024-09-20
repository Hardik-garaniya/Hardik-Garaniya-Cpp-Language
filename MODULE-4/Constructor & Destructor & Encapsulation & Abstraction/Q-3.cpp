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

    string getCompany()  {

        return company;

    }

    string getModel()  {

        return model;

    }

    int getYear()  {

        return year;
        
    }

    void display()  {

        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        
    }
};

int main() {
    Car myCar;

    myCar.setCompany("Mahindra");
    myCar.setModel("Thar");
    myCar.setYear(2024);

    cout << "Car Details" << endl;
    myCar.display();

    Car anotherCar("Mahindra", "Thar ROX", 2024);

    cout << "\nAnother Car Details" << endl;
    anotherCar.display();

    return 0;
}
