#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    // Print before inserting at the bottom
    cout << "Stack before inserting at the bottom: "<<endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // Insert an element at the bottom of stack
    stack<int> tempStack;

    while (!s.empty())
    {
        tempStack.push(s.top());
        s.pop();
    }

    s.push(0);

    while (!tempStack.empty())
    {
        s.push(tempStack.top());
        tempStack.pop();
    }

    // Print the stack elements
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}