#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        char temp = (ch - 'A') + 'a';
        return temp;
    }
    return ch;
}

int lengthStr(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkPalindrome(char str[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (str[s++] != str[e--])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[20];
    cout << "Enter a word: ";
    cin >> str;

    int len = lengthStr(str);

    for (int i = 0; str[i]; i++)
    {
        str[i] = toLowerCase(str[i]);
    }

    if (checkPalindrome(str, len))
    {
        cout << "The word is a palindrome" << endl;
    }
    else
    {
        cout << "The word is not a plaindrome" << endl;
    }
}