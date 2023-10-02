#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // creating a empty stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(4);

    // pop operation
    s.pop();

    cout << "Printing the top element of the stack: " << s.top() << endl;

    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    cout << "stack of size is " << s.size() << endl;

    return 0;
}