#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "The number is positive";
    }
    else if (a < 0)
    {
        cout << "The number is negitive";
    }
    else
    {
        cout << "the number is zero";
    }
}