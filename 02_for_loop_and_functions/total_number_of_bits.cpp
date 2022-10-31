#include <iostream>
using namespace std;

int numberOfBits(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int a, b, ans = 0;
    cout << "Enter first nmbers: " << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    ans = numberOfBits(a) + numberOfBits(b);
    cout << ans;
}