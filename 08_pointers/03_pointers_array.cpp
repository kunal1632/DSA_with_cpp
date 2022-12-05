#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {2, 4, 6, 8};
    cout << "Address of the first memory block is : " << arr << endl;
    cout << "Address of the first memory block is : " << &arr[0] << endl;

    cout << "3rd: " << *arr << endl;
    cout << "4th: " << *(arr + 1) << endl;
    cout << "5th: " << *(arr) + 1 << endl;
    cout << "6th: " << arr[2] << endl;
    cout << "7th: " << *(arr + 2) << endl;
    cout << endl;

    int i = 3;
    cout << i[arr] << endl;

    int temp[10];
    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
    cout << endl;
    cout << endl;

    int a[20] = {1, 2, 3, 4};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    return 0;
}