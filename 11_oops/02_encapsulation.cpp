#include <iostream>
using namespace std;

class student
{

private:
    string name = "Kunal";
    int age = 21;

public:
    void getName()
    {
        cout << "Name of the student is: " << this->name << endl;
    }
    void getAge()
    {
        cout << "age of the student is: " << this->age << endl;
    }
};

int main()
{
    student s1;
    s1.getName();
    s1.getAge();
    return 0;
}