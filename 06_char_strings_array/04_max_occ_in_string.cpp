#include <iostream>
using namespace std;

char getMaxOcc(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        int number = 0;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            number = s[i] - 'a';
        }
        else
        {
            number = s[i] - 'A';
        }
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}

int main()
{
    string str;
    cout << "Enter the string: " << endl;
    cin >> str;
    cout << "the charachter which occure max time is: " << getMaxOcc(str) << endl;
    return 0;
}