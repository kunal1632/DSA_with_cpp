#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int count = row;
        while (col <= row)
        {
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
}