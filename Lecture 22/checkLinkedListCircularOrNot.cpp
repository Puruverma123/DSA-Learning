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

bool isCircular(Node *head)
{

    Node *temp = NULL;

    temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }

    return false;
}

int main()
{

    // int arr[] = {10, 20, 30, 40, 50};
    int arr[] = {8, 16, 24, 32, 40, 48};

    Node *head = NULL, *temp = NULL;

    for (int i = 0; i < 6; i++)
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

    temp->next = head;

    bool isCheck = isCircular(head);
    cout << "Check" << isCheck;

    // cout << temp->next << endl;
    // cout << head;

    // Traverse the list

    // cout << "Print" << endl;

    // temp = head;
    // while (temp)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    return 0;
}