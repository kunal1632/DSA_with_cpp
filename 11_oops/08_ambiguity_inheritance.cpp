#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "class A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "class B" << endl;
    }
};

class C : public A, public B
{
public:
    // void func()
    // {
    //     cout << "class C" << endl;
    // }
};

int main()
{
    C obj;

    obj.A::func();
    obj.B::func();
    return 0;
}