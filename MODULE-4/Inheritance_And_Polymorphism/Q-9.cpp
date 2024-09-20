//9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix {

private:

    int* arr; 
    int size;

public:
   
 Matrix(int s) : size(s) {

        arr = new int[size];

    }


 ~Matrix() {

        delete[] arr;

    }

   
    void input() {

    cout << "Enter " << size << " elements: ";

     for (int i = 0; i < size; i++) {

        cin >> arr[i];

        }

    }

Matrix operator+( Matrix& other) {

    if (size != other.size) {

        cout << "Matrix sizes do not match!" << endl;

        exit(1); 

        }

    Matrix result(size);

    for (int i = 0; i < size; i++) {

         result.arr[i] = arr[i] + other.arr[i];

     }

        return result;


    }

    void display() {

    for (int i = 0; i < size; i++) {

        cout << arr[i] << " ";

    }

     cout << endl;

    }

};


int main() {
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Matrix 1:" << endl;
    matrix1.input();

    cout << "Matrix 2:" << endl;
    matrix2.input();

    Matrix result = matrix1 + matrix2;

    cout << "Result of addition:" << endl;
    result.display();

    return 0;
}
