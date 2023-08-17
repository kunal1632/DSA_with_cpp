#include <iostream>
#include <string>
using namespace std;

string reverseing(string str)
{
    int s = 0;
    int e = str.length() - 1;

    while (s <= e)
    {
        swap(str[s++], str[e--]);
    }
    return str;
}

int main()
{
    string str = "kunal dhand goranshi goel";
    // cout << "Enter a string: " << endl;
    // cin >> str;
    string ans;
    int i = 0;

    while (i < str.length() - 1)
    {

        string temp = "";
        while (str[i] != ' ' && str[i] != '\0')
        {

            temp += str[i];
            i++;
        }
        i++;

        ans += reverseing(temp) + " ";
    }
    cout << ans;
    return 0;
}