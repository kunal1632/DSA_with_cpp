#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    int ans = 0;
    int i = 0;
    int newAns;

    if (n > 0)
    {
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
            i++;
        }
        cout << "Answer is:" << ans << endl;
    }
    else
    {
        while (n != 0)
        {
            n = n * -1;
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            newAns = (~ans);
            newAns = newAns + 1;

            n = n >> 1;
            i++;
        }
        cout << "Answer is:" << newAns << endl;
    }
}