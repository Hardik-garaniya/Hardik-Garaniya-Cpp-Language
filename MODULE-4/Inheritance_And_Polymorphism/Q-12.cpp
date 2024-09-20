// 12. Write a programto swap the two numbers using friend functionwithout using third variable

#include<iostream>

using namespace std;

class Swapper{

    private:

    int a, b;

    public:

    Swapper(int x, int y){

        a = x;
        b = y;

    }

     friend void swap(Swapper &s);


    void display(){

        cout << "A : " << a << endl;
        cout << "B : " << b << endl;

    }
};

void swap(Swapper &s){

    s.a = s.a + s.b;
    s.b = s.a - s.b;
    s.a = s.a - s.b;

}

int main(){

 Swapper s(20, 40);

 cout << "Before swapping : " << endl;
 s.display();

 swap(s);

 cout << "After swapping : " << endl;
 s.display();


    return 0;

}


