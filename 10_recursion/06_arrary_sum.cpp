#include <iostream>
using namespace std;

int arrSum(int arr[], int n, int sum)
{
    if (n == 0)
    {
        sum = sum + arr[n];
        return sum;
    }
    sum = arrSum(arr, n - 1, sum) + arr[n];

    return sum;
}

int main()
{
    int arr[5] = {2, 3, 5, 6, 1};
    int size = 5;
    int sum = 0;
    int ans;

    ans = arrSum(arr, size, sum);
    cout << "Sum of the array is: " << ans << endl;
    return 0;
}