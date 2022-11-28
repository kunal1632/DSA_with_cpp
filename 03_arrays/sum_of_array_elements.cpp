#include <iostream>
using namespace std;

int elementSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[100], size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = elementSum(arr, size);
    cout << "Sum of the elements of the array is:" << ans << endl;
}