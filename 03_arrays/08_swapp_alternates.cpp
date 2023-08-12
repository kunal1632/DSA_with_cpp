#include <iostream>
using namespace std;

void swapArr(int arr[], int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[100], size, a;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swapArr(arr, size);
    printArray(arr, size);
}