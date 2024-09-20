// 2. Write a program of to sort the array using templates


#include <iostream> 
#include <algorithm> 

using namespace std;

int main() 
{ 
	int arr[] = {3, 5, 1, 2, 4}; 

	sort(begin(arr), end(arr)); 

	for (int i : arr) 

	{ 

		cout << i << " "; 

	} 
	

	

	return 0; 
} 
