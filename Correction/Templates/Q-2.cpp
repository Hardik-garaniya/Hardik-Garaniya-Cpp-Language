// 2. Write a program of to sort the array using templates

#include <iostream>

using namespace std;

template <typename T>

void sortArray(T arr[], int size) {
 for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1 - i; j++) {

            if (arr[j] > arr[j + 1]) {
                
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
          }
    }
    }
 }

template <typename T>

void displayArray(T arr[], int size) {

    for (int i = 0; i < size; i++) {

        cout << arr[i] << " ";

    }

    cout << endl;
}

int main() {
    
    int intArr[] = {9, 2, 5, 3, 4, 6, 1, 7, 8, 10};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Original integer array: ";

    displayArray(intArr, intSize);

    sortArray(intArr, intSize);

    cout << "Sorted integer array: ";

    displayArray(intArr, intSize);

    return 0;
}