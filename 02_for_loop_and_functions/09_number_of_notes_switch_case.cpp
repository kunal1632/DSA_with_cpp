#include <iostream>
using namespace std;

int main()
{

    int val;
    int thousand = 0;
    int hundred = 0;
    int fifty = 0;
    int twenty = 0;
    int ten = 0;
    int five = 0;
    int one = 0;
    cout << "Enter a value:";
    cin >> val;
    int num;
    num = val;
    int temp = 0;

    for (int i = 1; i <= 6; i++)
    {

        if (num > 1000)
        {
            temp = 1000;
        }
        else if (num < 1000 && num > 100)
        {
            temp = 100;
        }
        else if (num < 100 && num > 50)
        {
            temp = 50;
        }
        else if (num < 50 && num > 10)
        {
            temp = 10;
        }
        else if (num < 10 && num > 5)
        {
            temp = 5;
        }
        else if (num < 5 && num > 0)
        {
            temp = 1;
        }

        switch (temp)
        {
        case 1000:
            thousand = num / 1000;
            num = num % 1000;
            break;
        case 100:
            hundred = num / 100;
            num = num % 100;
            break;
        case 50:
            fifty = num / 50;
            num = num % 50;
            break;
        case 10:
            ten = num / 10;
            num = num % 10;
            break;
        case 5:
            five = num / 5;
            num = num % 5;
            break;
        case 1:
            one = num;
            break;
        }
    }
    cout << "Number of notes we need to make " << val << " are:" << endl;
    cout << "Thousand:" << thousand << endl;
    cout << "Hundred:" << hundred << endl;
    cout << "fifty:" << fifty << endl;
    cout << "ten:" << ten << endl;
    cout << "five:" << five << endl;
    cout << "one:" << one << endl;
}