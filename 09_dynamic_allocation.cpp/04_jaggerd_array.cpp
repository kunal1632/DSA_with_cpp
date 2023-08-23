#include <iostream>
using namespace std;

int main()
{
    // number of rows int the 2d array

    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    // initialising 2d dynamic array of number of rows

    int **arr = new int *[row];

    // user inputing the size of each row to make jaggerd array

    cout << "Enter the sizes of each row: ";
    int *sizes = new int(row);
    for (int i = 0; i < row; i++)
    {
        cin >> sizes[i];
    }

    // making rows of the sizes enterd by the user

    for (int i = 0; i < row; i++)
    {

        *(arr + i) = new int[sizes[i]];
    }
    // user inputing the values in the 2d array
    cout << "Enter the values in the 3d array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "element in the matrix are as follows: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}