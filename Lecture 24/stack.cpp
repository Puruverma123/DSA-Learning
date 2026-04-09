#include <iostream>
using namespace std;

class Stack
{
public:
    int index;
    int arr[100];

    Stack()
    {
        index = -1;
    }

    void push(int val)
    {
        if (index == 99)
        {
            cout << "Stack is overflow";
        }
        else
        {
            arr[++index] = val;
            cout << "push into stack " << val << endl;
        }
    }

    void pop()
    {
        if (index == -1)
        {
            cout << "Stack is underflow";
        }
        else
        {
            cout << arr[index--] << " popped from the stack\n";
        }
    }

    int top()
    {
        //  Iss condition ko isliye check nhi kr rhe kyuki agr index -1 bhi hua toh return krne se -1 return hoga jo ki stack m nhi hoga aur isse pata chal jayega ki stack empty h
        //   if (index == -1)
        // {
        //     cout << "Stack is underflow";
        // }
        return arr[index];
    }

    bool empty()
    {
        return index == -1;
    }

    int size()
    {
        return index + 1;
    }
};



int main()
{

    Stack s;

    // ye sab O(1) m ho rha h
    s.push(10);
    s.push(20);

    cout << s.size() << endl;
    cout << s.top() << endl;
    cout << s.empty() << endl;

    // s.pop();
    // s.pop();
    // s.pop();

    return 0;
}