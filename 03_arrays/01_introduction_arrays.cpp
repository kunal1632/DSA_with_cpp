#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "printing done" << endl;
}

int main()
{
    // declareation of array
    int number[15];

    // accessing an array
    cout << "value at 5 index is:" << number[5] << endl;
    cout << "value at 10 index is:" << number[10] << endl;

    // initialising an array
    int second[5] = {3, 5, 7, 13};

    // accesing an element
    cout << "value at 10 index is:" << second[1] << endl;

    int third[15] = {2, 7};
    int n = 15;
    printArray(third, n);
    printArray(second, 5);
    printArray(number, 15);
}