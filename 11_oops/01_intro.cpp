#include <iostream>
using namespace std;

class Hero
{
private:
    // properties
    int health;

    char level;

public:
    // constructor
    Hero()
    {
        cout << "Constructor called" << endl;
    }
    // parameterised constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    void print()
    {
        cout << level << endl;
    }
    // getter and setter
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int n)
    {
        health = n;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    /*
    Hero h1;
    Hero *h2 = new Hero;
    cout << "size of health: " << sizeof(h1) << endl;
    h1.setHealth(100);
    h1.setLevel('A');
    cout << "Health of the hero is: " << h1.getHealth() << endl;
    cout << "level of the hero is: " << h1.getLevel() << endl;

    cout << endl;
    h2->setHealth(80);
    h2->setLevel('B');
    cout << "Health of the hero is: " << (*h2).getHealth() << endl;
    cout << "level of the hero is: " << (*h2).getLevel() << endl;

    cout << endl;

    cout << "Health of the hero is: " << h2->getHealth() << endl;
    cout << "level of the hero is: " << h2->getLevel() << endl;
    */

    // constructor

    Hero kunal(100, 'A');
    cout << kunal.getHealth() << endl;
    cout << kunal.getLevel() << endl;

    return 0;
}