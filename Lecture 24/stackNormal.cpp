#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);

    cout << "Top element is " << s.top() << endl;
    s.pop();
    cout << "Size of stack is " << s.size() << endl;
    cout << "Top element is " << s.top() << endl;
    s.pop();
    cout << "Stack size is " << s.size() << endl;
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}