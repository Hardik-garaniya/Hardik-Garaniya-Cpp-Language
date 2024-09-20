// 4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>

using  namespace std;


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

int rollnumber;

void inputStudentData(){

inputPersonData();

cout << "Enter roll number : " ;
cin >> rollnumber;


}

void displayStudentData(){

displayPersonData();

cout << "Roll Number :" << rollnumber << endl;

}

};

class Marks{


public:

int subjectMarks[5];

void inputMarks(){

 cout << "Enter 5 Subject Marks :" << endl;
  for(int i = 0; i < 5; ++i){
   cin >> subjectMarks[i];

  }
  

}

void displayMarks(){

  cout << "Marks :" << endl;

  for(int i = 0; i < 5; ++i){

    cout << subjectMarks[i] << endl ;
  }

 cout << endl;

}

float calculateAverage(){

int sum = 0;
for(int i = 0; i < 5; ++i){

  sum += subjectMarks[i];

}

return sum / 5.0 ;


}


};


class MarkSheet : public Marks , public Student{

public:

void inputMarkSheetData(){

  inputStudentData();
  inputMarks();

}

void displayMarkSheetData(){

cout << "Student Mark Sheet :" << endl;

displayStudentData();
displayMarks();
cout << "Average : " << calculateAverage() << endl ;


}


};

int main(){

MarkSheet marksheet;

marksheet.inputMarkSheetData();
marksheet.displayMarkSheetData();



    return 0;
}







