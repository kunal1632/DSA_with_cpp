#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 0;
    cout << "Enter the number: " << endl;
    cin >> n;

    int ans = fibonacci(n);
    cout << "The " << n << "th term of fibonacci series is: " << ans << endl;
}