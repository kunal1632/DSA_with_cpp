#include <iostream>
using namespace std;

int lengthStr(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseStr(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
    cout << name;
}

int main()
{
    char name[20];
    cout << "Enter your name";
    cin >> name;

    cout << name << endl;

    cout << name[2] << endl;

    int len = lengthStr(name);

    cout << "Length of the string is: " << len << endl;
    reverseStr(name, len);
    cout << "Reversed string is: " << name << endl;
}