#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Dog obj;
    obj.speak();
    return 0;
}