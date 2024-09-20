// 6. Write a C++ Program to show access to Private Public and Protected using Inheritance



#include<iostream>

using namespace std;

class Base {

private:

int pvt = 1;

protected:

int prot = 2;

public:

int pub = 3;

int getPVT(){

    return pvt;
}


};

class ProtectedDerived : protected Base {

public:

getPROT(){

    return prot;
}

getPUB(){

   return pub;
}


};

int main(){

 ProtectedDerived obj1;

 cout << "\nPrivate cannot be accessed." << endl;
 cout << "Protected = " << obj1.getPROT() << endl;
 cout << "Public = " << obj1.getPUB() << endl;


    return 0;
}





