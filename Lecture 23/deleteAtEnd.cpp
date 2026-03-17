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

    while (curr->next)
    {
        temp = curr;
        curr = curr->next;
    }

    cout << temp->value << endl;
    cout << curr->value << endl;

    temp->next = NULL;
    temp->prev = NULL;

    delete curr;

    // traverse the list
    temp = head;

    while (temp)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    return 0;
}