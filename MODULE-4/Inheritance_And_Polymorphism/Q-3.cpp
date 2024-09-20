// 3. Create a class person having members name and age. Derive a class student having member percentage.
// Derive another class teacher having member salary. Write necessary member function to initialize,
//read and write data. Write also Main function (Multiple Inheritance)
 
#include<iostream>

using namespace std;

class Person{

    public:

    string name;
    int age;

    void inputPersonData(){

      cout << "Enter your name : " ;
      cin >> name;

      cout << "Enter your age : " ;
      cin >> age;

    }


   void displayPersonData(){

    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;


   }

};

class Student : public Person{

public:

float percentage;

void inputStudentData(){

inputPersonData();

cout << "Enter percentage : " ;
cin >> percentage;



}

void displayStudentData(){

displayPersonData();

cout << "Percentage : " << percentage << "%" << endl;

}

};

class Teacher : public Person{

public:

float salary;

void inputTeacherData(){

inputPersonData();

cout << "Enter your salary : " ;
cin >> salary;


}

void displayTeacherData(){

displayPersonData();

cout << "Salary : " << salary << endl;


}

};

int main(){

Student student;

Teacher teacher;

cout << "Enter student detail :" << endl;
student.inputStudentData();

cout << "\nEnter teacher detail :" << endl;
teacher.inputTeacherData();

cout << "\nStudent Data :" << endl;
student.displayStudentData();

cout << "\nTeacher Data : " << endl;
teacher.displayTeacherData();



    return 0;
}



