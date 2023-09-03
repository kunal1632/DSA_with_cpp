#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight()
    {
        this->weight = weight;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }
};

int main()
{
    Male ob1;
    cout << ob1.age;
    cout << ob1.weight;
    cout << endl;
    ob1.sleep();
    return 0;
}