// 5. Assume that the test results of a batch of students are stored in three different classes. Class Students are storing
// the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained
//in the test. The class result can inherit the details of the marks obtained in the test and roll number of students.
//(Multilevel Inheritance)

#include<iostream>

using namespace std;

class Student{

protected:

int rollnumber;

public:

void inputRollNumber(){

 cout << "\nEnter Roll Number : " ;
 cin >> rollnumber;


}

void displayRollNumber(){

 cout << "\nRoll Number : " << rollnumber << endl;


}




};

class Test{

protected:

int mark1;
int mark2;

public:

void inputMarks(){

  cout << "Enter Mark 1 : " ;
  cin >> mark1;

  cout << "Enter Mark 2 : " ;
  cin >> mark2;

}

void displayMarks(){

 cout << "Marks 1 : " << mark1 << endl;
 cout << "Marks 2 : " << mark2 << endl;


}


};

class Result : public Test , public Student{

public:

void displayResult(){

 displayRollNumber();
 displayMarks();

 int totalmarks = mark1 + mark2;

 cout << "Total Marks : " << totalmarks << endl;

}


};


int main(){

   Result result;

   result.inputRollNumber();
   result.inputMarks();
   cout << "\nStudent Result : " << endl;
   result.displayResult();
   
    return 0;
}




