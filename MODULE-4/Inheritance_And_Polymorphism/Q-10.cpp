//10.Write a program to concatenate the two strings using Operator Overloading


#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private:

    char* str;
    
 public:

 MyString(const char* s = "") {

        str = new char[strlen(s) + 1];

        strcpy(str, s);

    }

 MyString(const MyString& other) {

        str = new char[strlen(other.str) + 1];

        strcpy(str, other.str);

    }

 MyString operator+(const MyString& other) {

    
    MyString newString;

    
    delete[] newString.str; 

    
    newString.str = new char[strlen(this->str) + strlen(other.str) + 1];

    
    strcpy(newString.str, this->str);

    
    strcat(newString.str, other.str);

    
    return newString;

    }

   
 ~MyString() {

        delete[] str;

    }

    
 void display() const {

        cout << str << endl;

    }
};


int main() {

    MyString str1("Tops ");
    MyString str2("Technologies.");
    
    MyString str3 = str1 + str2;

    cout << "\nConcatenated String: " ;
    str3.display();

    return 0;
}
