#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {

        // triangle 1
        int t1 = 1;
        while (t1 <= n - i + 1)
        {
            cout << t1;
            t1++;
        }

        // triangle 2
        int t2 = n - i + 1;
        while (t2 < n)
        {
            cout << "**";
            t2++;
        }

        // triangle 3
        int t3 = t1 - 1;
        while (t3 >= 1)
        {
            cout << t3;
            t3--;
        }

        cout << endl;
        i++;
    }
}