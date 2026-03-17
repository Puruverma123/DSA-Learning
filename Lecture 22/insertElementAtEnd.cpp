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

    Node *head = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (!head)
        {
            // first node creation
            head = new Node(arr[i]);
        }
        else
        {
            // other node creation by adding elements at last
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }

    // Traverse the list
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    Node *tail = head;

    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    Node *newNode = new Node(-10);

    tail->next = newNode;

    newNode->next = NULL;

    // Traverse the list
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}