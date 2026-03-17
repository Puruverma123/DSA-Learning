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

    int x = 4;

    // Insertion at the end of the list

    Node *head = NULL, *temp = NULL, *curr = NULL;

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

    temp = NULL;
    curr = head;

    x = x - 1;

    // Delete given position Node

    while (x--)
    {
        temp = curr;
        curr = curr->next;
    }

    temp->next = curr->next;
    curr->next->prev = temp;

    delete curr;
    // cout << curr->value;

    // traverse the list
    temp = head;

    while (temp)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    return 0;
}