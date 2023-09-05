#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "Hello Kunal Dhand" << endl;
    }

    void func(string name)
    {
        cout << "Hello " << name << endl;
    }

    int func(int n)
    {
        cout << "Hello Kunal Dhand" << endl;
        cout << n << endl;
        return n;
    }
};

int main()
{
    A obj;
    obj.func();
    obj.func("kunal");
    obj.func(5);
}