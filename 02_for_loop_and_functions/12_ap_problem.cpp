#include <iostream>
using namespace std;

int nthTerm(int n, int a, int d)
{
    int ans = 1;
    ans = (d * (n - 1)) + a;
    return ans;
}

int main()
{
    int n, a, d;
    cout << "Enter the first term of AP:" << endl;
    cin >> a;
    cout << "Enter the difference of the AP:" << endl;
    cin >> d;
    cout << "Enter the number of term: " << endl;
    cin >> n;

    cout << nthTerm(n, a, d);
}