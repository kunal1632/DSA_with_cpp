#include <iostream>
#include <string>
using namespace std;

string reverseing(string ch)
{
    int s = 0;
    int e = ch.length() - 1;

    while (s < e)
    {
        swap(ch[s++], ch[e--]);
    }
    return ch;
}

int main()
{
    string str = "";
    cout << "Enter a string: " << endl;
    cin >> str;
    string ans;
    cout << str;

    for (int i = 0; i < str.length(); i++)
    {

        string temp = "";
        while (str[i] != ' ')
        {
            temp.push_back(str[i]);
            i++;
            // cout << temp;
        }

        // temp = reverseing(temp);
        // ans.push_back(temp);
    }

    // cout << ans;

    return 0;
}