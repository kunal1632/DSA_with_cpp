#include <iostream>
using namespace std;

int fiboTerm(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        int nextNumber = 1;
        int a = 0;
        int b = 1;
        for (int i = 1; i <= (n - 2); i++)
        {
            nextNumber = a + b;
            a = b;
            b = nextNumber;
        }
        return nextNumber;
    }
}

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << fiboTerm(n);
}