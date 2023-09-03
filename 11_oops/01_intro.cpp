#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
private:
    // properties
    int health;

    char level;

public:
    char *name;
    static int timeToComplete;
    // constructor
    Hero()
    {
        cout << "Constructor called" << endl;
        name = new char[100];
    }
    // parameterised constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random()
    {
        return timeToComplete;
    }
    // destructor
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{
    /*
    //static allocation
    Hero h1;
    Hero *h2 = new Hero;
    cout << "size of health: " << sizeof(h1) << endl;
    h1.setHealth(100);
    h1.setLevel('A');
    cout << "Health of the hero is: " << h1.getHealth() << endl;
    cout << "level of the hero is: " << h1.getLevel() << endl;

    //dynamic allocation
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

    // Hero kunal(100, 'A');
    // cout << "health of the hero is: " << kunal.getHealth() << endl;
    // cout << "health of the level is: " << kunal.getLevel() << endl;

    /*
    Hero kunal(100, 'A');

    Hero k(kunal);

    k.print();
    */
    /*
     Hero hero1;
     hero1.setHealth(100);
     hero1.setLevel('A');
     char name[6] = "kunal";
     hero1.setName(name);

     hero1.print();
     */

    /*
    // static
    Hero a;

    // dynamic
    Hero *b = new Hero();
    // manually
    delete b;
    */

    cout << Hero::timeToComplete;
    cout << endl;
    cout << Hero::random();

    return 0;
}