#include <iostream>
using namespace std;

class Queue
{
public:
    int front, rare;
    int *arr;
    int capacity, totalElements;

    Queue(int size)
    {
        arr = new int[size];
        capacity = size;
        front = rare = -1;
        totalElements = 0;
    }

    bool isEmpty()
    {
        return totalElements == 0;
    }
    bool isFull()
    {
        return totalElements == capacity;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Queue is Overflow" << endl;
            return;
        }
        else if (isEmpty())
        {
            front = rare = 0;
            arr[rare] = val;
            totalElements++;
            cout << "Pushed into queue " << val << endl;
            return;
        }
        else
        {
            rare = (rare + 1) % capacity;
            arr[rare] = val;
            totalElements++;
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
            // front = front + 1;
            front = (front + 1) % capacity;
            totalElements--;

            if (totalElements == 0)
            {
                front = rare = -1;
            }

            // if front > rare then queue is empty
            // if (front > rare)
            // {
            //     front = rare = -1; // reset the queue
            // }
            return;
        }
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
        // if (isEmpty())
        // {
        //     return 0;
        // }
        // else
        // {
        //     return rare - front + 1;
        // }

        return totalElements;
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
    q.push(60);
    q.push(70);
    q.push(80);
    q.pop();
    cout << "Front element of queue is : " << q.getFront() << endl;
    q.push(90);
    
    cout << "Size of queue is : " << q.size() << endl;

    return 0;
}