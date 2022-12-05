#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    cout << num << endl;

    // address of operator -&
    cout << "Address of the operator is: " << &num << endl;
    ;

    int *ptr = &num;
    cout << "Valuse is: " << *ptr << endl;

    cout << "Addres is: " << ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << *p2 << endl;

    cout << "Size of the pointer is: " << sizeof(ptr) << endl;
    cout << "Size of the pointer is: " << sizeof(d) << endl;

    return 0;
}