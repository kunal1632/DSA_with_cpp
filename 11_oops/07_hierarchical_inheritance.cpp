#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Inside function 1" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Inside function 2" << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "Inside function 3" << endl;
    }
};

int main()
{
    A ob1;
    ob1.func1();

    B ob2;
    ob2.func1();
    ob2.func2();

    C ob3;
    ob3.func1();
    ob3.func3();
    return 0;
}