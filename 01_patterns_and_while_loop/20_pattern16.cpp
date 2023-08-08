#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {

        // tringle1
        int t1 = n - i + 1;
        int count1 = 1;
        while (t1)
        {

            cout << count1;
            count1++;
            t1--;
        }

        // tringl2

        int t2 = 2;
        while (t2 <= i)
        {
            cout << "**";
            t2++;
        }

        // tringle3

        int t3 = n;
        int count2 = n - i + 1;
        while (t3 >= i)
        {

            cout << count2;
            count2--;
            t3--;
        }

        i++;
        cout << endl;
    }
}