#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainningPart = isSorted(arr + 1, size - 1);
        return remainningPart;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;

    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "array is not sorted";
    }
}