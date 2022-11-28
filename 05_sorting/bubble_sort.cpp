#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if ((arr[j] > arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

void printingArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8] = {3, 5, 8, 4, 1, 6, 9, 2};
    int n = 8;
    bubble_sort(arr, n);
    printingArr(arr, n);
}