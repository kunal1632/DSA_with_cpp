#include <iostream>
using namespace std;

void printRowSum(int arr[][3], int row, int col)
{

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

void printColSum(int arr[][3], int row, int col)
{

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[3][3];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing the sum of rows: " << endl;
    printRowSum(arr, 3, 3);
    cout << endl;
    cout << "Printing the sum of columns" << endl;
    printColSum(arr, 3, 3);
    cout << endl;
}