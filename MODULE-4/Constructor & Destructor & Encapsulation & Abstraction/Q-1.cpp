// 1. Write a programto find the multiplication values and the cubic values usinginline function

#include<iostream>

using namespace std;

class Hardik {

  public:
  
  double multiplication(double v1, double v2){
  
   return (v1 * v2);
  
  
  }
  
  double cube(double y){
  
  
   return (y * y * y);
  
  }




};

int main(){

   Hardik hh;
   
   double v1, v2;
   
   cout << "Enter 1st value : " << endl;
   cin >> v1;
   
   cout << "Enter 2st value : " << endl;
   cin >> v2;
   
   cout << "\nMultiplication value is : " << hh.multiplication(v1 , v2) << endl;
   cout << "\ncube value is : [ " <<hh.cube(v1)<<" ] is : ["<<hh.cube(v2)<<" ]\n";
   
  

    return 0;
}