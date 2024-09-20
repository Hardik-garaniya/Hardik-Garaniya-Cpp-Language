// 7. Write a C++ program to implement a class called Date that has private member variables for day,month, and year.
// Include member functions to set and get these variables, as well as to validate if the date is valid.

#include<iostream>

using namespace std;

class Date{

public:
int day;
int month;
int year;

Date(int d, int m, int y){

day = d;
month = m;
year = y;

}

void Setdate(int d, int m, int y){


day = d;
month = m;
year = y;


}

int getDay(){

    return day;
}

int getMonth(){


    return month;
}

int getYear(){


    return year;
}

bool isvalid(){

if(month < 1 || month > 12)
{

 return false;

}

if(month == 4 || month == 6 || month == 9 || month == 11 && day > 30)
{

 return false;

}

if (month == 2)

if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0))
{

if(day > 29)
{

 return false;

}

}
else
{

 if(day > 28)
 {
  return false;
 }
 
}

}

};

int main(){

Date date(0, 0, 0);

int day,  month, year;

cout << "\nEnter your day : " << endl;
cin >> day;

cout << "\nEnter your month : " << endl;
cin >> month;

cout << "\nEnter your year : " << endl;
cin >> year;

date.Setdate(day, month, year);

cout << "\nDate : " << date.getDay() << "/" << date.getMonth()  << "/" << date.getYear() << endl;

if(date.isvalid())
{

 cout << "\nThe date is valid. " << endl;

}
else
{

 cout << "\nThe date is invalid. " << endl;

}


  return 0;
}


