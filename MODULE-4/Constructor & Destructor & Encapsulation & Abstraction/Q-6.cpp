// 6. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and
// salary. Include member functions to calculate and set salary based on employee performance. Using of constructor


#include<iostream>

using namespace std;

class Employee{

    public:

string name;
double employeeId;
double salary;

Employee(string& empname, int empid, int empsalary){

    name = empname;
    employeeId = empid;
    salary = empsalary;


}

void calculateSalary(double performanceRating){

if(performanceRating >= 0.0 && performanceRating <= 2.0)
{

  salary *= performanceRating;

}
else
{

    cout << "Invalid performance rating. Salary remains unchanged." << endl; 


}



}

 void setSalary(double empSalary) {

      salary = empSalary;

    }

    string getName() const {

      return name; 

    }

    int getEmployeeId() const {

      return employeeId; 

    }

    double getSalary() const {

      return salary; 

    }



};

int main(){

string empname;
double empid;
double empsalary;

cout << "\nEnter employee name : " << endl;
cin >> empname;

cout << "\nEnter employee id : " << endl;
cin >> empid;

cout << "\nEnter employee salary : " << endl;
cin >> empsalary;

Employee employee(empname, empid, empsalary);

cout << "\nInitial salary : " << employee.getSalary() << endl;

double performanceRating;
cout << "\nEnter performanceRating rating (0.0-2.0) : " << endl;
cin >> performanceRating;

employee.calculateSalary(performanceRating);


cout << "\nUpdated salary : " << employee.getSalary() << endl;

    return 0;
}


