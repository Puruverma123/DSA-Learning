#include <iostream>
#include <vector>
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

void reversePrint(Node *head)
{
    if (head == NULL)
        return;

    reversePrint(head->next);
    cout << head->data << " ";
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    Node *head = NULL, *temp = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            temp = head;
        }
        else
        {
            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }

    reversePrint(head);

    // Traverse the list

    cout << "Print" << endl;

    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}