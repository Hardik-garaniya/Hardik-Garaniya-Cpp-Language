// 7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include<iostream>

using namespace std;

class Base{

public:

Base(){

    cout << "\nBase class constructor called." << endl;
}


};

class Derived1 : public Base {

public:

Derived1(){

    cout << "Derived1 class constructor called." << endl;
}



};

class Derived2 : public Derived1 {

public :

Derived2(){

    cout << "Derived2 class constructor called." << endl;
}


};

int main(){

 cout << "\nCreating object of Derived2..."  << endl;  

 Derived2 obj;

 return 0;

}



