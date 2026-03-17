#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    Node *head = NULL, *tail = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (!head)
        {
            // first node creation
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            // other node creation by adding elements at last
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    // Traverse the list
    tail = head;

    while (tail != NULL)
    {
        cout << tail->data << " ";
        tail = tail->next;
    }

    return 0;
}