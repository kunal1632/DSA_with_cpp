#include <iostream>
using namespace std;

void search(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (num == arr[i])
        {
            cout << "Element was foudn at the: " << i << " key" << endl;
            return;
        }
    }
    cout << "Element was not found";
    return;
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
    cout << "Enter the element to search: " << endl;
    cin >> a;
    search(arr, size, a);
}