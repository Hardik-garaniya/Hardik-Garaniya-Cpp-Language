// 6. Write a C++ program to create a class called Person that has private member variables for name,
// age and country. Implement member functions to set and get the values of these variables.

#include<iostream>
#include<string>

using namespace std;

class person {

private:

string name;
int age;
string country;

public:

void setName(const string & n){

name = n;

}

void setAge(int a){

age = a;

}

void setCountry(const string & c){

country = c;

}

string getname(){

    return name;
}

int getage(){

 return age;

}

string getcountry(){

 return country;

}

};

int main(){


person p;

p.setName("Hardik Garaniya");
p.setAge(20);
p.setCountry("India");

cout << p.getname() << endl ;
cout << p.getage() << endl ;
cout << p.getcountry() << endl ;

return 0 ;




    
}

