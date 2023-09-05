#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void bark()
    {
        cout << "barking" << endl;
    }
};

class Human
{
public:
    string color;

    void speak()
    {
        cout << "speaking" << endl;
    }
};

class BothHybrid : public Animal, public Human
{
};

int main()
{
    BothHybrid d;
    d.speak();
    d.bark();
    cout << d.age << endl;
}