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

    // Inset a node  after a particular node

    // insert 100 after 30

    temp = head;

    while (temp->data != 30)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(100);
    newNode->next = temp->next;
    temp->next = newNode;

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Insert Element before a element 12 se phele insert krdo 300

    if (head->data == 12)
    {
        Node *temp = new Node(300);
        temp->next = head;
        head = newNode;
    }

    Node *prev = NULL, *curr = head;

    while (curr->data != 12)
    {
        prev = curr;
        curr = curr->next;
    }

    temp = new Node(100);
    temp->next = curr;
    prev->next = temp;

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}