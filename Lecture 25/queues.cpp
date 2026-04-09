#include <iostream>
using namespace std;

class Queue
{
public:
    int front, rare;
    int *arr;
    int capacity;

    Queue(int size)
    {
        arr = new int[size];
        capacity = size;
        front = rare = -1;
    }

    bool isEmpty()
    {
        return rare == -1 || front > rare;
    }

    bool isFull()
    {
        return rare == capacity - 1;
    }

    void push(int val)
    {
        // if (rare == capacity - 1)
        // {
        //     cout << "Queue is Overflow";
        // }
        // else
        // {
        //     arr[++rare] = val;
        //     cout << "Pushed into queue " << val << endl;
        // }

        if (isFull())
        {
            cout << "Queue is Overflow" << endl;
            return;
        }
        else if (isEmpty())
        {
            front = rare = 0;
            arr[rare] = val;
            cout << "Pushed into queue " << val << endl;
            return;
        }
        else
        {
            arr[++rare] = val;
            cout << "Pushed into queue " << val << endl;
            return;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is Underflow";
            return;
        }
        else
        {
            cout << arr[front] << " popped from queue\n";
            front = front + 1;

            // if front > rare then queue is empty
            if (front > rare)
            {
                front = rare = -1; // reset the queue
            }
            return;
        }
        // if (front == rare)
        // {
        //     cout << "Queue is Underflow";
        // }
        // else
        // {
        //     cout << arr[++front] << " popped from queue\n";
        // }
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int size()
    {
        if (isEmpty())
        {
            return 0;
        }
        else
        {
            return rare - front + 1;
        }
    }
};

int main()
{
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // q.push(60);

    q.pop();
    q.pop();
    q.pop();
    cout << "Front element of queue is : " << q.getFront() << endl;

    cout << "Size of queue is : " << q.size() << endl;

    return 0;
}