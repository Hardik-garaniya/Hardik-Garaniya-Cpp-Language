// 1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman.
// Total runs, Average runs and best performance. Member functions input data, calculate average runs, Displaydata.
//(Single Inheritance)


#include<iostream>

using namespace std;

class Cricketer{

protected:

 string name;
 int matches;

 public:

 Cricketer(string n, int m) : name(n), matches(m) {}

  void displayCricketerInfo(){

 cout << "Enter Your Name : " << name << endl;
 cout << "Your Total Mathes : " << matches << endl;


 }


};


class Batsman : public Cricketer {

protected:

int totalruns;
int bestperformance;

public:

Batsman(string& n, int m) : Cricketer(n , m) , totalruns(0), bestperformance(0){}


void inputData(){

 cout << "Enter total runs scored : " ;
 cin >> totalruns;

 cout << "Enter best performance (runs in a single match) : " ;
 cin >> bestperformance;



}

float calculateAverageRuns(){

return (matches > 0) ? float(totalruns) / matches : 0.0f;


}

void displayData(){

   displayCricketerInfo();

   cout << "Total Runs : " << totalruns << endl;
   cout << "Best Performance : " << bestperformance << endl;
   cout << "Average Runs : " << calculateAverageRuns() << endl;

}



};

int main(){

    string name;
    int matches;

    
 cout << "\nEnter the name of the cricketer: ";
 cin >> name;
 cout << "Enter the number of matches played: ";
 cin >> matches;
 
 Batsman batsman(name, matches);
 
 batsman.inputData();
 
 cout << "\nBatsman Detail : " << endl;
 
 batsman.displayData();
 
 
 return 0 ;
 
 }

