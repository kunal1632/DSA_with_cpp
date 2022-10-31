#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 3;
    cout << "a&b=" << (a & b) << endl;
    cout << "a|b=" << (a | b) << endl;
    cout << "~a=" << ~a << endl;
    cout << "a^b=" << (a ^ b) << endl;

    cout << "a<<b=" << (a << b) << endl;

    int i = 10;
    cout << (i++) << endl; // 10
    cout << (++i) << endl; // 12
    cout << (i--) << endl; // 12
    cout << (--i) << endl; // 10
}