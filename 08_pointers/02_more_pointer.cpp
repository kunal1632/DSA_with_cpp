#include <iostream>
using namespace std;

int main()
{
    int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p1 = 0;
    p1 = &i;
    cout << p1 << endl;
    cout << *p1 << endl;

    int num = 5;

    cout << num << endl;

    int *p2 = &num;
    cout << "Before " << num << endl;
    (*p2)++;
    cout << "After " << num << endl;

    int *a = p2;

    cout << p2 << " - " << a << endl;
    cout << *p2 << " - " << *a << endl;

    return 0;
}