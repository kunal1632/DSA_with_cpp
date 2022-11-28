#include <iostream>
#include <vector>
using namespace std;

void printingArr(vector<vector<int>> arr)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> rotatingMatrix(vector<vector<int>> arr)
{
    vector<vector<int>> ans;
    int i = 0;
    while (i < 3)
    {

        int j = 0;
        vector<int> temp;
        while (j < 3)
        {
            int k = 2 - j;
            temp.push_back(arr[k][i]);
            j++;
        }
        ans.push_back(temp);
        i++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Printing the original array: " << endl;
    printingArr(arr);

    vector<vector<int>> finalAns = rotatingMatrix(arr);
    cout << "Printing rotated array: " << endl;
    printingArr(finalAns);
}