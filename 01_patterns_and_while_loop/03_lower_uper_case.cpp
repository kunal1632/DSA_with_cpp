#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a lette or a number:" << endl;
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "It is a upper charachter";
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "It is a smaller charachter";
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "It is a numaric value";
    }
}