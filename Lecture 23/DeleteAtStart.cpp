#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    int value;
    Node *prev;
    Node *next;

    Node(int data)
    {
        value = data;
        prev = NULL;
        next = NULL;
    }
};

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    // Insertion at the end of the list

    Node *head = NULL, *temp = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (!head)
        {
            head = new Node(arr[i]);
            temp = head;
        }
        else
        {
            temp->next = new Node(arr[i]);
            temp->next->prev = temp;
            temp = temp->next;
        }
    }

    // Delete First Node

    temp = head;

    head = head->next;
    delete temp;

    // traverse the list
    temp = head;

    while (temp)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    return 0;
}