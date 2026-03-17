#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    int value;
    Node *next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

int main()
{

    int arr[] = {10, 4, 9, 7};

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
            temp = temp->next;
        }
    }

    Node *slow = head, *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Slow value " << slow->value << endl;
    cout << "Fast value " << fast->value << endl;

    Node *prev = slow->next;
    slow->next = NULL, fast->next = NULL;

    slow = head;

    while (slow)
    {
        cout << slow->value << " ";
        slow = slow->next;
    }

    while (prev && fast)
    {
        cout << prev->value << " ";
        // fast = fast->next;
        prev = prev->next;
        fast = fast->next;
    }

    // traverse the list

    // temp = head;

    // while (temp)
    // {
    //     cout << temp->value << " ";
    //     temp = temp->next;
    // }

    return 0;
}