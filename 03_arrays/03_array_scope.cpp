#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << endl
         << "Inside the function" << endl;

    // updating array
    arr[0] = 35;

    // printing the array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to the main function " << endl;
}

int main()
{
    int arr[5] = {2, 5, 6, 7, 3};
    update(arr, 3);

    cout << " printing in the main function" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}