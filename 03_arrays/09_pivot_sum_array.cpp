#include <iostream>
using namespace std;

int sumLeft(int nums[], int mid)
{
    int sum = 0;
    int s = 0;
    while (s < mid)
    {
        sum = sum + nums[s];
        s++;
    }

    return sum;
}

int sumRight(int arr[], int mid)
{
    int e = 5;
    int sum = 0;

    while (e > mid)
    {
        sum = sum + arr[e];
        e--;
    }

    return sum;
}

int main()
{
    int nums[6] = {1, 7, 3, 6, 5, 6};
    int s = 0;
    int e = 5;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (sumLeft(nums, mid) == sumRight(nums, mid))
        {
            ans = mid;
            break;
        }
        else if (sumLeft(nums, mid) > sumRight(nums, mid))
        {
            e = mid;
        }
        else if (sumLeft(nums, mid) < sumRight(nums, mid))
        {
            s = mid;
        }
        else
        {
            ans = -1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;
}
