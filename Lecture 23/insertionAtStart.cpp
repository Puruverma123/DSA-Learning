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

    // Insertion at the start of the list

    Node *head = NULL, *temp = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (!head)
        {
            head = new Node(arr[i]);
        }
        else
        {
            temp = new Node(arr[i]);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    // traverse the list

    temp = head;

    while (temp)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    return 0;
}