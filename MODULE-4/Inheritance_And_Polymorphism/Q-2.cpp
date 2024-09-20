// 2. Write a C++ Program to find Area of Rectangle using inheritance


#include<iostream>

using namespace std;

class Shape{

public:

int height;
int width;

void setheight(int h){

    height = h;
}

void setwidth(int w){

    width = w;
}


};

class Rectangle : public Shape{

public:

int getarea(){

    return (height*width);
}




};

int main(){

Rectangle rectangle;

rectangle.setheight(10);
rectangle.setwidth(10);

cout << "\nTotal : " << rectangle.getarea() << endl;


    return 0;
}



