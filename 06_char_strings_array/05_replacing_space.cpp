#include <iostream>
#include <string>
using namespace std;

string replaceSpace(string str)
{
    string str2 = "@40";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.replace(i, 1, str2);
        }
    }
    return str;
}

int main()
{
    string str = "";

    cout << "Enter the string: " << endl;
    getline(cin, str);
    cout << "original string: " << str << endl;
    string str2 = replaceSpace(str);
    cout << "modified string: " << str2 << endl;
}
