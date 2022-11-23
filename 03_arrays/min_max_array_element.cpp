#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n)
{
    int min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter the size of array:" << endl;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum element is array is:" << getMax(num, size) << endl;
    cout << "Minimum element is array is:" << getMin(num, size) << endl;

    return 0;
}