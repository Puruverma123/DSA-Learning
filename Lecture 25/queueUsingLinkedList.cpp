#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{

public:
    Node *front, *rare;
    int size;

    Queue()
    {
        front = rare = NULL;
        size = 0;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    // Isme kabhi bhi full ki condition nhi aayegi

    void push(int val)
    {
        if (isEmpty())
        {
            Node *temp = new Node(val);
            front = rare = temp;
            size++;
            cout << val << " pushed into queue\n";
            return;
        }
        else
        {
            // if already element is present in queue

            rare->next = new Node(val);
            rare = rare->next;
            size++;
            // rare->next = NULL;
            // return;
            cout << val << " pushed into queue\n";
            return;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty " << endl;
        }
        else
        {
            Node *temp = front;
            size--;
            front = front->next;
            cout << "Popped elemtent is " << temp->data << endl;
            delete temp;
            return;
        }
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty"<<endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }

    int isSize()
    {
        return size;
    }
};

int main()
{

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

  

    cout << "Size of queue is :" << q.isSize()<<endl;
    cout << "Front Element of queue is :" << q.getFront();

    return 0;
}